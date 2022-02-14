
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int regmap; } ;
struct clk_rcg2 {scalar_t__ cmd_rcgr; TYPE_2__ clkr; int mnd_width; int hid_width; TYPE_1__* freq_tbl; } ;
struct clk_hw {int dummy; } ;
struct TYPE_3__ {unsigned long freq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 unsigned long FUNC_5 (unsigned long,int,int,int,int) ;
 int FUNC_6 (int ,scalar_t__,int*) ;
 struct clk_rcg2* FUNC_7 (struct clk_hw*) ;

__attribute__((used)) static unsigned long
FUNC_8(struct clk_hw *VAR_3, unsigned long VAR_4)
{
 struct clk_rcg2 *VAR_5 = FUNC_7(VAR_3);
 u32 VAR_6, VAR_7, VAR_8, VAR_9 = 0, VAR_10 = 0, VAR_11, VAR_12;

 FUNC_6(VAR_5->clkr.regmap,
      VAR_5->cmd_rcgr + VAR_2, &VAR_6);
 VAR_6 &= FUNC_1(4, 1);
 VAR_6 >>= 1;

 if (VAR_5->freq_tbl)
  return VAR_5->freq_tbl[VAR_6].freq;
 FUNC_6(VAR_5->clkr.regmap, VAR_5->cmd_rcgr + FUNC_2(VAR_6),
      &VAR_8);

 VAR_7 = FUNC_0(VAR_5->hid_width) - 1;
 VAR_12 = 1;
 if (VAR_8 & VAR_7)
  VAR_12 = VAR_8 & VAR_7;

 VAR_11 = VAR_8 & VAR_0;
 VAR_11 >>= VAR_1;
 if (VAR_11) {
  VAR_7 = FUNC_0(VAR_5->mnd_width) - 1;
  FUNC_6(VAR_5->clkr.regmap,
       VAR_5->cmd_rcgr + FUNC_3(VAR_6), &VAR_9);
  VAR_9 &= VAR_7;

  FUNC_6(VAR_5->clkr.regmap,
       VAR_5->cmd_rcgr + FUNC_4(VAR_6), &VAR_10);
  VAR_10 = ~VAR_10;
  VAR_10 &= VAR_7;
  VAR_10 += VAR_9;
 }

 return FUNC_5(VAR_4, VAR_9, VAR_10, VAR_11, VAR_12);
}
