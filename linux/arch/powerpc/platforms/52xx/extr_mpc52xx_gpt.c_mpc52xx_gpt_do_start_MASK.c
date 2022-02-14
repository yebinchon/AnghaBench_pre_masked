
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct mpc52xx_gpt_priv {int wdt_mode; int lock; TYPE_1__* regs; scalar_t__ ipb_freq; } ;
struct TYPE_2__ {int mode; int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct mpc52xx_gpt_priv *VAR_9, u64 VAR_10,
    int VAR_11, int VAR_12)
{
 u32 VAR_13, VAR_14;
 u64 VAR_15;
 u32 VAR_16;
 unsigned long VAR_17;

 VAR_13 = VAR_7 | VAR_3;
 VAR_14 = VAR_6 | VAR_4;
 if (VAR_12) {
  VAR_13 |= VAR_5;
  VAR_14 |= VAR_8;
 } else if (VAR_11)
  VAR_14 |= VAR_3;





 VAR_15 = VAR_10 * (u64)VAR_9->ipb_freq;
 FUNC_1(VAR_15, 1000000000);


 if (VAR_15 > 0xffffffff)
  return -VAR_1;
 VAR_16 = (VAR_15 >> 16) + 1;
 FUNC_1(VAR_15, VAR_16);
 if (VAR_15 > 0xffff) {
  FUNC_3("calculation error; prescale:%x clocks:%llx\n",
         VAR_16, VAR_15);
  return -VAR_1;
 }


 FUNC_4(&VAR_9->lock, VAR_17);
 if (VAR_12)
  VAR_9->wdt_mode |= VAR_2;
 else if ((VAR_9->wdt_mode & VAR_2) != 0) {
  FUNC_5(&VAR_9->lock, VAR_17);
  return -VAR_0;
 }
 FUNC_2(&VAR_9->regs->count, VAR_16 << 16 | VAR_15);
 FUNC_0(&VAR_9->regs->mode, VAR_13, VAR_14);
 FUNC_5(&VAR_9->lock, VAR_17);

 return 0;
}
