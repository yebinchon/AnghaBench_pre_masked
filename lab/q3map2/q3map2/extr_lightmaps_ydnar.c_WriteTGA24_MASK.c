
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ qboolean ;
typedef int byte ;
typedef int FILE ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*,int,int,int *) ;
 int FUNC_5 (int*,int ,int) ;
 int* FUNC_6 (int) ;

void FUNC_7( char *VAR_0, byte *VAR_1, int VAR_2, int VAR_3, qboolean VAR_4 ){
 int VAR_5, VAR_6;
 byte *VAR_7, *VAR_8;
 FILE *VAR_9;



 VAR_7 = FUNC_6( VAR_2 * VAR_3 * 3 + 18 );
 FUNC_5( VAR_7, 0, 18 );
 VAR_7[ 2 ] = 2;
 VAR_7[ 12 ] = VAR_2 & 255;
 VAR_7[ 13 ] = VAR_2 >> 8;
 VAR_7[ 14 ] = VAR_3 & 255;
 VAR_7[ 15 ] = VAR_3 >> 8;
 VAR_7[ 16 ] = 24;


 VAR_6 = ( VAR_2 * VAR_3 * 3 ) + 18;
 for ( VAR_5 = 18; VAR_5 < VAR_6; VAR_5 += 3 )
 {
  VAR_7[ VAR_5 ] = VAR_1[ VAR_5 - 18 + 2 ];
  VAR_7[ VAR_5 + 1 ] = VAR_1[ VAR_5 - 18 + 1 ];
  VAR_7[ VAR_5 + 2 ] = VAR_1[ VAR_5 - 18 + 0 ];
 }


 VAR_9 = FUNC_2( VAR_0, "wb" );
 if ( VAR_9 == ((void*)0) ) {
  FUNC_0( "Unable to open %s for writing", VAR_0 );
 }


 if ( VAR_4 ) {
  FUNC_4( VAR_7, 1, 18, VAR_9 );
  for ( VAR_8 = VAR_7 + ( ( VAR_3 - 1 ) * VAR_2 * 3 ) + 18; VAR_8 >= VAR_7; VAR_8 -= ( VAR_2 * 3 ) )
   FUNC_4( VAR_8, 1, ( VAR_2 * 3 ), VAR_9 );
 }
 else{
  FUNC_4( VAR_7, 1, VAR_6, VAR_9 );
 }


 FUNC_1( VAR_9 );
 FUNC_3( VAR_7 );
}
