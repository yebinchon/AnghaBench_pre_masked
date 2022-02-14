
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct op_counter_config {int enabled; } ;


 int FUNC_0 (struct pt_regs*,unsigned long) ;

__attribute__((used)) static void
FUNC_1(unsigned long VAR_0, struct pt_regs *VAR_1,
       struct op_counter_config *VAR_2)
{


 if (!VAR_2[VAR_0].enabled)
  return;


 FUNC_0(VAR_1, VAR_0);
}
