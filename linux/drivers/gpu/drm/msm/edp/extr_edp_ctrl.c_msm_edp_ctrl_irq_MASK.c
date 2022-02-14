
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct edp_ctrl {int aux; int idle_comp; int irq_lock; scalar_t__ base; } ;
typedef int irqreturn_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

irqreturn_t FUNC_7(struct edp_ctrl *VAR_10)
{
 u32 VAR_11, VAR_12, VAR_13, VAR_14;
 u32 VAR_15;

 FUNC_0("");
 FUNC_5(&VAR_10->irq_lock);
 VAR_11 = FUNC_2(VAR_10->base + VAR_8);
 VAR_12 = FUNC_2(VAR_10->base + VAR_9);

 VAR_13 = VAR_11 & VAR_3;
 VAR_14 = VAR_12 & VAR_4;

 VAR_11 &= ~VAR_13;
 VAR_12 &= ~VAR_14;

 FUNC_0("isr=%x mask=%x isr2=%x mask2=%x",
   VAR_11, VAR_13, VAR_12, VAR_14);

 VAR_15 = VAR_11 & VAR_5;
 VAR_15 <<= 1;
 VAR_15 |= VAR_13;
 FUNC_3(VAR_10->base + VAR_8, VAR_15);

 VAR_15 = VAR_12 & VAR_6;
 VAR_15 <<= 1;
 VAR_15 |= VAR_14;
 FUNC_3(VAR_10->base + VAR_9, VAR_15);
 FUNC_6(&VAR_10->irq_lock);

 if (VAR_11 & VAR_0)
  FUNC_0("edp_hpd");

 if (VAR_12 & VAR_2)
  FUNC_0("edp_video_ready");

 if (VAR_12 & VAR_1) {
  FUNC_0("idle_patterns_sent");
  FUNC_1(&VAR_10->idle_comp);
 }

 FUNC_4(VAR_10->aux, VAR_11);

 return VAR_7;
}
