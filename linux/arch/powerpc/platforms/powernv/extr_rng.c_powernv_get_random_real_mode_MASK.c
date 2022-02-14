
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powernv_rng {int regs_real; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct powernv_rng* FUNC_1 (int ) ;
 unsigned long FUNC_2 (struct powernv_rng*,int ) ;

int FUNC_3(unsigned long *VAR_1)
{
 struct powernv_rng *VAR_2;

 VAR_2 = FUNC_1(VAR_0);

 *VAR_1 = FUNC_2(VAR_2, FUNC_0(VAR_2->regs_real));

 return 1;
}
