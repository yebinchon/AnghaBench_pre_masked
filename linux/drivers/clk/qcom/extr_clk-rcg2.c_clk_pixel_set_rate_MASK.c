
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct freq_tbl {int pre_div; unsigned long m; unsigned long n; int src; int member_0; } ;
struct frac_entry {int num; unsigned long den; } ;
struct TYPE_4__ {int regmap; } ;
struct clk_rcg2 {scalar_t__ cmd_rcgr; TYPE_2__ clkr; TYPE_1__* parent_map; int hid_width; } ;
struct clk_hw {int dummy; } ;
struct TYPE_3__ {int cfg; int src; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (struct clk_rcg2*,struct freq_tbl*) ;
 struct frac_entry* VAR_5 ;
 int FUNC_3 (int ,scalar_t__,int*) ;
 struct clk_rcg2* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_6, unsigned long VAR_7,
  unsigned long VAR_8)
{
 struct clk_rcg2 *VAR_9 = FUNC_4(VAR_6);
 struct freq_tbl VAR_10 = { 0 };
 const struct frac_entry *VAR_11 = VAR_5;
 unsigned long VAR_12;
 int VAR_13 = 100000;
 u32 VAR_14 = FUNC_0(VAR_9->hid_width) - 1;
 u32 VAR_15, VAR_16;
 int VAR_17, VAR_18 = FUNC_1(VAR_6);

 FUNC_3(VAR_9->clkr.regmap, VAR_9->cmd_rcgr + VAR_0, &VAR_16);
 VAR_16 &= VAR_2;
 VAR_16 >>= VAR_3;

 for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++)
  if (VAR_16 == VAR_9->parent_map[VAR_17].cfg) {
   VAR_10.src = VAR_9->parent_map[VAR_17].src;
   break;
  }

 for (; VAR_11->num; VAR_11++) {
  VAR_12 = (VAR_7 * VAR_11->den) / VAR_11->num;

  if ((VAR_8 < (VAR_12 - VAR_13)) ||
   (VAR_8 > (VAR_12 + VAR_13)))
   continue;

  FUNC_3(VAR_9->clkr.regmap, VAR_9->cmd_rcgr + VAR_0,
    &VAR_15);
  VAR_10.pre_div = VAR_15;
  VAR_10.pre_div >>= VAR_1;
  VAR_10.pre_div &= VAR_14;
  VAR_10.m = VAR_11->num;
  VAR_10.n = VAR_11->den;

  return FUNC_2(VAR_9, &VAR_10);
 }
 return -VAR_4;
}
