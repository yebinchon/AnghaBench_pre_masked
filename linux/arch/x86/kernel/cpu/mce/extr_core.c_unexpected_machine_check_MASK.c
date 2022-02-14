
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct pt_regs *VAR_0, long VAR_1)
{
 FUNC_0("CPU#%d: Unexpected int18 (Machine Check)\n",
        FUNC_1());
}
