
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


struct TYPE_28__ {int renderfx; scalar_t__ customSkin; scalar_t__ customShader; int origin; int oldframe; int frame; } ;
struct TYPE_29__ {TYPE_4__ e; } ;
typedef TYPE_5__ trRefEntity_t ;
struct TYPE_30__ {TYPE_8__* shader; int name; } ;
typedef TYPE_6__ srfIQModel_t ;
struct TYPE_31__ {int numSurfaces; TYPE_3__* surfaces; } ;
typedef TYPE_7__ skin_t ;
struct TYPE_32__ {scalar_t__ sort; } ;
typedef TYPE_8__ shader_t ;
typedef int qboolean ;
struct TYPE_33__ {int num_surfaces; int * vaoSurfaces; scalar_t__ numVaoSurfaces; int num_frames; TYPE_6__* surfaces; } ;
typedef TYPE_9__ iqmData_t ;
struct TYPE_27__ {TYPE_8__* shader; int name; } ;
struct TYPE_26__ {int name; TYPE_9__* modelData; } ;
struct TYPE_25__ {int flags; scalar_t__ isPortal; } ;
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
 int FUNC_0 (void*,TYPE_8__*,int,int ,int ,int) ;
 int FUNC_1 (TYPE_9__*,TYPE_5__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_9__*,TYPE_5__*) ;
 TYPE_8__* FUNC_4 (scalar_t__) ;
 TYPE_7__* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,TYPE_5__*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_12__* VAR_10 ;
 TYPE_11__ VAR_11 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,char*,int ,int ,int ) ;
 TYPE_10__ VAR_12 ;

void FUNC_9( trRefEntity_t *VAR_13 ) {
 iqmData_t *VAR_14;
 srfIQModel_t *VAR_15;
 void *VAR_16;
 int VAR_17, VAR_18;
 qboolean VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;
 shader_t *VAR_23;
 skin_t *VAR_24;

 VAR_14 = VAR_12.currentModel->modelData;
 VAR_15 = VAR_14->surfaces;


 VAR_19 = (VAR_13->e.renderfx & VAR_5) && !(VAR_12.viewParms.isPortal
                  || (VAR_12.viewParms.flags & (VAR_9 | VAR_8)));

 if ( VAR_13->e.renderfx & VAR_6 ) {
  VAR_13->e.frame %= VAR_14->num_frames;
  VAR_13->e.oldframe %= VAR_14->num_frames;
 }







 if ( (VAR_13->e.frame >= VAR_14->num_frames)
      || (VAR_13->e.frame < 0)
      || (VAR_13->e.oldframe >= VAR_14->num_frames)
      || (VAR_13->e.oldframe < 0) ) {
  VAR_11.Printf( VAR_1, "R_AddIQMSurfaces: no such frame %d to %d for '%s'\n",
      VAR_13->e.oldframe, VAR_13->e.frame,
      VAR_12.currentModel->name );
  VAR_13->e.frame = 0;
  VAR_13->e.oldframe = 0;
 }





 VAR_20 = FUNC_3 ( VAR_14, VAR_13 );
 if ( VAR_20 == VAR_0 ) {
  return;
 }




 if ( !VAR_19 || VAR_10->integer > 1 ) {
  FUNC_6( &VAR_12.refdef, VAR_13 );
 }




 VAR_21 = FUNC_1( VAR_14, VAR_13 );

 VAR_22 = FUNC_2(VAR_13->e.origin);

 for ( VAR_17 = 0 ; VAR_17 < VAR_14->num_surfaces ; VAR_17++ ) {
  if(VAR_13->e.customShader)
   VAR_23 = FUNC_4( VAR_13->e.customShader );
  else if(VAR_13->e.customSkin > 0 && VAR_13->e.customSkin < VAR_12.numSkins)
  {
   VAR_24 = FUNC_5(VAR_13->e.customSkin);
   VAR_23 = VAR_12.defaultShader;

   for(VAR_18 = 0; VAR_18 < VAR_24->numSurfaces; VAR_18++)
   {
    if (!FUNC_7(VAR_24->surfaces[VAR_18].name, VAR_15->name))
    {
     VAR_23 = VAR_24->surfaces[VAR_18].shader;
     break;
    }
   }
  } else {
   VAR_23 = VAR_15->shader;
  }

  if ( VAR_14->numVaoSurfaces ) {
   VAR_16 = &VAR_14->vaoSurfaces[VAR_17];
  } else {
   VAR_16 = VAR_15;
  }




  if ( !VAR_19
   && VAR_10->integer == 2
   && VAR_21 == 0
   && !(VAR_13->e.renderfx & ( VAR_3 | VAR_2 ) )
   && VAR_23->sort == VAR_7 ) {
   FUNC_0( VAR_16, VAR_12.shadowShader, 0, 0, 0, 0 );
  }


  if ( VAR_10->integer == 3
   && VAR_21 == 0
   && (VAR_13->e.renderfx & VAR_4 )
   && VAR_23->sort == VAR_7 ) {
   FUNC_0( VAR_16, VAR_12.projectionShadowShader, 0, 0, 0, 0 );
  }

  if( !VAR_19 ) {
   FUNC_0( VAR_16, VAR_23, VAR_21, 0, 0, VAR_22 );
  }

  VAR_15++;
 }
}
