
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_pgtable_cfg {int dummy; } ;
typedef int arm_v7s_iopte ;


 int FUNC_0 (int *,int,struct io_pgtable_cfg*) ;

__attribute__((used)) static void FUNC_1(arm_v7s_iopte *VAR_0, arm_v7s_iopte VAR_1,
         int VAR_2, struct io_pgtable_cfg *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  VAR_0[VAR_4] = VAR_1;

 FUNC_0(VAR_0, VAR_2, VAR_3);
}
