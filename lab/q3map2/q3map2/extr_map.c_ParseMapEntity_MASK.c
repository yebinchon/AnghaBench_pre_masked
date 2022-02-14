
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {float shader; } ;
typedef TYPE_1__ shaderInfo_t ;
typedef scalar_t__ qboolean ;
struct TYPE_19__ {scalar_t__ entityNum; int castShadows; int recvShadows; float lightmapScale; TYPE_1__* celShader; struct TYPE_19__* next; } ;
typedef TYPE_2__ parseMesh_t ;
struct TYPE_20__ {char* key; char* value; struct TYPE_20__* next; } ;
typedef TYPE_3__ epair_t ;
struct TYPE_21__ {scalar_t__ entityNum; int castShadows; int recvShadows; float lightmapScale; TYPE_1__* celShader; struct TYPE_21__* next; } ;
typedef TYPE_4__ brush_t ;
struct TYPE_22__ {scalar_t__ mapEntityNum; scalar_t__* origin; TYPE_2__* patches; TYPE_4__* brushes; TYPE_3__* epairs; } ;


 int FUNC_0 (TYPE_5__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 float FUNC_2 (TYPE_5__*,char*) ;
 int FUNC_3 (TYPE_5__*,int *,int*,int*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_5__*,char*,scalar_t__*) ;
 int FUNC_6 (TYPE_5__*) ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (scalar_t__) ;
 TYPE_3__* FUNC_9 () ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (char*,char const*) ;
 scalar_t__ FUNC_12 (char const*,char*,int) ;
 int VAR_6 ;
 int FUNC_13 (TYPE_5__*) ;
 TYPE_1__* FUNC_14 (char*) ;
 int FUNC_15 (int ,char*,...) ;
 int FUNC_16 (char*,scalar_t__,char const*,float) ;
 int FUNC_17 () ;
 char* FUNC_18 (TYPE_5__*,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_5__* VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_5__* VAR_12 ;
 int FUNC_19 (TYPE_5__*,int ,int) ;
 size_t VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_20 (char*,char*,char const*) ;
 scalar_t__ FUNC_21 (char*,char*) ;
 char* VAR_19 ;

__attribute__((used)) static qboolean FUNC_22( qboolean VAR_20 ){
 epair_t *VAR_21;
 const char *VAR_22, *VAR_23;
 float VAR_24;
 char VAR_25[ VAR_5 ];
 shaderInfo_t *VAR_26 = ((void*)0);
 brush_t *VAR_27;
 parseMesh_t *VAR_28;
 qboolean VAR_29;
 int VAR_30, VAR_31;



 if ( !FUNC_4( VAR_17 ) ) {
  return VAR_16;
 }


 if ( FUNC_21( VAR_19, "{" ) ) {
  FUNC_15( VAR_6, "WARNING: ParseEntity: { not found, found %s on line %d - last entity was at: <%4.2f, %4.2f, %4.2f>...\n"
     "Continuing to process map, but resulting BSP may be invalid.\n",
     VAR_19, VAR_18, VAR_9[ VAR_13 ].origin[ 0 ], VAR_9[ VAR_13 ].origin[ 1 ], VAR_9[ VAR_13 ].origin[ 2 ] );
  return VAR_16;
 }


 if ( VAR_13 >= VAR_4 ) {
  FUNC_1( "numEntities == MAX_MAP_ENTITIES" );
 }


 VAR_10 = 0;
 VAR_12 = &VAR_9[ VAR_13 ];
 VAR_13++;
 FUNC_19( VAR_12, 0, sizeof( *VAR_12 ) );


 VAR_12->mapEntityNum = VAR_14;
 VAR_14++;


 while ( 1 )
 {

  if ( !FUNC_4( VAR_17 ) ) {
   FUNC_15( VAR_6, "WARNING: ParseEntity: EOF without closing brace\n"
      "Continuing to process map, but resulting BSP may be invalid.\n" );
   return VAR_16;
  }

  if ( !FUNC_21( VAR_19, "}" ) ) {
   break;
  }

  if ( !FUNC_21( VAR_19, "{" ) ) {

   if ( !FUNC_4( VAR_17 ) ) {
    break;
   }


   if ( !FUNC_21( VAR_19, "patchDef2" ) ) {
    VAR_15++;
    FUNC_10( VAR_20 );
   }
   else if ( !FUNC_21( VAR_19, "terrainDef" ) ) {

    FUNC_15( VAR_6, "WARNING: Terrain entity parsing not supported in this build.\n" );
   }
   else if ( !FUNC_21( VAR_19, "brushDef" ) ) {
    if ( VAR_11 == VAR_1 ) {
     FUNC_1( "Old brush format not allowed in new brush format map" );
    }
    VAR_11 = VAR_0;


    FUNC_8( VAR_20 );
   }
   else
   {
    if ( VAR_11 == VAR_0 ) {
     FUNC_1( "New brush format not allowed in old brush format map" );
    }
    VAR_11 = VAR_1;


    FUNC_17();
    FUNC_8( VAR_20 );
   }
   VAR_10++;
  }
  else
  {

   VAR_21 = FUNC_9();


   if ( VAR_21->key[ 0 ] != '\0' && VAR_21->value[ 0 ] != '\0' ) {
    VAR_21->next = VAR_12->epairs;
    VAR_12->epairs = VAR_21;
   }
  }
 }


 VAR_22 = FUNC_18( VAR_12, "classname" );


 if ( VAR_20 ) {
  if ( FUNC_12( VAR_22, "light", 5 ) ) {
   VAR_13--;
   return VAR_17;
  }
  VAR_23 = FUNC_18( VAR_12, "noradiosity" );
  if ( VAR_23[ 0 ] == '1' ) {
   VAR_13--;
   return VAR_17;
  }
 }


 if ( !FUNC_11( "func_group", VAR_22 ) ) {
  VAR_29 = VAR_17;
 }
 else{
  VAR_29 = VAR_16;
 }


 if ( VAR_29 || VAR_12->mapEntityNum == 0 ) {

  VAR_30 = VAR_7;
  VAR_31 = VAR_8;
 }


 else
 {

  VAR_30 = VAR_2;
  VAR_31 = VAR_3;
 }


 FUNC_3( VAR_12, ((void*)0), &VAR_30, &VAR_31 );


 if ( FUNC_21( "", FUNC_18( VAR_12, "lightmapscale" ) ) ||
   FUNC_21( "", FUNC_18( VAR_12, "_lightmapscale" ) ) ) {

  VAR_24 = FUNC_2( VAR_12, "lightmapscale" );
  if ( VAR_24 <= 0.0f ) {
   VAR_24 = FUNC_2( VAR_12, "_lightmapscale" );
  }
  if ( VAR_24 > 0.0f ) {
   FUNC_16( "Entity %d (%s) has lightmap scale of %.4f\n", VAR_12->mapEntityNum, VAR_22, VAR_24 );
  }
 }
 else{
  VAR_24 = 0.0f;
 }


 VAR_23 = FUNC_18( VAR_12, "_celshader" );
 if ( VAR_23[ 0 ] == '\0' ) {
  VAR_23 = FUNC_18( &VAR_9[ 0 ], "_celshader" );
 }
 if ( VAR_23[ 0 ] != '\0' ) {
  FUNC_20( VAR_25, "textures/%s", VAR_23 );
  VAR_26 = FUNC_14( VAR_25 );
  FUNC_16( "Entity %d (%s) has cel shader %s\n", VAR_12->mapEntityNum, VAR_22, VAR_26->shader );
 }
 else{
  VAR_26 = ((void*)0);
 }


 for ( VAR_27 = VAR_12->brushes; VAR_27 != ((void*)0); VAR_27 = VAR_27->next )
 {
  VAR_27->entityNum = VAR_12->mapEntityNum;
  VAR_27->castShadows = VAR_30;
  VAR_27->recvShadows = VAR_31;
  VAR_27->lightmapScale = VAR_24;
  VAR_27->celShader = VAR_26;
 }

 for ( VAR_28 = VAR_12->patches; VAR_28 != ((void*)0); VAR_28 = VAR_28->next )
 {
  VAR_28->entityNum = VAR_12->mapEntityNum;
  VAR_28->castShadows = VAR_30;
  VAR_28->recvShadows = VAR_31;
  VAR_28->lightmapScale = VAR_24;
  VAR_28->celShader = VAR_26;
 }


 FUNC_13( VAR_12 );


 FUNC_6( VAR_12 );


 FUNC_5( VAR_12, "origin", VAR_12->origin );
 if ( VAR_12->origin[ 0 ] || VAR_12->origin[ 1 ] || VAR_12->origin[ 2 ] ) {
  FUNC_0( VAR_12 );
 }


 if ( !FUNC_11( "group_info", VAR_22 ) ) {
  VAR_13--;
  return VAR_17;
 }


 if ( VAR_29 ) {
  FUNC_7( VAR_12 );
  VAR_13--;
  return VAR_17;
 }


 return VAR_17;
}
