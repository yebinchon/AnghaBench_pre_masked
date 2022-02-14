
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct etnaviv_gpu {int idle_mask; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct etnaviv_gpu*,int ) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 int FUNC_4 (int) ;

int FUNC_5(struct etnaviv_gpu *VAR_3, unsigned int VAR_4)
{
 unsigned long VAR_5 = VAR_2 + FUNC_2(VAR_4);

 do {
  u32 VAR_6 = FUNC_1(VAR_3, VAR_1);

  if ((VAR_6 & VAR_3->idle_mask) == VAR_3->idle_mask)
   return 0;

  if (FUNC_3(VAR_5)) {
   FUNC_0(VAR_3->dev,
     "timed out waiting for idle: idle=0x%x\n",
     VAR_6);
   return -VAR_0;
  }

  FUNC_4(5);
 } while (1);
}
