
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct notifier_block {int dummy; } ;
struct davinci_pllen_clk {scalar_t__ base; } ;
struct clk_notifier_data {int clk; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;


 struct clk_hw* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 struct davinci_pllen_clk* FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct notifier_block *VAR_5,
       unsigned long VAR_6, void *VAR_7)
{
 struct clk_notifier_data *VAR_8 = VAR_7;
 struct clk_hw *VAR_9 = FUNC_0(FUNC_1(VAR_8->clk));
 struct davinci_pllen_clk *VAR_10 = FUNC_3(VAR_9);
 u32 VAR_11, VAR_12;

 switch (VAR_6) {
 case 129:

  VAR_11 = FUNC_2(VAR_10->base + VAR_1);
  VAR_11 |= VAR_2;
  FUNC_4(VAR_11, VAR_10->base + VAR_1);

 case 128:

  do {
   VAR_12 = FUNC_2(VAR_10->base + VAR_3);
  } while (VAR_12 & VAR_4);
  break;
 }

 return VAR_0;
}
