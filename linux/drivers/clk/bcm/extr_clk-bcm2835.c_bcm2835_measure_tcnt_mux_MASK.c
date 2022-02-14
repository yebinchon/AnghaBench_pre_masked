
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm2835_cprman {int regs_lock; int dev; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct bcm2835_cprman*,int ) ;
 int FUNC_1 (struct bcm2835_cprman*,int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static unsigned long FUNC_10(struct bcm2835_cprman *VAR_9,
           u32 VAR_10)
{
 u32 VAR_11 = 19200;
 u32 VAR_12;
 ktime_t VAR_13;

 FUNC_8(&VAR_9->regs_lock);

 FUNC_1(VAR_9, VAR_6, VAR_1);

 FUNC_1(VAR_9, VAR_6,
       (VAR_10 & VAR_4) |
       (VAR_10 >> VAR_3) << VAR_7);

 FUNC_1(VAR_9, VAR_2, VAR_11);


 FUNC_7(1);


 VAR_13 = FUNC_4(FUNC_6(), VAR_8);
 while (FUNC_0(VAR_9, VAR_2)) {
  if (FUNC_5(FUNC_6(), VAR_13)) {
   FUNC_3(VAR_9->dev, "timeout waiting for OSCCOUNT\n");
   VAR_12 = 0;
   goto out;
  }
  FUNC_2();
 }


 VAR_13 = FUNC_4(FUNC_6(), VAR_8);
 while (FUNC_0(VAR_9, VAR_6) & VAR_0) {
  if (FUNC_5(FUNC_6(), VAR_13)) {
   FUNC_3(VAR_9->dev, "timeout waiting for !BUSY\n");
   VAR_12 = 0;
   goto out;
  }
  FUNC_2();
 }

 VAR_12 = FUNC_0(VAR_9, VAR_5);

 FUNC_1(VAR_9, VAR_6, 0);

out:
 FUNC_9(&VAR_9->regs_lock);

 return VAR_12 * 1000;
}
