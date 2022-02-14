
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_clk_gate {int hw_sw_sel_bit; int en_bit; int status_bit; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*) ;
 scalar_t__ FUNC_2 (struct bcm_clk_gate*) ;
 scalar_t__ FUNC_3 (struct bcm_clk_gate*) ;

__attribute__((used)) static bool FUNC_4(struct bcm_clk_gate *VAR_0, const char *VAR_1,
   const char *VAR_2)
{
 if (!FUNC_1(VAR_0->status_bit, "gate status", VAR_2))
  return 0;

 if (FUNC_3(VAR_0)) {
  if (!FUNC_1(VAR_0->en_bit, "gate enable", VAR_2))
   return 0;

  if (FUNC_2(VAR_0)) {
   if (!FUNC_1(VAR_0->hw_sw_sel_bit,
      "gate hw/sw select",
      VAR_2))
    return 0;
  }
 } else {
  FUNC_0(!FUNC_2(VAR_0));
 }

 return 1;
}
