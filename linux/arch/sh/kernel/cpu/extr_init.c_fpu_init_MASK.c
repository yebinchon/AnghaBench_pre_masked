
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{

 if (VAR_2 && (VAR_1.flags & VAR_0)) {
  FUNC_2("FPU Disabled\n");
  VAR_1.flags &= ~VAR_0;
 }

 FUNC_1();
 FUNC_0();
}
