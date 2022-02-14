
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mpc52xx_gpt_priv {scalar_t__ ipb_freq; int lock; TYPE_1__* regs; } ;
struct TYPE_2__ {int count; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

u64 FUNC_4(struct mpc52xx_gpt_priv *VAR_0)
{
 u64 VAR_1;
 u64 VAR_2;
 unsigned long VAR_3;

 FUNC_2(&VAR_0->lock, VAR_3);
 VAR_1 = FUNC_1(&VAR_0->regs->count);
 FUNC_3(&VAR_0->lock, VAR_3);

 VAR_2 = VAR_1 >> 16;
 VAR_1 &= 0xffff;
 if (VAR_2 == 0)
  VAR_2 = 0x10000;
 VAR_1 = VAR_1 * VAR_2 * 1000000000ULL;
 FUNC_0(VAR_1, (u64)VAR_0->ipb_freq);
 return VAR_1;
}
