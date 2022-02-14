
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* mouseDx; size_t mouseIndex; int* mouseDy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int,int) ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;

void FUNC_2( int VAR_7, int VAR_8, int VAR_9 ) {
 if ( FUNC_0( ) & VAR_2 ) {
  FUNC_1( VAR_6, VAR_3, VAR_7, VAR_8 );
 } else if (FUNC_0( ) & VAR_1) {
  FUNC_1 (VAR_4, VAR_0, VAR_7, VAR_8);
 } else {
  VAR_5.mouseDx[VAR_5.mouseIndex] += VAR_7;
  VAR_5.mouseDy[VAR_5.mouseIndex] += VAR_8;
 }
}
