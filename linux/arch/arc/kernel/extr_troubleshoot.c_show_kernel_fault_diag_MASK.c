
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_4__ {unsigned long fault_address; } ;
struct TYPE_5__ {TYPE_1__ thread; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (struct pt_regs*) ;
 int FUNC_2 (TYPE_2__*,struct pt_regs*) ;
 int FUNC_3 (struct pt_regs*) ;

void FUNC_4(const char *VAR_1, struct pt_regs *VAR_2,
       unsigned long VAR_3)
{
 VAR_0->thread.fault_address = VAR_3;


 FUNC_0("\n%s\n", VAR_1);


 FUNC_1(VAR_2);


 if (!FUNC_3(VAR_2))
  FUNC_2(VAR_0, VAR_2);
}
