
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int registered; } ;
typedef TYPE_1__ itemInfo_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

void FUNC_3( void ) {
 int VAR_4;


 FUNC_0();
 FUNC_1();


 for ( VAR_4 = VAR_0 ; VAR_4 < VAR_1 ; VAR_4++ ) {
  itemInfo_t *VAR_5 = &VAR_2[ VAR_4 ];
  VAR_5->registered = VAR_3;

  FUNC_2( VAR_4 );
 }
}
