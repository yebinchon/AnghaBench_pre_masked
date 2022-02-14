
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ccu_data {int dummy; } ;
struct bcm_clk_hyst {int offset; int en_bit; int val_bit; } ;


 int FUNC_0 (struct ccu_data*,int) ;
 int FUNC_1 (struct ccu_data*,int,int) ;
 int FUNC_2 (struct bcm_clk_hyst*) ;

__attribute__((used)) static bool FUNC_3(struct ccu_data *VAR_0, struct bcm_clk_hyst *VAR_1)
{
 u32 VAR_2;
 u32 VAR_3;
 u32 VAR_4;

 if (!FUNC_2(VAR_1))
  return 1;

 VAR_2 = VAR_1->offset;
 VAR_4 = (u32)1 << VAR_1->en_bit;
 VAR_4 |= (u32)1 << VAR_1->val_bit;

 VAR_3 = FUNC_0(VAR_0, VAR_2);
 VAR_3 |= VAR_4;
 FUNC_1(VAR_0, VAR_2, VAR_3);

 return 1;
}
