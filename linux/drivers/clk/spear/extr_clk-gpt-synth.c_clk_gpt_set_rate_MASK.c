
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpt_rate_tbl {unsigned long mscale; unsigned long nscale; } ;
struct clk_hw {int dummy; } ;
struct clk_gpt {scalar_t__ lock; int reg; int rtbl_cnt; struct gpt_rate_tbl* rtbl; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct clk_hw*,unsigned long,unsigned long,int ,int ,int*) ;
 int VAR_3 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,unsigned long) ;
 int FUNC_3 (scalar_t__,unsigned long) ;
 struct clk_gpt* FUNC_4 (struct clk_hw*) ;
 int FUNC_5 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_4, unsigned long VAR_5,
    unsigned long VAR_6)
{
 struct clk_gpt *VAR_7 = FUNC_4(VAR_4);
 struct gpt_rate_tbl *VAR_8 = VAR_7->rtbl;
 unsigned long VAR_9 = 0, VAR_10;
 int VAR_11;

 FUNC_0(VAR_4, VAR_5, VAR_6, VAR_3, VAR_7->rtbl_cnt,
   &VAR_11);

 if (VAR_7->lock)
  FUNC_2(VAR_7->lock, VAR_9);

 VAR_10 = FUNC_1(VAR_7->reg) & ~VAR_0;
 VAR_10 &= ~(VAR_1 << VAR_2);

 VAR_10 |= VAR_8[VAR_11].mscale & VAR_0;
 VAR_10 |= (VAR_8[VAR_11].nscale & VAR_1) << VAR_2;

 FUNC_5(VAR_10, VAR_7->reg);

 if (VAR_7->lock)
  FUNC_3(VAR_7->lock, VAR_9);

 return 0;
}
