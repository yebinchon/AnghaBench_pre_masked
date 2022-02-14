
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_mgr_internal {int smu_ver; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_mgr_internal*,int ,int) ;

int FUNC_1(struct clk_mgr_internal *VAR_1, int VAR_2)
{
 int VAR_3 = -1;

 if (VAR_1->smu_ver < 0xFFFFFFFF)
  return VAR_3;

 VAR_3 = FUNC_0(
   VAR_1,
   VAR_0,
   VAR_2 / 1000);

 return VAR_3 * 1000;
}
