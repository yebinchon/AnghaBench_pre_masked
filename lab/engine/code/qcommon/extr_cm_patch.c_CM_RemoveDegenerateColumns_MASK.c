
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; int ** points; } ;
typedef TYPE_1__ cGrid_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2( cGrid_t *VAR_0 ) {
 int VAR_1, VAR_2, VAR_3;

 for ( VAR_1 = 0 ; VAR_1 < VAR_0->width - 1 ; VAR_1++ ) {
  for ( VAR_2 = 0 ; VAR_2 < VAR_0->height ; VAR_2++ ) {
   if ( !FUNC_0( VAR_0->points[VAR_1][VAR_2], VAR_0->points[VAR_1+1][VAR_2] ) ) {
    break;
   }
  }

  if ( VAR_2 != VAR_0->height ) {
   continue;
  }

  for ( VAR_2 = 0 ; VAR_2 < VAR_0->height ; VAR_2++ ) {

   for ( VAR_3 = VAR_1 + 2 ; VAR_3 < VAR_0->width ; VAR_3++ ) {
    FUNC_1( VAR_0->points[VAR_3][VAR_2], VAR_0->points[VAR_3-1][VAR_2] );
   }
  }
  VAR_0->width--;


  VAR_1--;
 }
}
