
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ade_hw_ctx {int power_on; int ade_core_clk; int reset; int media_noc_clk; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct ade_hw_ctx*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ade_hw_ctx *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2(VAR_0->media_noc_clk);
 if (VAR_1) {
  FUNC_0("failed to enable media_noc_clk (%d)\n", VAR_1);
  return VAR_1;
 }

 VAR_1 = FUNC_3(VAR_0->reset);
 if (VAR_1) {
  FUNC_0("failed to deassert reset\n");
  return VAR_1;
 }

 VAR_1 = FUNC_2(VAR_0->ade_core_clk);
 if (VAR_1) {
  FUNC_0("failed to enable ade_core_clk (%d)\n", VAR_1);
  return VAR_1;
 }

 FUNC_1(VAR_0);
 VAR_0->power_on = 1;
 return 0;
}
