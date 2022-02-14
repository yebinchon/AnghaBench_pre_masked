
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct iproc_pll_vco_param {int ndiv_int; unsigned int pdiv; } ;
struct TYPE_6__ {int shift; int width; scalar_t__ offset; } ;
struct TYPE_5__ {int shift; int width; scalar_t__ offset; } ;
struct TYPE_4__ {int shift; scalar_t__ offset; } ;
struct iproc_pll_ctrl {TYPE_3__ pdiv; TYPE_2__ ndiv_int; TYPE_1__ status; } ;
struct iproc_pll {scalar_t__ control_base; scalar_t__ status_base; struct iproc_pll_ctrl* ctrl; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static bool FUNC_2(struct iproc_pll *VAR_0,
           struct iproc_pll_vco_param *VAR_1)
{
 const struct iproc_pll_ctrl *VAR_2 = VAR_0->ctrl;
 u32 VAR_3;
 u32 VAR_4;
 unsigned int VAR_5;


 VAR_3 = FUNC_1(VAR_0->status_base + VAR_2->status.offset);
 if ((VAR_3 & (1 << VAR_2->status.shift)) == 0)
  return 0;

 VAR_3 = FUNC_1(VAR_0->control_base + VAR_2->ndiv_int.offset);
 VAR_4 = (VAR_3 >> VAR_2->ndiv_int.shift) &
  FUNC_0(VAR_2->ndiv_int.width);

 if (VAR_4 != VAR_1->ndiv_int)
  return 0;

 VAR_3 = FUNC_1(VAR_0->control_base + VAR_2->pdiv.offset);
 VAR_5 = (VAR_3 >> VAR_2->pdiv.shift) & FUNC_0(VAR_2->pdiv.width);

 if (VAR_5 != VAR_1->pdiv)
  return 0;

 return 1;
}
