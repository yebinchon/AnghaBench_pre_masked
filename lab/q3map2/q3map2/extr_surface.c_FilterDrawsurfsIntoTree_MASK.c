
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_41__ TYPE_5__ ;
typedef struct TYPE_40__ TYPE_4__ ;
typedef struct TYPE_39__ TYPE_3__ ;
typedef struct TYPE_38__ TYPE_32__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_36__ {int headnode; } ;
typedef TYPE_1__ tree_t ;
struct TYPE_37__ {scalar_t__ furNumLayers; int compileFlags; scalar_t__ noFog; int shader; scalar_t__* remapShader; scalar_t__* flareShader; int * foliage; int colorMod; int mod; } ;
typedef TYPE_2__ shaderInfo_t ;
struct TYPE_39__ {scalar_t__ numVerts; int type; scalar_t__ skybox; TYPE_2__* shaderInfo; int fogNum; int maxs; int mins; TYPE_32__* verts; } ;
typedef TYPE_3__ mapDrawSurface_t ;
struct TYPE_40__ {int firstDrawSurf; int origin; } ;
typedef TYPE_4__ entity_t ;
struct TYPE_41__ {int numVerts; int numIndexes; } ;
typedef TYPE_5__ bspDrawSurface_t ;
struct TYPE_38__ {int st; } ;


 int FUNC_0 (TYPE_3__*,int ,scalar_t__) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_3 (int ,int,TYPE_32__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_9 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_10 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_11 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_12 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_13 (int ,int ,float) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_17 (TYPE_3__*,int) ;
 TYPE_2__* FUNC_18 (scalar_t__*) ;
 int FUNC_19 (int ,char*,...) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int ,int ,int ) ;
 int FUNC_22 (int ,float,int ) ;
 int FUNC_23 (TYPE_4__*,TYPE_3__*) ;
 TYPE_5__* VAR_4 ;
 TYPE_4__* VAR_5 ;
 TYPE_3__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int* VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int* VAR_16 ;

