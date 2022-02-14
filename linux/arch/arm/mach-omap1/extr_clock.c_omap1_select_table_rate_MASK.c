
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mpu_rate {long rate; int flags; unsigned long xtal; int pll_rate; int ckctl_val; int dpllctl_val; } ;
struct clk {int dummy; } ;
struct TYPE_4__ {int rate; } ;
struct TYPE_3__ {unsigned long rate; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 struct mpu_rate* VAR_4 ;
 int FUNC_0 (int ,int ) ;

int FUNC_1(struct clk *VAR_5, unsigned long VAR_6)
{

 struct mpu_rate * VAR_7;
 unsigned long VAR_8;

 VAR_8 = VAR_2->rate;

 for (VAR_7 = VAR_4; VAR_7->rate; VAR_7++) {
  if (!(VAR_7->flags & VAR_3))
   continue;

  if (VAR_7->xtal != VAR_8)
   continue;


  if (VAR_7->rate <= VAR_6)
   break;
 }

 if (!VAR_7->rate)
  return -VAR_0;





 FUNC_0(VAR_7->dpllctl_val, VAR_7->ckctl_val);


 VAR_1->rate = VAR_7->pll_rate;

 return 0;
}
