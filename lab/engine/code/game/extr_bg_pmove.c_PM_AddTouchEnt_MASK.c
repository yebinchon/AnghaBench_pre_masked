
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int numtouch; int* touchents; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

void FUNC_0( int VAR_3 ) {
 int VAR_4;

 if ( VAR_3 == VAR_0 ) {
  return;
 }
 if ( VAR_2->numtouch == VAR_1 ) {
  return;
 }


 for ( VAR_4 = 0 ; VAR_4 < VAR_2->numtouch ; VAR_4++ ) {
  if ( VAR_2->touchents[ VAR_4 ] == VAR_3 ) {
   return;
  }
 }


 VAR_2->touchents[VAR_2->numtouch] = VAR_3;
 VAR_2->numtouch++;
}
