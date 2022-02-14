
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_pgtable_cfg {int coherent_walk; } ;
typedef int arm_lpae_iopte ;


 int FUNC_0 (int *,struct io_pgtable_cfg*) ;

__attribute__((used)) static void FUNC_1(arm_lpae_iopte *VAR_0, arm_lpae_iopte VAR_1,
          struct io_pgtable_cfg *VAR_2)
{
 *VAR_0 = VAR_1;

 if (!VAR_2->coherent_walk)
  FUNC_0(VAR_0, VAR_2);
}
