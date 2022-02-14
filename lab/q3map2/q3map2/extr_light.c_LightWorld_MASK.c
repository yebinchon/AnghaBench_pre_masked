
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vec3_t ;
typedef scalar_t__ qboolean ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 float FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,scalar_t__,int ) ;
 int VAR_4 ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 (char*,...) ;
 int VAR_5 ;
 char* FUNC_14 (int *,char*) ;
 int FUNC_15 (int ) ;
 float FUNC_16 (int ) ;
 int FUNC_17 (int ,float,int ) ;
 int FUNC_18 (int ,double,double,double) ;
 int FUNC_19 (int ) ;
 int VAR_6 ;
 float FUNC_20 (char const*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int * VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;

void FUNC_21( void ){
 vec3_t VAR_45;
 float VAR_46;
 int VAR_47, VAR_48;
 qboolean VAR_49, VAR_50;
 const char *VAR_51;



 if ( VAR_42 ) {
  FUNC_13( "--- SmoothNormals ---\n" );
  FUNC_9();
 }


 FUNC_13( "--- SetupGrid ---\n" );
 FUNC_8();


 FUNC_3( &VAR_11[ 0 ], "_color", VAR_45 );
 if ( FUNC_16( VAR_45 ) == 0.0f ) {
  FUNC_18( VAR_45, 1.0, 1.0, 1.0 );
 }


 VAR_46 = FUNC_2( &VAR_11[ 0 ], "_ambient" );
 if ( VAR_46 == 0.0f ) {
  VAR_46 = FUNC_2( &VAR_11[ 0 ], "ambient" );
 }
 FUNC_17( VAR_45, VAR_46, VAR_6 );


 VAR_49 = VAR_40;
 VAR_51 = FUNC_14( &VAR_11[ 0 ], "_minvertexlight" );
 if ( VAR_51[ 0 ] != '\0' ) {
  VAR_49 = VAR_41;
  VAR_46 = FUNC_20( VAR_51 );
  FUNC_17( VAR_45, VAR_46, VAR_24 );
 }


 VAR_50 = VAR_40;
 VAR_51 = FUNC_14( &VAR_11[ 0 ], "_mingridlight" );
 if ( VAR_51[ 0 ] != '\0' ) {
  VAR_50 = VAR_41;
  VAR_46 = FUNC_20( VAR_51 );
  FUNC_17( VAR_45, VAR_46, VAR_22 );
 }


 VAR_51 = FUNC_14( &VAR_11[ 0 ], "_minlight" );
 if ( VAR_51[ 0 ] != '\0' ) {
  VAR_46 = FUNC_20( VAR_51 );
  FUNC_17( VAR_45, VAR_46, VAR_23 );
  if ( VAR_49 == VAR_40 ) {
   FUNC_17( VAR_45, VAR_46, VAR_24 );
  }
  if ( VAR_50 == VAR_40 ) {
   FUNC_17( VAR_45, VAR_46, VAR_22 );
  }
 }


 FUNC_12( VAR_4, "--- CreateLights ---\n" );
 FUNC_0();
 FUNC_1();
 FUNC_13( "%9d point lights\n", VAR_34 );
 FUNC_13( "%9d spotlights\n", VAR_37 );
 FUNC_13( "%9d diffuse (area) lights\n", VAR_28 );
 FUNC_13( "%9d sun/sky lights\n", VAR_38 );


 if ( !VAR_25 ) {

  FUNC_7( VAR_41, VAR_14 );

  FUNC_13( "--- TraceGrid ---\n" );
  FUNC_6( VAR_35, VAR_41, VAR_5 );
  FUNC_13( "%d x %d x %d = %d grid\n",
     VAR_15[ 0 ], VAR_15[ 1 ], VAR_15[ 2 ], VAR_27 );


  FUNC_12( VAR_4, "%9d grid points envelope culled\n", VAR_17 );
  FUNC_12( VAR_4, "%9d grid points bounds culled\n", VAR_16 );
 }


 VAR_44 *= VAR_44;


 FUNC_13( "--- MapRawLightmap ---\n" );
 FUNC_6( VAR_36, VAR_41, VAR_3 );
 FUNC_13( "%9d luxels\n", VAR_30 );
 FUNC_13( "%9d luxels mapped\n", VAR_32 );
 FUNC_13( "%9d luxels occluded\n", VAR_33 );


 if ( VAR_10 ) {
  FUNC_13( "--- DirtyRawLightmap ---\n" );




  FUNC_6( VAR_36, VAR_41, VAR_0 );
 }



 FUNC_7( VAR_40, VAR_12 );


 VAR_21 = 0;
 VAR_20 = 0;
 VAR_18 = 0;
 VAR_19 = 0;

 FUNC_13( "--- IlluminateRawLightmap ---\n" );
 FUNC_6( VAR_36, VAR_41, VAR_1 );
 FUNC_13( "%9d luxels illuminated\n", VAR_31 );

 FUNC_10();

 FUNC_13( "--- IlluminateVertexes ---\n" );
 FUNC_6( VAR_26, VAR_41, VAR_2 );
 FUNC_13( "%9d vertexes illuminated\n", VAR_39 );


 FUNC_12( VAR_4, "%9d lights plane culled\n", VAR_21 );
 FUNC_12( VAR_4, "%9d lights envelope culled\n", VAR_20 );
 FUNC_12( VAR_4, "%9d lights bounds culled\n", VAR_18 );
 FUNC_12( VAR_4, "%9d lights cluster culled\n", VAR_19 );


 VAR_47 = 1;
 VAR_48 = VAR_7;
 while ( VAR_7 > 0 )
 {

  FUNC_11();
  FUNC_13( "Writing %s\n", VAR_43 );
  FUNC_19( VAR_43 );


  FUNC_13( "\n--- Radiosity (bounce %d of %d) ---\n", VAR_47, VAR_48 );


  VAR_9 = VAR_41;
  FUNC_15( VAR_6 );


  FUNC_5();
  FUNC_4();


  FUNC_7( VAR_40, VAR_13 );
  if ( VAR_29 == 0 ) {
   FUNC_13( "No diffuse light to calculate, ending radiosity.\n" );
   return;
  }


  if ( VAR_8 ) {
   VAR_17 = 0;
   VAR_16 = 0;

   FUNC_13( "--- BounceGrid ---\n" );
   FUNC_6( VAR_35, VAR_41, VAR_5 );
   FUNC_12( VAR_4, "%9d grid points envelope culled\n", VAR_17 );
   FUNC_12( VAR_4, "%9d grid points bounds culled\n", VAR_16 );
  }


  VAR_21 = 0;
  VAR_20 = 0;
  VAR_18 = 0;
  VAR_19 = 0;

  FUNC_13( "--- IlluminateRawLightmap ---\n" );
  FUNC_6( VAR_36, VAR_41, VAR_1 );
  FUNC_13( "%9d luxels illuminated\n", VAR_31 );
  FUNC_13( "%9d vertexes illuminated\n", VAR_39 );

  FUNC_10();

  FUNC_13( "--- IlluminateVertexes ---\n" );
  FUNC_6( VAR_26, VAR_41, VAR_2 );
  FUNC_13( "%9d vertexes illuminated\n", VAR_39 );


  FUNC_12( VAR_4, "%9d lights plane culled\n", VAR_21 );
  FUNC_12( VAR_4, "%9d lights envelope culled\n", VAR_20 );
  FUNC_12( VAR_4, "%9d lights bounds culled\n", VAR_18 );
  FUNC_12( VAR_4, "%9d lights cluster culled\n", VAR_19 );


  VAR_7--;
  VAR_47++;
 }

 FUNC_11();

}
