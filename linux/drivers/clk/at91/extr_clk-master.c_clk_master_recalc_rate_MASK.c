
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u8 ;
struct clk_master_layout {unsigned int mask; unsigned int pres_shift; int offset; } ;
struct TYPE_2__ {unsigned long min; unsigned long max; } ;
struct clk_master_characteristics {unsigned long* divisors; TYPE_1__ output; scalar_t__ have_div3_pres; } ;
struct clk_master {struct clk_master_layout* layout; int regmap; struct clk_master_characteristics* characteristics; } ;
struct clk_hw {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 struct clk_master* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_4,
         unsigned long VAR_5)
{
 u8 VAR_6;
 u8 VAR_7;
 unsigned long VAR_8 = VAR_5;
 struct clk_master *VAR_9 = FUNC_2(VAR_4);
 const struct clk_master_layout *VAR_10 = VAR_9->layout;
 const struct clk_master_characteristics *VAR_11 =
      VAR_9->characteristics;
 unsigned int VAR_12;

 FUNC_1(VAR_9->regmap, VAR_9->layout->offset, &VAR_12);
 VAR_12 &= VAR_10->mask;

 VAR_6 = (VAR_12 >> VAR_10->pres_shift) & VAR_2;
 VAR_7 = (VAR_12 >> VAR_1) & VAR_0;

 if (VAR_11->have_div3_pres && VAR_6 == VAR_3)
  VAR_8 /= 3;
 else
  VAR_8 >>= VAR_6;

 VAR_8 /= VAR_11->divisors[VAR_7];

 if (VAR_8 < VAR_11->output.min)
  FUNC_0("master clk is underclocked");
 else if (VAR_8 > VAR_11->output.max)
  FUNC_0("master clk is overclocked");

 return VAR_8;
}
