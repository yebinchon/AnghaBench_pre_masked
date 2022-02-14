
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct freq_tbl {int pre_div; int n; scalar_t__ m; } ;
struct frac_entry {int den; scalar_t__ num; } ;
struct TYPE_2__ {int regmap; } ;
struct clk_rcg2 {scalar_t__ cmd_rcgr; TYPE_1__ clkr; int hid_width; struct freq_tbl* freq_tbl; } ;
struct clk_hw {int dummy; } ;
typedef int s64 ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct clk_rcg2*,struct freq_tbl*) ;
 int FUNC_2 (int,scalar_t__) ;
 struct frac_entry* VAR_3 ;
 struct frac_entry* VAR_4 ;
 int FUNC_3 (int ,scalar_t__,int*) ;
 struct clk_rcg2* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_5, unsigned long VAR_6,
         unsigned long VAR_7)
{
 struct clk_rcg2 *VAR_8 = FUNC_4(VAR_5);
 struct freq_tbl VAR_9 = *VAR_8->freq_tbl;
 const struct frac_entry *VAR_10;
 int VAR_11 = 100000;
 s64 VAR_12 = VAR_7;
 s64 VAR_13;
 u32 VAR_14 = FUNC_0(VAR_8->hid_width) - 1;
 u32 VAR_15;

 if (VAR_12 == 810000000)
  VAR_10 = VAR_4;
 else
  VAR_10 = VAR_3;

 for (; VAR_10->num; VAR_10++) {
  VAR_13 = VAR_6;
  VAR_13 *= VAR_10->den;
  VAR_13 = FUNC_2(VAR_13, VAR_10->num);
  if ((VAR_12 < (VAR_13 - VAR_11)) ||
      (VAR_12 > (VAR_13 + VAR_11)))
   continue;

  FUNC_3(VAR_8->clkr.regmap, VAR_8->cmd_rcgr + VAR_0,
    &VAR_15);
  VAR_9.pre_div = VAR_15;
  VAR_9.pre_div >>= VAR_1;
  VAR_9.pre_div &= VAR_14;
  VAR_9.m = VAR_10->num;
  VAR_9.n = VAR_10->den;

  return FUNC_1(VAR_8, &VAR_9);
 }

 return -VAR_2;
}
