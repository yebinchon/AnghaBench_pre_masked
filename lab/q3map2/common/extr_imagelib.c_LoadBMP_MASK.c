
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ qboolean ;
typedef int byte ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int *,int,int*) ;
 int FUNC_2 (int *,int,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_5 (int) ;
 int FUNC_6 (char const*,void**,int ) ;

void FUNC_7( const char *VAR_2, byte **VAR_3, byte **VAR_4, int *VAR_5, int *VAR_6 ){
 byte *VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 byte VAR_16[1024];
 qboolean VAR_17;
 byte *VAR_18;
 int VAR_19, VAR_20 = 0;

 VAR_19 = FUNC_6( VAR_2, (void **)&VAR_18, 0 );
 if ( VAR_19 == -1 ) {
  FUNC_0( "Couldn't read %s", VAR_2 );
 }

 VAR_8 = FUNC_2( VAR_18, VAR_19, &VAR_20 );
 if ( VAR_8 != 'B' + ( 'M' << 8 ) ) {
  FUNC_0( "%s is not a bmp file", VAR_2 );
 }

 VAR_9 = FUNC_1( VAR_18, VAR_19, &VAR_20 );
 FUNC_2( VAR_18, VAR_19, &VAR_20 );
 FUNC_2( VAR_18, VAR_19, &VAR_20 );
 VAR_10 = FUNC_1( VAR_18, VAR_19, &VAR_20 );



 VAR_11 = FUNC_1( VAR_18, VAR_19, &VAR_20 );
 if ( VAR_11 == 40 ) {

  VAR_12 = FUNC_1( VAR_18, VAR_19, &VAR_20 );
  VAR_13 = FUNC_1( VAR_18, VAR_19, &VAR_20 );
  VAR_14 = FUNC_2( VAR_18, VAR_19, &VAR_20 );
  VAR_15 = FUNC_2( VAR_18, VAR_19, &VAR_20 );

  VAR_20 += 24;

  if ( VAR_4 ) {
   FUNC_4( VAR_16, VAR_18 + VAR_20, 1024 );
   VAR_20 += 1024;
   *VAR_4 = FUNC_5( 768 );

   for ( VAR_8 = 0 ; VAR_8 < 256 ; VAR_8++ )
   {
    ( *VAR_4 )[VAR_8 * 3 + 0] = VAR_16[VAR_8 * 4 + 2];
    ( *VAR_4 )[VAR_8 * 3 + 1] = VAR_16[VAR_8 * 4 + 1];
    ( *VAR_4 )[VAR_8 * 3 + 2] = VAR_16[VAR_8 * 4 + 0];
   }
  }
 }
 else if ( VAR_11 == 12 ) {

  VAR_12 = FUNC_2( VAR_18, VAR_19, &VAR_20 );
  VAR_13 = FUNC_2( VAR_18, VAR_19, &VAR_20 );
  VAR_14 = FUNC_2( VAR_18, VAR_19, &VAR_20 );
  VAR_15 = FUNC_2( VAR_18, VAR_19, &VAR_20 );

  if ( VAR_4 ) {
   FUNC_4( VAR_16, VAR_18 + VAR_20, 768 );
   VAR_20 += 768;
   *VAR_4 = FUNC_5( 768 );

   for ( VAR_8 = 0 ; VAR_8 < 256 ; VAR_8++ ) {
    ( *VAR_4 )[VAR_8 * 3 + 0] = VAR_16[VAR_8 * 3 + 2];
    ( *VAR_4 )[VAR_8 * 3 + 1] = VAR_16[VAR_8 * 3 + 1];
    ( *VAR_4 )[VAR_8 * 3 + 2] = VAR_16[VAR_8 * 3 + 0];
   }
  }
 }
 else {
  FUNC_0( "%s had strange struct size", VAR_2 );
  return;
 }

 if ( VAR_14 != 1 ) {
  FUNC_0( "%s was not a single plane image", VAR_2 );
 }

 if ( VAR_15 != 8 ) {
  FUNC_0( "%s was not an 8 bit image", VAR_2 );
 }

 if ( VAR_13 < 0 ) {
  VAR_13 = -VAR_13;
  VAR_17 = VAR_1;
 }
 else {
  VAR_17 = VAR_0;
 }

 if ( VAR_5 ) {
  *VAR_5 = VAR_12;
 }
 if ( VAR_6 ) {
  *VAR_6 = VAR_13;
 }

 if ( !VAR_3 ) {
  FUNC_3( VAR_18 );
  return;
 }

 VAR_7 = FUNC_5( VAR_12 * VAR_13 );
 *VAR_3 = VAR_7;
 VAR_20 = VAR_10;

 if ( VAR_17 ) {
  for ( VAR_8 = 0 ; VAR_8 < VAR_13 ; VAR_8++ ) {
   FUNC_4( VAR_7 + VAR_12 * ( VAR_13 - 1 - VAR_8 ), VAR_18 + VAR_20, VAR_12 );
   VAR_20 += VAR_12;
  }
 }
 else {
  FUNC_4( VAR_7, VAR_18 + VAR_20, VAR_12 * VAR_13 );
  VAR_20 += VAR_12 * VAR_13;
 }

 FUNC_3( VAR_18 );
}
