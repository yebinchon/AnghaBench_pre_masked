
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int w; int h; scalar_t__* solid; } ;
typedef TYPE_1__ rawLightmap_t ;
typedef int qboolean ;
struct TYPE_6__ {int customWidth; int customHeight; int* lightBits; } ;
typedef TYPE_2__ outLightmap_t ;


 float* FUNC_0 (int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static qboolean FUNC_1( rawLightmap_t *VAR_2, int VAR_3, outLightmap_t *VAR_4, int VAR_5, int VAR_6 ){
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 float *VAR_12;



 if ( VAR_5 < 0 || VAR_6 < 0 || ( VAR_5 + VAR_2->w ) > VAR_4->customWidth || ( VAR_6 + VAR_2->h ) > VAR_4->customHeight ) {
  return VAR_0;
 }


 if ( VAR_2->solid[ VAR_3 ] ) {
  VAR_11 = ( VAR_6 * VAR_4->customWidth ) + VAR_5;
  if ( VAR_4->lightBits[ VAR_11 >> 3 ] & ( 1 << ( VAR_11 & 7 ) ) ) {
   return VAR_0;
  }
  return VAR_1;
 }


 for ( VAR_8 = 0; VAR_8 < VAR_2->h; VAR_8++ )
 {
  for ( VAR_7 = 0; VAR_7 < VAR_2->w; VAR_7++ )
  {

   VAR_12 = FUNC_0( VAR_3, VAR_7, VAR_8 );
   if ( VAR_12[ 0 ] < 0.0f ) {
    continue;
   }


   VAR_9 = VAR_5 + VAR_7;
   VAR_10 = VAR_6 + VAR_8;
   VAR_11 = ( VAR_10 * VAR_4->customWidth ) + VAR_9;
   if ( VAR_4->lightBits[ VAR_11 >> 3 ] & ( 1 << ( VAR_11 & 7 ) ) ) {
    return VAR_0;
   }
  }
 }


 return VAR_1;
}
