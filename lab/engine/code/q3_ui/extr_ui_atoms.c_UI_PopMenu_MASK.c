
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int menusp; int firstdraw; int * stack; int activemenu; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 TYPE_1__ VAR_3 ;

void FUNC_3 (void)
{
 FUNC_2( VAR_1, VAR_0 );

 VAR_3.menusp--;

 if (VAR_3.menusp < 0)
  FUNC_1 ("UI_PopMenu: menu stack underflow");

 if (VAR_3.menusp) {
  VAR_3.activemenu = VAR_3.stack[VAR_3.menusp-1];
  VAR_3.firstdraw = VAR_2;
 }
 else {
  FUNC_0 ();
 }
}
