
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


struct TYPE_31__ {int renderfx; scalar_t__ customShader; scalar_t__ customSkin; int origin; int oldframe; int frame; } ;
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
struct TYPE_28__ {int flags; scalar_t__ isPortal; } ;
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
 int FUNC_0 (void*,TYPE_7__*,int,int ,int ,int) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int ) ;
 TYPE_7__* FUNC_3 (scalar_t__) ;
 TYPE_6__* FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_10__*,TYPE_5__*) ;
 int FUNC_6 (TYPE_10__*,TYPE_5__*) ;
 int FUNC_7 (int *,TYPE_5__*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_13__* VAR_11 ;
 TYPE_12__ VAR_12 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,char*,int ,int ,int ) ;
 TYPE_11__ VAR_13 ;

void FUNC_10( trRefEntity_t *VAR_14 ) {
 mdrHeader_t *VAR_15;
 mdrSurface_t *VAR_16;
 mdrLOD_t *VAR_17;
 shader_t *VAR_18;
 skin_t *VAR_19;
 int VAR_20, VAR_21;
 int VAR_22 = 0;
 int VAR_23 = 0;
 int VAR_24;
 int VAR_25;
 qboolean VAR_26;

 VAR_15 = (mdrHeader_t *) VAR_13.currentModel->modelData;

 VAR_26 = (VAR_14->e.renderfx & VAR_5) && !(VAR_13.viewParms.isPortal
                  || (VAR_13.viewParms.flags & (VAR_9 | VAR_8)));

 if ( VAR_14->e.renderfx & VAR_6 )
 {
  VAR_14->e.frame %= VAR_15->numFrames;
  VAR_14->e.oldframe %= VAR_15->numFrames;
 }







 if ((VAR_14->e.frame >= VAR_15->numFrames)
  || (VAR_14->e.frame < 0)
  || (VAR_14->e.oldframe >= VAR_15->numFrames)
  || (VAR_14->e.oldframe < 0) )
 {
  VAR_12.Printf( VAR_1, "R_MDRAddAnimSurfaces: no such frame %d to %d for '%s'\n",
      VAR_14->e.oldframe, VAR_14->e.frame, VAR_13.currentModel->name );
  VAR_14->e.frame = 0;
  VAR_14->e.oldframe = 0;
 }





 VAR_24 = FUNC_6 (VAR_15, VAR_14);
 if ( VAR_24 == VAR_0 ) {
  return;
 }


 VAR_22 = FUNC_1(VAR_14);

 if(VAR_15->numLODs <= 0)
  return;
 if(VAR_15->numLODs <= VAR_22)
  VAR_22 = VAR_15->numLODs - 1;

 VAR_17 = (mdrLOD_t *)( (byte *)VAR_15 + VAR_15->ofsLODs);
 for(VAR_20 = 0; VAR_20 < VAR_22; VAR_20++)
 {
  VAR_17 = (mdrLOD_t *) ((byte *) VAR_17 + VAR_17->ofsEnd);
 }


 if ( !VAR_26 || VAR_11->integer > 1 )
 {
  FUNC_7( &VAR_13.refdef, VAR_14 );
 }


 VAR_23 = FUNC_5( VAR_15, VAR_14 );

 VAR_25 = FUNC_2(VAR_14->e.origin);

 VAR_16 = (mdrSurface_t *)( (byte *)VAR_17 + VAR_17->ofsSurfaces );

 for ( VAR_20 = 0 ; VAR_20 < VAR_17->numSurfaces ; VAR_20++ )
 {

  if(VAR_14->e.customShader)
   VAR_18 = FUNC_3(VAR_14->e.customShader);
  else if(VAR_14->e.customSkin > 0 && VAR_14->e.customSkin < VAR_13.numSkins)
  {
   VAR_19 = FUNC_4(VAR_14->e.customSkin);
   VAR_18 = VAR_13.defaultShader;

   for(VAR_21 = 0; VAR_21 < VAR_19->numSurfaces; VAR_21++)
   {
    if (!FUNC_8(VAR_19->surfaces[VAR_21].name, VAR_16->name))
    {
     VAR_18 = VAR_19->surfaces[VAR_21].shader;
     break;
    }
   }
  }
  else if(VAR_16->shaderIndex > 0)
   VAR_18 = FUNC_3( VAR_16->shaderIndex );
  else
   VAR_18 = VAR_13.defaultShader;




  if ( !VAR_26
          && VAR_11->integer == 2
   && VAR_23 == 0
   && !(VAR_14->e.renderfx & ( VAR_3 | VAR_2 ) )
   && VAR_18->sort == VAR_7 )
  {
   FUNC_0( (void *)VAR_16, VAR_13.shadowShader, 0, VAR_10, VAR_10, 0 );
  }


  if ( VAR_11->integer == 3
   && VAR_23 == 0
   && (VAR_14->e.renderfx & VAR_4 )
   && VAR_18->sort == VAR_7 )
  {
   FUNC_0( (void *)VAR_16, VAR_13.projectionShadowShader, 0, VAR_10, VAR_10, 0 );
  }

  if (!VAR_26)
   FUNC_0( (void *)VAR_16, VAR_18, VAR_23, VAR_10, VAR_10, VAR_25 );

  VAR_16 = (mdrSurface_t *)( (byte *)VAR_16 + VAR_16->ofsEnd );
 }
}
