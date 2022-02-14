
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpc52xx_gpt_priv {int wdt_mode; int lock; TYPE_1__* regs; } ;
struct TYPE_2__ {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct mpc52xx_gpt_priv *VAR_3)
{
 unsigned long VAR_4;


 FUNC_1(&VAR_3->lock, VAR_4);
 if ((VAR_3->wdt_mode & VAR_1) != 0) {
  FUNC_2(&VAR_3->lock, VAR_4);
  return -VAR_0;
 }

 FUNC_0(&VAR_3->regs->mode, VAR_2);
 FUNC_2(&VAR_3->lock, VAR_4);
 return 0;
}
