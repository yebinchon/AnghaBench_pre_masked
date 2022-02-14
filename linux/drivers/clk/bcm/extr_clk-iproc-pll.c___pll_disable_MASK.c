
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int pwr_shift; int iso_shift; scalar_t__ offset; int pwr_width; } ;
struct TYPE_3__ {int en_shift; scalar_t__ offset; } ;
struct iproc_pll_ctrl {int flags; TYPE_2__ aon; TYPE_1__ asiu; } ;
struct iproc_pll {scalar_t__ pwr_base; scalar_t__ control_base; scalar_t__ asiu_base; struct iproc_pll_ctrl* ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct iproc_pll*,scalar_t__,scalar_t__,int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct iproc_pll *VAR_2)
{
 const struct iproc_pll_ctrl *VAR_3 = VAR_2->ctrl;
 u32 VAR_4;

 if (VAR_3->flags & VAR_1) {
  VAR_4 = FUNC_2(VAR_2->asiu_base + VAR_3->asiu.offset);
  VAR_4 &= ~(1 << VAR_3->asiu.en_shift);
  FUNC_1(VAR_2, VAR_2->asiu_base, VAR_3->asiu.offset, VAR_4);
 }

 if (VAR_3->flags & VAR_0) {
  VAR_4 = FUNC_2(VAR_2->control_base + VAR_3->aon.offset);
  VAR_4 |= FUNC_0(VAR_3->aon.pwr_width) << VAR_3->aon.pwr_shift;
  FUNC_1(VAR_2, VAR_2->control_base, VAR_3->aon.offset, VAR_4);
 }

 if (VAR_2->pwr_base) {

  VAR_4 = FUNC_2(VAR_2->pwr_base + VAR_3->aon.offset);
  VAR_4 |= 1 << VAR_3->aon.iso_shift;
  FUNC_1(VAR_2, VAR_2->pwr_base, VAR_3->aon.offset, VAR_4);


  VAR_4 &= ~(FUNC_0(VAR_3->aon.pwr_width) << VAR_3->aon.pwr_shift);
  FUNC_1(VAR_2, VAR_2->pwr_base, VAR_3->aon.offset, VAR_4);
 }
}
