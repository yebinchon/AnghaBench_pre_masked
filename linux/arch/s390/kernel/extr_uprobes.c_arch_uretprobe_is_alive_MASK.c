
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct return_instance {scalar_t__ stack; } ;
struct pt_regs {int dummy; } ;
typedef enum rp_check { ____Placeholder_rp_check } rp_check ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pt_regs*) ;

bool FUNC_1(struct return_instance *VAR_1, enum rp_check VAR_2,
        struct pt_regs *VAR_3)
{
 if (VAR_2 == VAR_0)
  return FUNC_0(VAR_3) <= VAR_1->stack;
 else
  return FUNC_0(VAR_3) < VAR_1->stack;
}
