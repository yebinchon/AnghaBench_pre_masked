
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ccu_data {int dummy; } ;
struct bcm_clk_gate {int hw_sw_sel_bit; int en_bit; int status_bit; int offset; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ccu_data*,int ) ;
 int FUNC_2 (struct ccu_data*,int ,int ,int) ;
 int FUNC_3 (struct ccu_data*,int ,int) ;
 int FUNC_4 (struct bcm_clk_gate*) ;
 int FUNC_5 (struct bcm_clk_gate*) ;
 scalar_t__ FUNC_6 (struct bcm_clk_gate*) ;
 int FUNC_7 (struct bcm_clk_gate*) ;
 int FUNC_8 (struct bcm_clk_gate*) ;
 scalar_t__ FUNC_9 (struct bcm_clk_gate*) ;

__attribute__((used)) static bool
FUNC_10(struct ccu_data *VAR_0, struct bcm_clk_gate *VAR_1)
{
 u32 VAR_2;
 u32 VAR_3;
 bool VAR_4 = 0;

 FUNC_0(!FUNC_4(VAR_1));
 if (!FUNC_8(VAR_1))
  return 1;

 VAR_2 = FUNC_1(VAR_0, VAR_1->offset);


 if (FUNC_6(VAR_1)) {
  VAR_3 = (u32)1 << VAR_1->hw_sw_sel_bit;
  if (FUNC_9(VAR_1))
   VAR_2 |= VAR_3;
  else
   VAR_2 &= ~VAR_3;
 }
 VAR_3 = (u32)1 << VAR_1->en_bit;
 if (FUNC_9(VAR_1) && (VAR_4 = FUNC_5(VAR_1)) &&
   !FUNC_7(VAR_1))
  VAR_2 |= VAR_3;
 else
  VAR_2 &= ~VAR_3;

 FUNC_3(VAR_0, VAR_1->offset, VAR_2);


 if (!FUNC_9(VAR_1))
  return 1;


 return FUNC_2(VAR_0, VAR_1->offset, VAR_1->status_bit, VAR_4);
}