void FUNC_24( entity_t *VAR_17, tree_t *VAR_18 ){
 int VAR_19, VAR_20;
 mapDrawSurface_t *VAR_21;
 shaderInfo_t *VAR_22;
 vec3_t VAR_23, VAR_24, VAR_25;
 int VAR_26;
 int VAR_27, VAR_28, VAR_29;



 FUNC_19( VAR_2, "--- FilterDrawsurfsIntoTree ---\n" );


 VAR_27 = 0;
 VAR_28 = 0;
 VAR_29 = 0;
 for ( VAR_19 = VAR_17->firstDrawSurf; VAR_19 < VAR_9; VAR_19++ )
 {

  VAR_21 = &VAR_6[ VAR_19 ];
  if ( VAR_21->numVerts == 0 && VAR_21->type != 135 && VAR_21->type != 129 ) {
   continue;
  }


  VAR_22 = VAR_21->shaderInfo;


  if ( VAR_21->skybox ) {
   VAR_26 = FUNC_0( VAR_21, VAR_18->headnode, VAR_15 );
   VAR_21->skybox = VAR_14;
  }
  else
  {

   VAR_26 = 0;


   for ( VAR_20 = 0; VAR_20 < VAR_21->numVerts; VAR_20++ )
    FUNC_20( VAR_22->mod, VAR_21->verts[ VAR_20 ].st );


   FUNC_3( VAR_21->shaderInfo->colorMod, VAR_21->numVerts, VAR_21->verts );


   FUNC_23( VAR_17, VAR_21 );


   if ( VAR_22->furNumLayers > 0 ) {
    FUNC_15( VAR_21 );
   }


   if ( VAR_22->foliage != ((void*)0) ) {
    FUNC_14( VAR_21 );
   }


   if ( VAR_22->flareShader != ((void*)0) && VAR_22->flareShader[ 0 ] ) {
    FUNC_1( VAR_21, VAR_17->origin );
   }


   if ( VAR_22 != ((void*)0) && ( VAR_22->compileFlags & VAR_0 ) && VAR_21->type != 130 ) {
    continue;
   }


   FUNC_2( VAR_21 );


   if ( VAR_17 != VAR_5 && VAR_22->noFog == VAR_14 ) {

    FUNC_21( VAR_21->mins, VAR_21->maxs, VAR_23 );
    FUNC_22( VAR_23, 0.5f, VAR_23 );
    FUNC_21( VAR_23, VAR_17->origin, VAR_23 );

    FUNC_21( VAR_21->mins, VAR_17->origin, VAR_24 );
    FUNC_21( VAR_21->maxs, VAR_17->origin, VAR_25 );


    VAR_21->fogNum = FUNC_13( VAR_24, VAR_25, 1.0f );
   }
  }


  if ( VAR_21->shaderInfo->remapShader && VAR_21->shaderInfo->remapShader[ 0 ] ) {
   VAR_21->shaderInfo = FUNC_18( VAR_21->shaderInfo->remapShader );
  }


  switch ( VAR_21->type )
  {

  case 136:
  case 137:
   if ( VAR_26 == 0 ) {
    VAR_26 = FUNC_8( VAR_21, VAR_18 );
   }
   if ( VAR_26 > 0 ) {
    FUNC_4( VAR_21 );
   }
   break;


  case 130:
   if ( VAR_26 == 0 ) {
    VAR_26 = FUNC_11( VAR_21, VAR_18 );
   }
   if ( VAR_26 > 0 ) {
    FUNC_6( VAR_21 );
   }
   break;


  case 128:
  case 132:
  case 131:

   if ( VAR_26 == 0 ) {
    VAR_26 = FUNC_12( VAR_21, VAR_18 );
   }
   if ( VAR_26 > 0 ) {
    FUNC_7( VAR_21 );
   }
   break;


  case 133:

   if ( VAR_26 == 0 ) {
    VAR_26 = FUNC_10( VAR_21, VAR_18 );
   }
   if ( VAR_26 > 0 ) {
    FUNC_7( VAR_21 );
   }
   break;


  case 134:
   if ( VAR_26 == 0 ) {
    VAR_26 = FUNC_0( VAR_21, VAR_18->headnode, VAR_14 );
   }
   if ( VAR_26 > 0 ) {
    FUNC_7( VAR_21 );
   }
   break;


  case 135:
   if ( VAR_26 == 0 ) {
    VAR_26 = FUNC_9( VAR_21, VAR_18 );
   }
   if ( VAR_26 > 0 ) {
    FUNC_5( VAR_21 );
   }
   break;


  case 129:
   VAR_26 = 1;
   FUNC_5( VAR_21 );
   break;


  default:
   VAR_26 = 0;
   break;
  }


  if ( VAR_26 > 0 ) {

   VAR_27++;
   VAR_28 += VAR_26;


   FUNC_17( VAR_21, VAR_7 - 1 );



   {
    bspDrawSurface_t *VAR_30;
    VAR_30 = &VAR_4[ VAR_7 - 1 ];
    if ( VAR_30->numVerts == 3 && VAR_30->numIndexes > 3 ) {
     FUNC_19( VAR_3, "WARNING: Potentially bad %s surface (%d: %d, %d)\n     %s\n",
        VAR_16[ VAR_21->type ],
        VAR_7 - 1, VAR_30->numVerts, VAR_30->numIndexes, VAR_22->shader );
    }
   }


   if ( VAR_21->skybox ) {
    FUNC_16( VAR_21 );
    VAR_29++;
   }
  }
 }


 FUNC_19( VAR_2, "%9d references\n", VAR_28 );
 FUNC_19( VAR_2, "%9d (%d) emitted drawsurfs\n", VAR_27, VAR_7 );
 FUNC_19( VAR_2, "%9d stripped face surfaces\n", VAR_11 );
 FUNC_19( VAR_2, "%9d fanned face surfaces\n", VAR_8 );
 FUNC_19( VAR_2, "%9d surface models generated\n", VAR_12 );
 FUNC_19( VAR_2, "%9d skybox surfaces generated\n", VAR_29 );
 for ( VAR_19 = 0; VAR_19 < VAR_1; VAR_19++ )
  FUNC_19( VAR_2, "%9d %s surfaces\n", VAR_13[ VAR_19 ], VAR_16[ VAR_19 ] );

 FUNC_19( VAR_2, "%9d redundant indexes supressed, saving %d Kbytes\n", VAR_10, ( VAR_10 * 4 / 1024 ) );
}
