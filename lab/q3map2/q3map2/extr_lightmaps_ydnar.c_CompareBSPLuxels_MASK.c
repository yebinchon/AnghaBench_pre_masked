
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ customWidth; scalar_t__ customHeight; scalar_t__ brightness; scalar_t__* solid; float** solidColor; int w; int h; int ** bspLuxels; } ;
typedef TYPE_1__ rawLightmap_t ;
typedef int qboolean ;


 float* FUNC_0 (int,int,int) ;
 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 double FUNC_1 (float) ;
 scalar_t__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static qboolean FUNC_2( rawLightmap_t *VAR_6, int VAR_7, rawLightmap_t *VAR_8, int VAR_9 ){
 rawLightmap_t *VAR_10;
 int VAR_11, VAR_12;
 double VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 float *VAR_18, *VAR_19;



 if ( ( VAR_3[ 0 ] || VAR_3[ 1 ] || VAR_3[ 2 ] ) &&
   ( ( VAR_7 == 0 && VAR_9 != 0 ) || ( VAR_7 != 0 && VAR_9 == 0 ) ) ) {
  return VAR_4;
 }


 if ( VAR_6->customWidth != VAR_8->customWidth || VAR_6->customHeight != VAR_8->customHeight ||
   VAR_6->brightness != VAR_8->brightness ||
   VAR_6->solid[ VAR_7 ] != VAR_8->solid[ VAR_9 ] ||
   VAR_6->bspLuxels[ VAR_7 ] == ((void*)0) || VAR_8->bspLuxels[ VAR_9 ] == ((void*)0) ) {
  return VAR_4;
 }


 if ( VAR_6->solid[ VAR_7 ] && VAR_8->solid[ VAR_9 ] ) {

  VAR_15 = FUNC_1( VAR_6->solidColor[ VAR_7 ][ 0 ] - VAR_8->solidColor[ VAR_9 ][ 0 ] );
  VAR_16 = FUNC_1( VAR_6->solidColor[ VAR_7 ][ 1 ] - VAR_8->solidColor[ VAR_9 ][ 1 ] );
  VAR_17 = FUNC_1( VAR_6->solidColor[ VAR_7 ][ 2 ] - VAR_8->solidColor[ VAR_9 ][ 2 ] );


  if ( VAR_15 > VAR_2 || VAR_16 > VAR_2 || VAR_17 > VAR_2 ) {
   return VAR_4;
  }


  return VAR_5;
 }


 if ( VAR_6->w != VAR_8->w || VAR_6->h != VAR_8->h ) {
  return VAR_4;
 }


 VAR_13 = 0.0;
 VAR_14 = 0.0;
 for ( VAR_12 = 0; VAR_12 < VAR_6->h; VAR_12++ )
 {
  for ( VAR_11 = 0; VAR_11 < VAR_6->w; VAR_11++ )
  {

   VAR_14 += 1.0;


   VAR_10 = VAR_6; VAR_18 = FUNC_0( VAR_7, VAR_11, VAR_12 );
   VAR_10 = VAR_8; VAR_19 = FUNC_0( VAR_9, VAR_11, VAR_12 );


   if ( VAR_18[ 0 ] < 0 || VAR_19[ 0 ] < 0 ) {
    continue;
   }


   VAR_15 = FUNC_1( VAR_18[ 0 ] - VAR_19[ 0 ] );
   VAR_16 = FUNC_1( VAR_18[ 1 ] - VAR_19[ 1 ] );
   VAR_17 = FUNC_1( VAR_18[ 2 ] - VAR_19[ 2 ] );


   if ( VAR_15 > 3.0 || VAR_16 > 3.0 || VAR_17 > 3.0 ) {
    return VAR_4;
   }


   VAR_13 += VAR_15 * VAR_0;
   VAR_13 += VAR_16 * VAR_0;
   VAR_13 += VAR_17 * VAR_0;


   if ( VAR_14 > 0.0 && ( ( VAR_13 / VAR_14 ) > VAR_1 ) ) {
    return VAR_4;
   }
  }
 }


 return VAR_5;
}
