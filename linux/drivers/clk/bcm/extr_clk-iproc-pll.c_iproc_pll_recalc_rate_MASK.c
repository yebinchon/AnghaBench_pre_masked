
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_8__ {int shift; int width; scalar_t__ offset; } ;
struct TYPE_7__ {int shift; int width; scalar_t__ offset; } ;
struct TYPE_6__ {int shift; int width; scalar_t__ offset; } ;
struct TYPE_5__ {int shift; scalar_t__ offset; } ;
struct iproc_pll_ctrl {int flags; TYPE_4__ pdiv; TYPE_3__ ndiv_frac; TYPE_2__ ndiv_int; TYPE_1__ status; } ;
struct iproc_pll {scalar_t__ control_base; scalar_t__ status_base; struct iproc_pll_ctrl* ctrl; } ;
struct iproc_clk {struct iproc_pll* pll; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 struct iproc_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_1,
        unsigned long VAR_2)
{
 struct iproc_clk *VAR_3 = FUNC_2(VAR_1);
 struct iproc_pll *VAR_4 = VAR_3->pll;
 const struct iproc_pll_ctrl *VAR_5 = VAR_4->ctrl;
 u32 VAR_6;
 u64 VAR_7, VAR_8, VAR_9;
 unsigned int VAR_10;
 unsigned long VAR_11;

 if (VAR_2 == 0)
  return 0;


 VAR_6 = FUNC_1(VAR_4->status_base + VAR_5->status.offset);
 if ((VAR_6 & (1 << VAR_5->status.shift)) == 0)
  return 0;






 VAR_6 = FUNC_1(VAR_4->control_base + VAR_5->ndiv_int.offset);
 VAR_8 = (VAR_6 >> VAR_5->ndiv_int.shift) &
  FUNC_0(VAR_5->ndiv_int.width);
 VAR_7 = VAR_8 << 20;

 if (VAR_5->flags & VAR_0) {
  VAR_6 = FUNC_1(VAR_4->control_base + VAR_5->ndiv_frac.offset);
  VAR_9 = (VAR_6 >> VAR_5->ndiv_frac.shift) &
   FUNC_0(VAR_5->ndiv_frac.width);
  VAR_7 += VAR_9;
 }

 VAR_6 = FUNC_1(VAR_4->control_base + VAR_5->pdiv.offset);
 VAR_10 = (VAR_6 >> VAR_5->pdiv.shift) & FUNC_0(VAR_5->pdiv.width);

 VAR_11 = (VAR_7 * VAR_2) >> 20;

 if (VAR_10 == 0)
  VAR_11 *= 2;
 else
  VAR_11 /= VAR_10;

 return VAR_11;
}
