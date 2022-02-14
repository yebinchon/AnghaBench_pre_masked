
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int trampoline; int last_report; int trampoline_enabled; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(void)
{
 if (!VAR_1.trampoline_enabled) {
  FUNC_1(
    "Fatal error: a cleanup method raised an exception.");
  FUNC_2(VAR_1.last_report);
  FUNC_3(-1);
 }

 FUNC_0(VAR_0);
 FUNC_4(VAR_1.trampoline, -1);
}
