
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct return_instance {scalar_t__ stack; } ;
struct pt_regs {scalar_t__* gpr; } ;
typedef enum rp_check { ____Placeholder_rp_check } rp_check ;


 int VAR_0 ;

bool FUNC_0(struct return_instance *VAR_1, enum rp_check VAR_2,
    struct pt_regs *VAR_3)
{
 if (VAR_2 == VAR_0)
  return VAR_3->gpr[1] <= VAR_1->stack;
 else
  return VAR_3->gpr[1] < VAR_1->stack;
}
