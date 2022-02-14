
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__* picoVec3_t ;
typedef scalar_t__* picoVec2_t ;
struct TYPE_3__ {int numVertexes; scalar_t__** xyz; scalar_t__** normal; scalar_t__* smoothingGroup; scalar_t__*** st; scalar_t__* color; } ;
typedef TYPE_1__ picoSurface_t ;
typedef scalar_t__ picoIndex_t ;
typedef scalar_t__ picoColor_t ;



int FUNC_0( picoSurface_t *VAR_0, picoVec3_t VAR_1, picoVec3_t VAR_2, int VAR_3, picoVec2_t *VAR_4, int VAR_5, picoColor_t *VAR_6, picoIndex_t VAR_7 ){
 int VAR_8, VAR_9;



 if ( VAR_0 == ((void*)0) || VAR_0->numVertexes <= 0 ) {
  return -1;
 }


 for ( VAR_8 = 0; VAR_8 < VAR_0->numVertexes; VAR_8++ )
 {

  if ( VAR_1 != ((void*)0) && ( VAR_0->xyz[ VAR_8 ][ 0 ] != VAR_1[ 0 ] || VAR_0->xyz[ VAR_8 ][ 1 ] != VAR_1[ 1 ] || VAR_0->xyz[ VAR_8 ][ 2 ] != VAR_1[ 2 ] ) ) {
   continue;
  }


  if ( VAR_2 != ((void*)0) && ( VAR_0->normal[ VAR_8 ][ 0 ] != VAR_2[ 0 ] || VAR_0->normal[ VAR_8 ][ 1 ] != VAR_2[ 1 ] || VAR_0->normal[ VAR_8 ][ 2 ] != VAR_2[ 2 ] ) ) {
   continue;
  }


  if ( VAR_0->smoothingGroup[ VAR_8 ] != VAR_7 ) {
   continue;
  }


  if ( VAR_3 > 0 && VAR_4 != ((void*)0) ) {
   for ( VAR_9 = 0; VAR_9 < VAR_3; VAR_9++ )
   {
    if ( VAR_0->st[ VAR_9 ][ VAR_8 ][ 0 ] != VAR_4[ VAR_9 ][ 0 ] || VAR_0->st[ VAR_9 ][ VAR_8 ][ 1 ] != VAR_4[ VAR_9 ][ 1 ] ) {
     break;
    }
   }
   if ( VAR_9 != VAR_3 ) {
    continue;
   }
  }


  if ( VAR_5 > 0 && VAR_6 != ((void*)0) ) {
   for ( VAR_9 = 0; VAR_9 < VAR_3; VAR_9++ )
   {
    if ( *( (int*) VAR_0->color[ VAR_9 ] ) != *( (int*) VAR_6[ VAR_9 ] ) ) {
     break;
    }
   }
   if ( VAR_9 != VAR_5 ) {
    continue;
   }
  }


  return VAR_8;
 }


 return -1;
}
