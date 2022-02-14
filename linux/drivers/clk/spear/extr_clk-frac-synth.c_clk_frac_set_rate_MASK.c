
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frac_rate_tbl {unsigned long div; } ;
struct clk_hw {int dummy; } ;
struct clk_frac {scalar_t__ lock; int reg; int rtbl_cnt; struct frac_rate_tbl* rtbl; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct clk_hw*,unsigned long,unsigned long,int ,int ,int*) ;
 int VAR_1 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,unsigned long) ;
 int FUNC_3 (scalar_t__,unsigned long) ;
 struct clk_frac* FUNC_4 (struct clk_hw*) ;
 int FUNC_5 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_2, unsigned long VAR_3,
    unsigned long VAR_4)
{
 struct clk_frac *VAR_5 = FUNC_4(VAR_2);
 struct frac_rate_tbl *VAR_6 = VAR_5->rtbl;
 unsigned long VAR_7 = 0, VAR_8;
 int VAR_9;

 FUNC_0(VAR_2, VAR_3, VAR_4, VAR_1, VAR_5->rtbl_cnt,
   &VAR_9);

 if (VAR_5->lock)
  FUNC_2(VAR_5->lock, VAR_7);

 VAR_8 = FUNC_1(VAR_5->reg) & ~VAR_0;
 VAR_8 |= VAR_6[VAR_9].div & VAR_0;
 FUNC_5(VAR_8, VAR_5->reg);

 if (VAR_5->lock)
  FUNC_3(VAR_5->lock, VAR_7);

 return 0;
}
