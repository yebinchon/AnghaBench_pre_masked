
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int shift; scalar_t__ offset; } ;
struct iproc_pll_ctrl {TYPE_1__ status; } ;
struct iproc_pll {scalar_t__ status_base; struct iproc_pll_ctrl* ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct iproc_pll *VAR_2)
{
 int VAR_3;
 const struct iproc_pll_ctrl *VAR_4 = VAR_2->ctrl;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  u32 VAR_5 = FUNC_0(VAR_2->status_base + VAR_4->status.offset);

  if (VAR_5 & (1 << VAR_4->status.shift))
   return 0;
  FUNC_1(10);
 }

 return -VAR_0;
}
