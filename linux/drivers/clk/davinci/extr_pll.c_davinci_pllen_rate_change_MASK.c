
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 struct clk_hw* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 struct davinci_pllen_clk* FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct notifier_block *VAR_10,
         unsigned long VAR_11, void *VAR_12)
{
 struct clk_notifier_data *VAR_13 = VAR_12;
 struct clk_hw *VAR_14 = FUNC_0(VAR_13->clk);
 struct davinci_pllen_clk *VAR_15 = FUNC_2(VAR_14);
 u32 VAR_16;

 VAR_16 = FUNC_1(VAR_15->base + VAR_1);

 if (VAR_11 == VAR_9) {

  VAR_16 &= ~(VAR_4 | VAR_3);
  FUNC_4(VAR_16, VAR_15->base + VAR_1);

  FUNC_3(VAR_6);


  VAR_16 &= ~(VAR_5 | VAR_2);
  FUNC_4(VAR_16, VAR_15->base + VAR_1);
 } else {
  FUNC_3(VAR_8);


  VAR_16 |= VAR_5;
  FUNC_4(VAR_16, VAR_15->base + VAR_1);

  FUNC_3(VAR_7);


  VAR_16 |= VAR_3;
  FUNC_4(VAR_16, VAR_15->base + VAR_1);
 }

 return VAR_0;
}
