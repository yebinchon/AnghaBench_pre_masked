
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fapll_data {int base; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct fapll_data*) ;
 struct fapll_data* FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_1)
{
 struct fapll_data *VAR_2 = FUNC_2(VAR_1);
 u32 VAR_3 = FUNC_0(VAR_2->base);

 VAR_3 |= VAR_0;
 FUNC_3(VAR_3, VAR_2->base);
 FUNC_1(VAR_2);

 return 0;
}
