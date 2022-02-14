
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int count; TYPE_1__* pt; } ;
typedef TYPE_2__ lwPointList ;
struct TYPE_4__ {float* pos; } ;



void FUNC_0( lwPointList *VAR_0, float VAR_1[] ){
 int VAR_2, VAR_3;

 if ( VAR_0->count == 0 ) {
  return;
 }

 for ( VAR_2 = 0; VAR_2 < 6; VAR_2++ )
  if ( VAR_1[ VAR_2 ] != 0.0f ) {
   return;
  }

 VAR_1[ 0 ] = VAR_1[ 1 ] = VAR_1[ 2 ] = 1e20f;
 VAR_1[ 3 ] = VAR_1[ 4 ] = VAR_1[ 5 ] = -1e20f;
 for ( VAR_2 = 0; VAR_2 < VAR_0->count; VAR_2++ ) {
  for ( VAR_3 = 0; VAR_3 < 3; VAR_3++ ) {
   if ( VAR_1[ VAR_3 ] > VAR_0->pt[ VAR_2 ].pos[ VAR_3 ] ) {
    VAR_1[ VAR_3 ] = VAR_0->pt[ VAR_2 ].pos[ VAR_3 ];
   }
   if ( VAR_1[ VAR_3 + 3 ] < VAR_0->pt[ VAR_2 ].pos[ VAR_3 ] ) {
    VAR_1[ VAR_3 + 3 ] = VAR_0->pt[ VAR_2 ].pos[ VAR_3 ];
   }
  }
 }
}
