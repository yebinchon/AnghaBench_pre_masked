
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powernv_rng {int regs; } ;


 struct powernv_rng* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct powernv_rng*) ;
 unsigned long FUNC_3 (struct powernv_rng*,int ) ;

int FUNC_4(unsigned long *VAR_1)
{
 struct powernv_rng *VAR_2;

 VAR_2 = FUNC_0(VAR_0);

 *VAR_1 = FUNC_3(VAR_2, FUNC_1(VAR_2->regs));

 FUNC_2(VAR_2);

 return 1;
}
