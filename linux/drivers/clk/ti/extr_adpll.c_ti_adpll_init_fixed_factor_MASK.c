
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_adpll_data {int dev; } ;
struct clk {int dummy; } ;
typedef enum ti_adpll_clocks { ____Placeholder_ti_adpll_clocks } ti_adpll_clocks ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 char* FUNC_2 (struct clk*) ;
 struct clk* FUNC_3 (int ,char const*,char const*,int ,unsigned int,unsigned int) ;
 int VAR_2 ;
 char* FUNC_4 (struct ti_adpll_data*,int ,char*) ;
 int FUNC_5 (struct ti_adpll_data*,struct clk*,int,int ,char const*,int ) ;

__attribute__((used)) static int FUNC_6(struct ti_adpll_data *VAR_3,
          enum ti_adpll_clocks VAR_4,
          char *VAR_5,
          struct clk *VAR_6,
          unsigned int VAR_7,
          unsigned int VAR_8)
{
 const char *VAR_9;
 const char *VAR_10;
 struct clk *VAR_11;

 VAR_9 = FUNC_4(VAR_3, -VAR_0, VAR_5);
 if (!VAR_9)
  return -VAR_1;

 VAR_10 = FUNC_2(VAR_6);
 VAR_11 = FUNC_3(VAR_3->dev, VAR_9, VAR_10,
       0, VAR_7, VAR_8);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 return FUNC_5(VAR_3, VAR_11, VAR_4, -VAR_0, VAR_9,
        VAR_2);
}
