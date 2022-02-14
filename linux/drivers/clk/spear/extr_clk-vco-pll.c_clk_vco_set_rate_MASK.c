
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pll_rate_tbl {unsigned long mode; unsigned long n; unsigned long m; } ;
struct clk_vco {scalar_t__ lock; int cfg_reg; int mode_reg; int rtbl_cnt; struct pll_rate_tbl* rtbl; } ;
struct clk_hw {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_0 (struct clk_hw*,unsigned long,unsigned long,int ,int ,int*) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,unsigned long) ;
 int FUNC_3 (scalar_t__,unsigned long) ;
 struct clk_vco* FUNC_4 (struct clk_hw*) ;
 int VAR_8 ;
 int FUNC_5 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_9, unsigned long VAR_10,
    unsigned long VAR_11)
{
 struct clk_vco *VAR_12 = FUNC_4(VAR_9);
 struct pll_rate_tbl *VAR_13 = VAR_12->rtbl;
 unsigned long VAR_14 = 0, VAR_15;
 int VAR_16;

 FUNC_0(VAR_9, VAR_10, VAR_11, VAR_8, VAR_12->rtbl_cnt,
   &VAR_16);

 if (VAR_12->lock)
  FUNC_2(VAR_12->lock, VAR_14);

 VAR_15 = FUNC_1(VAR_12->mode_reg);
 VAR_15 &= ~(VAR_4 << VAR_5);
 VAR_15 |= (VAR_13[VAR_16].mode & VAR_4) << VAR_5;
 FUNC_5(VAR_15, VAR_12->mode_reg);

 VAR_15 = FUNC_1(VAR_12->cfg_reg);
 VAR_15 &= ~(VAR_2 << VAR_3);
 VAR_15 |= (VAR_13[VAR_16].n & VAR_2) << VAR_3;

 VAR_15 &= ~(VAR_0 << VAR_1);
 if (VAR_13[VAR_16].mode)
  VAR_15 |= (VAR_13[VAR_16].m & VAR_0) <<
   VAR_1;
 else
  VAR_15 |= (VAR_13[VAR_16].m & VAR_6) <<
   VAR_7;

 FUNC_5(VAR_15, VAR_12->cfg_reg);

 if (VAR_12->lock)
  FUNC_3(VAR_12->lock, VAR_14);

 return 0;
}
