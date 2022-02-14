
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ model; scalar_t__ hasLightmap; scalar_t__ sampleSize; scalar_t__* axis; scalar_t__* plane; scalar_t__* mins; } ;
typedef TYPE_1__ surfaceInfo_t ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_0( const void *VAR_1, const void *VAR_2 ){
 surfaceInfo_t *VAR_3, *VAR_4;
 int VAR_5;



 VAR_3 = &VAR_0[ *( (int*) VAR_1 ) ];
 VAR_4 = &VAR_0[ *( (int*) VAR_2 ) ];


 if ( VAR_3->model < VAR_4->model ) {
  return 1;
 }
 else if ( VAR_3->model > VAR_4->model ) {
  return -1;
 }


 if ( VAR_3->hasLightmap < VAR_4->hasLightmap ) {
  return 1;
 }
 else if ( VAR_3->hasLightmap > VAR_4->hasLightmap ) {
  return -1;
 }


 if ( VAR_3->sampleSize < VAR_4->sampleSize ) {
  return 1;
 }
 else if ( VAR_3->sampleSize > VAR_4->sampleSize ) {
  return -1;
 }


 for ( VAR_5 = 0; VAR_5 < 3; VAR_5++ )
 {
  if ( VAR_3->axis[ VAR_5 ] < VAR_4->axis[ VAR_5 ] ) {
   return 1;
  }
  else if ( VAR_3->axis[ VAR_5 ] > VAR_4->axis[ VAR_5 ] ) {
   return -1;
  }
 }


 if ( VAR_3->plane == ((void*)0) && VAR_4->plane != ((void*)0) ) {
  return 1;
 }
 else if ( VAR_3->plane != ((void*)0) && VAR_4->plane == ((void*)0) ) {
  return -1;
 }
 else if ( VAR_3->plane != ((void*)0) && VAR_4->plane != ((void*)0) ) {
  for ( VAR_5 = 0; VAR_5 < 4; VAR_5++ )
  {
   if ( VAR_3->plane[ VAR_5 ] < VAR_4->plane[ VAR_5 ] ) {
    return 1;
   }
   else if ( VAR_3->plane[ VAR_5 ] > VAR_4->plane[ VAR_5 ] ) {
    return -1;
   }
  }
 }


 for ( VAR_5 = 0; VAR_5 < 3; VAR_5++ )
 {
  if ( VAR_3->mins[ VAR_5 ] < VAR_4->mins[ VAR_5 ] ) {
   return 1;
  }
  else if ( VAR_3->mins[ VAR_5 ] > VAR_4->mins[ VAR_5 ] ) {
   return -1;
  }
 }


 return 0;
}
