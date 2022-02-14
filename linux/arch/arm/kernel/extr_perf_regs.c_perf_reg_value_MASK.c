
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct pt_regs {int * uregs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

u64 FUNC_1(struct pt_regs *VAR_1, int VAR_2)
{
 if (FUNC_0((u32)VAR_2 >= VAR_0))
  return 0;

 return VAR_1->uregs[VAR_2];
}
