
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int regmap; } ;
struct clk_rcg2 {scalar_t__ hid_width; TYPE_1__ clkr; scalar_t__ mnd_width; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct clk_rcg2*) ;
 int FUNC_2 (struct clk_rcg2*) ;
 int FUNC_3 (struct clk_rcg2*) ;
 unsigned long FUNC_4 (unsigned long,int,int,int,int) ;
 int FUNC_5 (int ,int ,int*) ;
 struct clk_rcg2* FUNC_6 (struct clk_hw*) ;

__attribute__((used)) static unsigned long
FUNC_7(struct clk_hw *VAR_3, unsigned long VAR_4)
{
 struct clk_rcg2 *VAR_5 = FUNC_6(VAR_3);
 u32 VAR_6, VAR_7, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0, VAR_11;

 FUNC_5(VAR_5->clkr.regmap, FUNC_1(VAR_5), &VAR_6);

 if (VAR_5->mnd_width) {
  VAR_11 = FUNC_0(VAR_5->mnd_width) - 1;
  FUNC_5(VAR_5->clkr.regmap, FUNC_2(VAR_5), &VAR_8);
  VAR_8 &= VAR_11;
  FUNC_5(VAR_5->clkr.regmap, FUNC_3(VAR_5), &VAR_9);
  VAR_9 = ~VAR_9;
  VAR_9 &= VAR_11;
  VAR_9 += VAR_8;
  VAR_10 = VAR_6 & VAR_0;
  VAR_10 >>= VAR_1;
 }

 VAR_11 = FUNC_0(VAR_5->hid_width) - 1;
 VAR_7 = VAR_6 >> VAR_2;
 VAR_7 &= VAR_11;

 return FUNC_4(VAR_4, VAR_8, VAR_9, VAR_10, VAR_7);
}
