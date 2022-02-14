
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef int png_struct ;
typedef int png_info ;
struct TYPE_2__ {int size; scalar_t__ offset; int * buffer; } ;
typedef TYPE_1__ pngBuffer_t ;
typedef int byte ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int **) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int ,int *,int *,int *) ;
 int FUNC_4 (int **,int **,int **) ;
 int FUNC_5 (int *,int *,int*,int*,int*,int*,int *,int *,int *) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int **) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int,int ) ;
 int FUNC_13 (int *,void*,int ) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *,int ,int) ;
 void* FUNC_16 (int) ;
 scalar_t__ FUNC_17 (int ) ;

__attribute__((used)) static void FUNC_18( byte *VAR_8, int VAR_9, byte **VAR_10, int *VAR_11, int *VAR_12 ){
 png_struct *VAR_13;
 png_info *VAR_14, *VAR_15;
    pngBuffer_t VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20;
 png_uint_32 VAR_21, VAR_22;
 byte **VAR_23;


 if ( VAR_8 == ((void*)0) || VAR_9 <= 0 || VAR_10 == ((void*)0) || VAR_11 == ((void*)0) || VAR_12 == ((void*)0) ) {
  return;
 }


 *VAR_10 = 0;
 *VAR_11 = 0;
 *VAR_12 = 0;


 if ( FUNC_15( VAR_8, 0, 8 ) != 0 ) {
  FUNC_0( VAR_7, "WARNING: Invalid PNG file\n" );
  return;
 }


 VAR_13 = FUNC_3( VAR_6, ((void*)0), ((void*)0), ((void*)0) );
 if ( VAR_13 == ((void*)0) ) {
  FUNC_0( VAR_7, "WARNING: Unable to create PNG read struct\n" );
  return;
 }

 VAR_14 = FUNC_2( VAR_13 );
 if ( VAR_14 == ((void*)0) ) {
  FUNC_0( VAR_7, "WARNING: Unable to create PNG info struct\n" );
  FUNC_4( &VAR_13, ((void*)0), ((void*)0) );
  return;
 }

 VAR_15 = FUNC_2( VAR_13 );
 if ( VAR_15 == ((void*)0) ) {
  FUNC_0( VAR_7, "WARNING: Unable to create PNG end info struct\n" );
  FUNC_4( &VAR_13, &VAR_14, ((void*)0) );
  return;
 }


    VAR_16.buffer = VAR_8;
    VAR_16.size = VAR_9;
    VAR_16.offset = 0;
 FUNC_13( VAR_13, (void*)&VAR_16, VAR_0 );


 if ( FUNC_17( FUNC_8(VAR_13) ) ) {
  FUNC_0( VAR_7, "WARNING: An error occurred reading PNG image\n" );
  FUNC_4( &VAR_13, &VAR_14, &VAR_15 );
  return;
 }




 FUNC_10( VAR_13, VAR_14 );


 FUNC_5( VAR_13, VAR_14,
      &VAR_21, &VAR_22, &VAR_18, &VAR_19, ((void*)0), ((void*)0), ((void*)0) );


 VAR_20 = FUNC_6( VAR_13, VAR_14 );




 if ( ( VAR_19 == VAR_2 && VAR_18 <= 8 ) ||
   ( VAR_19 == VAR_1 && VAR_18 <= 8 ) ||
   FUNC_7( VAR_13, VAR_14, VAR_5 ) ) {
  FUNC_11( VAR_13 );
 }


 if ( VAR_18 == 16 ) {
  FUNC_14( VAR_13 );
 }


 if ( VAR_18 == 8 && VAR_19 == VAR_3 ) {
  FUNC_12( VAR_13, 255, VAR_4 );
 }


 *VAR_11 = VAR_21;
 *VAR_12 = VAR_22;
 *VAR_10 = FUNC_16( VAR_21 * VAR_22 * 4 );


 VAR_23 = FUNC_16( VAR_22 * sizeof( byte* ) );
 for ( VAR_17 = 0; VAR_17 < VAR_22; VAR_17++ )
  VAR_23[ VAR_17 ] = *VAR_10 + ( VAR_17 * VAR_21 * 4 );


 FUNC_9( VAR_13, VAR_23 );


 FUNC_1( VAR_23 );
 FUNC_4( &VAR_13, &VAR_14, &VAR_15 );

}
