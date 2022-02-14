
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iproc_pll_reset_ctrl {scalar_t__ offset; int p_reset_shift; int reset_shift; } ;
struct iproc_pll_ctrl {int flags; struct iproc_pll_reset_ctrl reset; } ;
struct iproc_pll {scalar_t__ control_base; struct iproc_pll_ctrl* ctrl; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct iproc_pll*,scalar_t__,scalar_t__,int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct iproc_pll *VAR_1)
{
 u32 VAR_2;
 const struct iproc_pll_ctrl *VAR_3 = VAR_1->ctrl;
 const struct iproc_pll_reset_ctrl *VAR_4 = &VAR_3->reset;

 VAR_2 = FUNC_2(VAR_1->control_base + VAR_4->offset);
 if (VAR_3->flags & VAR_0)
  VAR_2 |= FUNC_0(VAR_4->reset_shift) | FUNC_0(VAR_4->p_reset_shift);
 else
  VAR_2 &= ~(FUNC_0(VAR_4->reset_shift) | FUNC_0(VAR_4->p_reset_shift));
 FUNC_1(VAR_1, VAR_1->control_base, VAR_4->offset, VAR_2);
}
