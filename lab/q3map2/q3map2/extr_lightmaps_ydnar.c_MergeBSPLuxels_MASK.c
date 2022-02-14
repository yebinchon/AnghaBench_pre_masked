
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ customWidth; scalar_t__ customHeight; scalar_t__ brightness; scalar_t__* solid; float** solidColor; int w; int h; int ** bspLuxels; } ;
typedef TYPE_1__ rawLightmap_t ;
typedef int qboolean ;


 float* FUNC_0 (int,int,int) ;
 int FUNC_1 (float*,float*,float*) ;
 int FUNC_2 (float*,float*) ;
 int FUNC_3 (float*,float,float*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static qboolean FUNC_4( rawLightmap_t *VAR_2, int VAR_3, rawLightmap_t *VAR_4, int VAR_5 ){
 rawLightmap_t *VAR_6;
 int VAR_7, VAR_8;
 float VAR_9[ 3 ], *VAR_10, *VAR_11;



 if ( VAR_2->customWidth != VAR_4->customWidth || VAR_2->customHeight != VAR_4->customHeight ||
   VAR_2->brightness != VAR_4->brightness ||
   VAR_2->solid[ VAR_3 ] != VAR_4->solid[ VAR_5 ] ||
   VAR_2->bspLuxels[ VAR_3 ] == ((void*)0) || VAR_4->bspLuxels[ VAR_5 ] == ((void*)0) ) {
  return VAR_0;
 }


 if ( VAR_2->solid[ VAR_3 ] && VAR_4->solid[ VAR_5 ] ) {

  FUNC_1( VAR_2->solidColor[ VAR_3 ], VAR_4->solidColor[ VAR_5 ], VAR_9 );
  FUNC_3( VAR_9, 0.5f, VAR_9 );


  FUNC_2( VAR_9, VAR_2->solidColor[ VAR_3 ] );
  FUNC_2( VAR_9, VAR_4->solidColor[ VAR_5 ] );


  return VAR_1;
 }


 if ( VAR_2->w != VAR_4->w || VAR_2->h != VAR_4->h ) {
  return VAR_0;
 }


 for ( VAR_8 = 0; VAR_8 < VAR_2->h; VAR_8++ )
 {
  for ( VAR_7 = 0; VAR_7 < VAR_2->w; VAR_7++ )
  {

   VAR_6 = VAR_2; VAR_10 = FUNC_0( VAR_3, VAR_7, VAR_8 );
   VAR_6 = VAR_4; VAR_11 = FUNC_0( VAR_5, VAR_7, VAR_8 );


   if ( VAR_10[ 0 ] < 0.0f ) {
    FUNC_2( VAR_11, VAR_10 );
   }
   else if ( VAR_11[ 0 ] < 0.0f ) {
    FUNC_2( VAR_10, VAR_11 );
   }
   else
   {

    FUNC_1( VAR_10, VAR_11, VAR_9 );
    FUNC_3( VAR_9, 0.5f, VAR_9 );





    FUNC_2( VAR_9, VAR_10 );
    FUNC_2( VAR_9, VAR_11 );
   }
  }
 }


 return VAR_1;
}
