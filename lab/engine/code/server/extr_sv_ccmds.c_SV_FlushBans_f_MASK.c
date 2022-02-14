
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int integer; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_2(void)
{

 if ( !VAR_0->integer ) {
  FUNC_0( "Server is not running.\n" );
  return;
 }

 VAR_1 = 0;


 FUNC_1();

 FUNC_0("All bans and exceptions have been deleted.\n");
}
