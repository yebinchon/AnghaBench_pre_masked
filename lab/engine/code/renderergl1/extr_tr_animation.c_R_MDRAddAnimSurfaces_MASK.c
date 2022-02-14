
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_13__ ;
typedef struct TYPE_26__ TYPE_12__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


struct TYPE_31__ {int renderfx; scalar_t__ customShader; scalar_t__ customSkin; int oldframe; int frame; } ;
struct TYPE_32__ {TYPE_4__ e; } ;
typedef TYPE_5__ trRefEntity_t ;
struct TYPE_33__ {int numSurfaces; TYPE_3__* surfaces; } ;
typedef TYPE_6__ skin_t ;
struct TYPE_34__ {scalar_t__ sort; } ;
typedef TYPE_7__ shader_t ;
typedef int qboolean ;
struct TYPE_35__ {scalar_t__ shaderIndex; int ofsEnd; int name; } ;
typedef TYPE_8__ mdrSurface_t ;
struct TYPE_36__ {int ofsEnd; int ofsSurfaces; int numSurfaces; } ;
typedef TYPE_9__ mdrLOD_t ;
struct TYPE_24__ {int numLODs; int ofsLODs; int numFrames; } ;
typedef TYPE_10__ mdrHeader_t ;
typedef int byte ;
struct TYPE_30__ {TYPE_7__* shader; int name; } ;
struct TYPE_29__ {int name; scalar_t__ modelData; } ;
struct TYPE_28__ {int isPortal; } ;
struct TYPE_27__ {int integer; } ;
struct TYPE_26__ {int (* Printf ) (int ,char*,int ,int ,int ) ;} ;
struct TYPE_25__ {scalar_t__ numSkins; TYPE_7__* projectionShadowShader; TYPE_7__* shadowShader; TYPE_7__* defaultShader; int refdef; TYPE_2__* currentModel; TYPE_1__ viewParms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (void*,TYPE_7__*,int,int ) ;
 int FUNC_1 (TYPE_5__*) ;
 TYPE_7__* FUNC_2 (scalar_t__) ;
 TYPE_6__* FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_10__*,TYPE_5__*) ;
 int FUNC_5 (TYPE_10__*,TYPE_5__*) ;
 int FUNC_6 (int *,TYPE_5__*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 TYPE_13__* VAR_9 ;
 TYPE_12__ VAR_10 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,char*,int ,int ,int ) ;
 TYPE_11__ VAR_11 ;

void FUNC_9( trRefEntity_t *VAR_12 ) {
 mdrHeader_t *VAR_13;
 mdrSurface_t *VAR_14;
 mdrLOD_t *VAR_15;
 shader_t *VAR_16;
 skin_t *VAR_17;
 int VAR_18, VAR_19;
 int VAR_20 = 0;
 int VAR_21 = 0;
 int VAR_22;
 qboolean VAR_23;

 VAR_13 = (mdrHeader_t *) VAR_11.currentModel->modelData;

 VAR_23 = (VAR_12->e.renderfx & VAR_5) && !VAR_11.viewParms.isPortal;

 if ( VAR_12->e.renderfx & VAR_6 )
 {
  VAR_12->e.frame %= VAR_13->numFrames;
  VAR_12->e.oldframe %= VAR_13->numFrames;
 }







 if ((VAR_12->e.frame >= VAR_13->numFrames)
  || (VAR_12->e.frame < 0)
  || (VAR_12->e.oldframe >= VAR_13->numFrames)
  || (VAR_12->e.oldframe < 0) )
 {
  VAR_10.Printf( VAR_1, "R_MDRAddAnimSurfaces: no such frame %d to %d for '%s'\n",
      VAR_12->e.oldframe, VAR_12->e.frame, VAR_11.currentModel->name );
  VAR_12->e.frame = 0;
  VAR_12->e.oldframe = 0;
 }





 VAR_22 = FUNC_5 (VAR_13, VAR_12);
 if ( VAR_22 == VAR_0 ) {
  return;
 }


 VAR_20 = FUNC_1(VAR_12);

 if(VAR_13->numLODs <= 0)
  return;
 if(VAR_13->numLODs <= VAR_20)
  VAR_20 = VAR_13->numLODs - 1;

 VAR_15 = (mdrLOD_t *)( (byte *)VAR_13 + VAR_13->ofsLODs);
 for(VAR_18 = 0; VAR_18 < VAR_20; VAR_18++)
 {
  VAR_15 = (mdrLOD_t *) ((byte *) VAR_15 + VAR_15->ofsEnd);
 }


 if ( !VAR_23 || VAR_9->integer > 1 )
 {
  FUNC_6( &VAR_11.refdef, VAR_12 );
 }


 VAR_21 = FUNC_4( VAR_13, VAR_12 );

 VAR_14 = (mdrSurface_t *)( (byte *)VAR_15 + VAR_15->ofsSurfaces );

 for ( VAR_18 = 0 ; VAR_18 < VAR_15->numSurfaces ; VAR_18++ )
 {

  if(VAR_12->e.customShader)
   VAR_16 = FUNC_2(VAR_12->e.customShader);
  else if(VAR_12->e.customSkin > 0 && VAR_12->e.customSkin < VAR_11.numSkins)
  {
   VAR_17 = FUNC_3(VAR_12->e.customSkin);
   VAR_16 = VAR_11.defaultShader;

   for(VAR_19 = 0; VAR_19 < VAR_17->numSurfaces; VAR_19++)
   {
    if (!FUNC_7(VAR_17->surfaces[VAR_19].name, VAR_14->name))
    {
     VAR_16 = VAR_17->surfaces[VAR_19].shader;
     break;
    }
   }
  }
  else if(VAR_14->shaderIndex > 0)
   VAR_16 = FUNC_2( VAR_14->shaderIndex );
  else
   VAR_16 = VAR_11.defaultShader;




  if ( !VAR_23
          && VAR_9->integer == 2
   && VAR_21 == 0
   && !(VAR_12->e.renderfx & ( VAR_3 | VAR_2 ) )
   && VAR_16->sort == VAR_7 )
  {
   FUNC_0( (void *)VAR_14, VAR_11.shadowShader, 0, VAR_8 );
  }


  if ( VAR_9->integer == 3
   && VAR_21 == 0
   && (VAR_12->e.renderfx & VAR_4 )
   && VAR_16->sort == VAR_7 )
  {
   FUNC_0( (void *)VAR_14, VAR_11.projectionShadowShader, 0, VAR_8 );
  }

  if (!VAR_23)
   FUNC_0( (void *)VAR_14, VAR_16, VAR_21, VAR_8 );

  VAR_14 = (mdrSurface_t *)( (byte *)VAR_14 + VAR_14->ofsEnd );
 }
}
