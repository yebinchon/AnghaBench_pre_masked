
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_3__ {int w; int h; int * pixels; } ;
typedef TYPE_1__ indexMap_t ;
typedef int byte ;


 float FUNC_0 (float) ;

byte FUNC_1( indexMap_t *VAR_0, vec3_t VAR_1, vec3_t VAR_2, vec3_t VAR_3 ){
 int VAR_4, VAR_5, VAR_6;
 float VAR_7, VAR_8;
 vec3_t VAR_9, VAR_10, VAR_11;



 if ( VAR_0 == ((void*)0) ) {
  return 0;
 }
 for ( VAR_4 = 0; VAR_4 < 3; VAR_4++ )
 {
  VAR_9[ VAR_4 ] = VAR_1[ VAR_4 ];
  VAR_10[ VAR_4 ] = VAR_2[ VAR_4 ];
  VAR_11[ VAR_4 ] = VAR_10[ VAR_4 ] - VAR_9[ VAR_4 ];
 }


 VAR_7 = ( VAR_3[ 0 ] - VAR_9[ 0 ] ) / VAR_11[ 0 ];
 VAR_8 = ( VAR_10[ 1 ] - VAR_3[ 1 ] ) / VAR_11[ 1 ];


 VAR_5 = VAR_7 * VAR_0->w;
 VAR_6 = VAR_8 * VAR_0->h;
 if ( VAR_5 < 0 ) {
  VAR_5 = 0;
 }
 else if ( VAR_5 > ( VAR_0->w - 1 ) ) {
  VAR_5 = ( VAR_0->w - 1 );
 }
 if ( VAR_6 < 0 ) {
  VAR_6 = 0;
 }
 else if ( VAR_6 > ( VAR_0->h - 1 ) ) {
  VAR_6 = ( VAR_0->h - 1 );
 }



 return VAR_0->pixels[ VAR_6 * VAR_0->w + VAR_5 ];
}
