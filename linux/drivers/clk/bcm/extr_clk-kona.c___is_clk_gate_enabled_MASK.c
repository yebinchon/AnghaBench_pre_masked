
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ccu_data {int dummy; } ;
struct bcm_clk_gate {int status_bit; int offset; } ;


 int FUNC_0 (struct ccu_data*,int ) ;
 int FUNC_1 (struct bcm_clk_gate*) ;

__attribute__((used)) static bool
FUNC_2(struct ccu_data *VAR_0, struct bcm_clk_gate *VAR_1)
{
 u32 VAR_2;
 u32 VAR_3;


 if (!FUNC_1(VAR_1))
  return 1;

 VAR_2 = 1 << VAR_1->status_bit;
 VAR_3 = FUNC_0(VAR_0, VAR_1->offset);

 return (VAR_3 & VAR_2) != 0;
}
