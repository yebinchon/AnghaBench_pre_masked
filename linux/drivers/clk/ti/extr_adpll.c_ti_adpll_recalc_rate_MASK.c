
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ti_adpll_dco_data {int dummy; } ;
struct ti_adpll_data {scalar_t__ regs; TYPE_1__* c; int lock; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {scalar_t__ is_type_s; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (struct ti_adpll_data*) ;
 struct ti_adpll_data* FUNC_7 (struct ti_adpll_dco_data*) ;
 struct ti_adpll_dco_data* FUNC_8 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_9(struct clk_hw *VAR_6,
       unsigned long VAR_7)
{
 struct ti_adpll_dco_data *VAR_8 = FUNC_8(VAR_6);
 struct ti_adpll_data *VAR_9 = FUNC_7(VAR_8);
 u32 VAR_10, VAR_11, VAR_12;
 u64 VAR_13;
 unsigned long VAR_14;

 if (FUNC_6(VAR_9))
  return 0;

 FUNC_4(&VAR_9->lock, VAR_14);
 VAR_10 = FUNC_2(VAR_9->regs + VAR_3);
 VAR_10 &= VAR_2;
 VAR_13 = (u64)FUNC_3(VAR_9->regs + VAR_5) << 18;
 VAR_13 += VAR_10;
 VAR_13 *= VAR_7;
 VAR_11 = (FUNC_3(VAR_9->regs + VAR_4) + 1) << 18;
 FUNC_5(&VAR_9->lock, VAR_14);

 FUNC_1(VAR_13, VAR_11);

 if (VAR_9->c->is_type_s) {
  VAR_12 = FUNC_2(VAR_9->regs + VAR_0);
  if (VAR_12 & FUNC_0(VAR_1))
   VAR_13 *= 4;
  VAR_13 *= 2;
 }

 return VAR_13;
}
