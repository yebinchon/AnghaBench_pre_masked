
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ offset; int shift; } ;
struct iproc_pll_ctrl {int flags; TYPE_1__ sw_ctrl; } ;
struct iproc_pll {scalar_t__ control_base; struct iproc_pll_ctrl* ctrl; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct iproc_pll*,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct iproc_pll *VAR_1)
{
 const struct iproc_pll_ctrl *VAR_2 = VAR_1->ctrl;

 if (VAR_2->flags & VAR_0) {
  u32 VAR_3;

  VAR_3 = FUNC_2(VAR_1->control_base + VAR_2->sw_ctrl.offset);
  VAR_3 |= FUNC_0(VAR_2->sw_ctrl.shift);
  FUNC_1(VAR_1, VAR_1->control_base, VAR_2->sw_ctrl.offset,
    VAR_3);
 }
}
