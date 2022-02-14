
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_12__ ;
typedef struct TYPE_23__ TYPE_11__ ;
typedef struct TYPE_22__ TYPE_10__ ;


struct TYPE_28__ {int renderfx; scalar_t__ customSkin; scalar_t__ customShader; int oldframe; int frame; } ;
struct TYPE_29__ {TYPE_4__ e; } ;
typedef TYPE_5__ trRefEntity_t ;
struct TYPE_30__ {TYPE_8__* shader; int name; } ;
typedef TYPE_6__ srfIQModel_t ;
struct TYPE_31__ {int numSurfaces; TYPE_3__* surfaces; } ;
typedef TYPE_7__ skin_t ;
struct TYPE_32__ {scalar_t__ sort; } ;
typedef TYPE_8__ shader_t ;
typedef int qboolean ;
struct TYPE_33__ {int num_surfaces; int num_frames; TYPE_6__* surfaces; } ;
typedef TYPE_9__ iqmData_t ;
struct TYPE_27__ {TYPE_8__* shader; int name; } ;
struct TYPE_26__ {int name; TYPE_9__* modelData; } ;
struct TYPE_25__ {int isPortal; } ;
struct TYPE_24__ {int integer; } ;
struct TYPE_23__ {int (* Printf ) (int ,char*,int ,int ,int ) ;} ;
struct TYPE_22__ {scalar_t__ numSkins; TYPE_8__* projectionShadowShader; TYPE_8__* shadowShader; TYPE_8__* defaultShader; int refdef; TYPE_2__* currentModel; TYPE_1__ viewParms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (void*,TYPE_8__*,int,int ) ;
 int FUNC_1 (TYPE_9__*,TYPE_5__*) ;
 int FUNC_2 (TYPE_9__*,TYPE_5__*) ;
 TYPE_8__* FUNC_3 (scalar_t__) ;
 TYPE_7__* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,TYPE_5__*) ;
 scalar_t__ VAR_7 ;
 TYPE_12__* VAR_8 ;
 TYPE_11__ VAR_9 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,char*,int ,int ,int ) ;
 TYPE_10__ VAR_10 ;

void FUNC_8( trRefEntity_t *VAR_11 ) {
 iqmData_t *VAR_12;
 srfIQModel_t *VAR_13;
 int VAR_14, VAR_15;
 qboolean VAR_16;
 int VAR_17;
 int VAR_18;
 shader_t *VAR_19;
 skin_t *VAR_20;

 VAR_12 = VAR_10.currentModel->modelData;
 VAR_13 = VAR_12->surfaces;


 VAR_16 = (VAR_11->e.renderfx & VAR_5) && !VAR_10.viewParms.isPortal;

 if ( VAR_11->e.renderfx & VAR_6 ) {
  VAR_11->e.frame %= VAR_12->num_frames;
  VAR_11->e.oldframe %= VAR_12->num_frames;
 }







 if ( (VAR_11->e.frame >= VAR_12->num_frames)
      || (VAR_11->e.frame < 0)
      || (VAR_11->e.oldframe >= VAR_12->num_frames)
      || (VAR_11->e.oldframe < 0) ) {
  VAR_9.Printf( VAR_1, "R_AddIQMSurfaces: no such frame %d to %d for '%s'\n",
      VAR_11->e.oldframe, VAR_11->e.frame,
      VAR_10.currentModel->name );
  VAR_11->e.frame = 0;
  VAR_11->e.oldframe = 0;
 }





 VAR_17 = FUNC_2 ( VAR_12, VAR_11 );
 if ( VAR_17 == VAR_0 ) {
  return;
 }




 if ( !VAR_16 || VAR_8->integer > 1 ) {
  FUNC_5( &VAR_10.refdef, VAR_11 );
 }




 VAR_18 = FUNC_1( VAR_12, VAR_11 );

 for ( VAR_14 = 0 ; VAR_14 < VAR_12->num_surfaces ; VAR_14++ ) {
  if(VAR_11->e.customShader)
   VAR_19 = FUNC_3( VAR_11->e.customShader );
  else if(VAR_11->e.customSkin > 0 && VAR_11->e.customSkin < VAR_10.numSkins)
  {
   VAR_20 = FUNC_4(VAR_11->e.customSkin);
   VAR_19 = VAR_10.defaultShader;

   for(VAR_15 = 0; VAR_15 < VAR_20->numSurfaces; VAR_15++)
   {
    if (!FUNC_6(VAR_20->surfaces[VAR_15].name, VAR_13->name))
    {
     VAR_19 = VAR_20->surfaces[VAR_15].shader;
     break;
    }
   }
  } else {
   VAR_19 = VAR_13->shader;
  }




  if ( !VAR_16
   && VAR_8->integer == 2
   && VAR_18 == 0
   && !(VAR_11->e.renderfx & ( VAR_3 | VAR_2 ) )
   && VAR_19->sort == VAR_7 ) {
   FUNC_0( (void *)VAR_13, VAR_10.shadowShader, 0, 0 );
  }


  if ( VAR_8->integer == 3
   && VAR_18 == 0
   && (VAR_11->e.renderfx & VAR_4 )
   && VAR_19->sort == VAR_7 ) {
   FUNC_0( (void *)VAR_13, VAR_10.projectionShadowShader, 0, 0 );
  }

  if( !VAR_16 ) {
   FUNC_0( (void *)VAR_13, VAR_19, VAR_18, 0 );
  }

  VAR_13++;
 }
}
