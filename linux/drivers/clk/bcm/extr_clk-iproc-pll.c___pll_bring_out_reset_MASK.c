
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct iproc_pll_reset_ctrl {scalar_t__ offset; int p_reset_shift; int reset_shift; } ;
struct iproc_pll_dig_filter_ctrl {unsigned int ki_shift; unsigned int kp_shift; unsigned int ka_shift; scalar_t__ offset; int ka_width; int kp_width; int ki_width; } ;
struct iproc_pll_ctrl {int flags; struct iproc_pll_dig_filter_ctrl dig_filter; struct iproc_pll_reset_ctrl reset; } ;
struct iproc_pll {scalar_t__ control_base; struct iproc_pll_ctrl* ctrl; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct iproc_pll*,scalar_t__,scalar_t__,unsigned int) ;
 unsigned int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct iproc_pll *VAR_1, unsigned int VAR_2,
      unsigned int VAR_3, unsigned int VAR_4)
{
 u32 VAR_5;
 const struct iproc_pll_ctrl *VAR_6 = VAR_1->ctrl;
 const struct iproc_pll_reset_ctrl *VAR_7 = &VAR_6->reset;
 const struct iproc_pll_dig_filter_ctrl *VAR_8 = &VAR_6->dig_filter;

 VAR_5 = FUNC_3(VAR_1->control_base + VAR_8->offset);
 VAR_5 &= ~(FUNC_1(VAR_8->ki_width) << VAR_8->ki_shift |
  FUNC_1(VAR_8->kp_width) << VAR_8->kp_shift |
  FUNC_1(VAR_8->ka_width) << VAR_8->ka_shift);
 VAR_5 |= VAR_4 << VAR_8->ki_shift | VAR_2 << VAR_8->kp_shift |
        VAR_3 << VAR_8->ka_shift;
 FUNC_2(VAR_1, VAR_1->control_base, VAR_8->offset, VAR_5);

 VAR_5 = FUNC_3(VAR_1->control_base + VAR_7->offset);
 if (VAR_6->flags & VAR_0)
  VAR_5 &= ~(FUNC_0(VAR_7->reset_shift) | FUNC_0(VAR_7->p_reset_shift));
 else
  VAR_5 |= FUNC_0(VAR_7->reset_shift) | FUNC_0(VAR_7->p_reset_shift);
 FUNC_2(VAR_1, VAR_1->control_base, VAR_7->offset, VAR_5);
}
