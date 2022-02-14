
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_8__ {float* mins; float* maxs; } ;
struct TYPE_7__ {float** ambient; void** styles; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int,...) ;
 char* FUNC_3 (int *,char*) ;
 int FUNC_4 (float*,float*) ;
 int FUNC_5 (float*,float*) ;
 float* VAR_5 ;
 TYPE_1__* VAR_6 ;
 TYPE_5__* VAR_7 ;
 float FUNC_6 (float) ;
 int * VAR_8 ;
 float FUNC_7 (float) ;
 int FUNC_8 (TYPE_1__*) ;
 int* VAR_9 ;
 float* VAR_10 ;
 float* VAR_11 ;
 int FUNC_9 (TYPE_1__*,int ,int) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_1__* VAR_15 ;
 TYPE_1__* FUNC_10 (int) ;
 int FUNC_11 (char*,char*,float,float,float) ;
 int FUNC_12 (char const*,char*,float*,float*,float*) ;

void FUNC_13( void ){
 int VAR_16, VAR_17;
 vec3_t VAR_18, VAR_19;
 const char *VAR_20;
 char VAR_21[ 64 ];



 if ( VAR_12 ) {
  return;
 }


 VAR_20 = FUNC_3( &VAR_8[ 0 ], "gridsize" );
 if ( VAR_20[ 0 ] != '\0' ) {
  FUNC_12( VAR_20, "%f %f %f", &VAR_11[ 0 ], &VAR_11[ 1 ], &VAR_11[ 2 ] );
 }


 FUNC_5( VAR_11, VAR_19 );
 for ( VAR_16 = 0; VAR_16 < 3; VAR_16++ )
  VAR_11[ VAR_16 ] = VAR_11[ VAR_16 ] >= 8.0f ? FUNC_7( VAR_11[ VAR_16 ] ) : 8.0f;


 VAR_14 = VAR_3 + 1;
 VAR_17 = 0;
 while ( VAR_14 > VAR_3 )
 {

  for ( VAR_16 = 0; VAR_16 < 3; VAR_16++ )
  {
   VAR_10[ VAR_16 ] = VAR_11[ VAR_16 ] * FUNC_6( VAR_7[ 0 ].mins[ VAR_16 ] / VAR_11[ VAR_16 ] );
   VAR_18[ VAR_16 ] = VAR_11[ VAR_16 ] * FUNC_7( VAR_7[ 0 ].maxs[ VAR_16 ] / VAR_11[ VAR_16 ] );
   VAR_9[ VAR_16 ] = ( VAR_18[ VAR_16 ] - VAR_10[ VAR_16 ] ) / VAR_11[ VAR_16 ] + 1;
  }


  VAR_14 = VAR_9[ 0 ] * VAR_9[ 1 ] * VAR_9[ 2 ];


  if ( VAR_14 > VAR_3 ) {
   VAR_11[ VAR_17++ % 3 ] += 16.0f;
  }
 }


 FUNC_2( "Grid size = { %1.0f, %1.0f, %1.0f }\n", VAR_11[ 0 ], VAR_11[ 1 ], VAR_11[ 2 ] );


 if ( !FUNC_4( VAR_11, VAR_19 ) ) {
  FUNC_11( VAR_21, "%.0f %.0f %.0f", VAR_11[ 0 ], VAR_11[ 1 ], VAR_11[ 2 ] );
  FUNC_0( &VAR_8[ 0 ], "gridsize", (const char*) VAR_21 );
  FUNC_1( VAR_4, "Storing adjusted grid size\n" );
 }


 VAR_13 = VAR_14;


 VAR_15 = FUNC_10( VAR_14 * sizeof( *VAR_15 ) );
 FUNC_9( VAR_15, 0, VAR_14 * sizeof( *VAR_15 ) );

 if ( VAR_6 != ((void*)0) ) {
  FUNC_8( VAR_6 );
 }
 VAR_6 = FUNC_10( VAR_13 * sizeof( *VAR_6 ) );
 FUNC_9( VAR_6, 0, VAR_13 * sizeof( *VAR_6 ) );


 for ( VAR_16 = 0; VAR_16 < VAR_14; VAR_16++ )
 {
  FUNC_5( VAR_5, VAR_15[ VAR_16 ].ambient[ VAR_17 ] );
  VAR_15[ VAR_16 ].styles[ 0 ] = VAR_1;
  VAR_6[ VAR_16 ].styles[ 0 ] = VAR_1;
  for ( VAR_17 = 1; VAR_17 < VAR_2; VAR_17++ )
  {
   VAR_15[ VAR_16 ].styles[ VAR_17 ] = VAR_0;
   VAR_6[ VAR_16 ].styles[ VAR_17 ] = VAR_0;
  }
 }


 FUNC_2( "%9d grid points\n", VAR_14 );
}
