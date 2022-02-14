
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int height; float*** points; int width; int wrapWidth; } ;
typedef TYPE_1__ cGrid_t ;


 float VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0( cGrid_t *VAR_3 ) {
 int VAR_4, VAR_5;
 float VAR_6;

 for ( VAR_4 = 0 ; VAR_4 < VAR_3->height ; VAR_4++ ) {
  for ( VAR_5 = 0 ; VAR_5 < 3 ; VAR_5++ ) {
   VAR_6 = VAR_3->points[0][VAR_4][VAR_5] - VAR_3->points[VAR_3->width-1][VAR_4][VAR_5];
   if ( VAR_6 < -VAR_0 || VAR_6 > VAR_0 ) {
    break;
   }
  }
  if ( VAR_5 != 3 ) {
   break;
  }
 }
 if ( VAR_4 == VAR_3->height ) {
  VAR_3->wrapWidth = VAR_2;
 } else {
  VAR_3->wrapWidth = VAR_1;
 }
}
