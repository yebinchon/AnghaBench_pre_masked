
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_kp {int kpior; int imr0_val; int imr1_val; int kpemr; int kpcr; scalar_t__ base; void** last_state; scalar_t__ clk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (scalar_t__) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct bcm_kp *VAR_13)
{
 int VAR_14;

 if (VAR_13->clk) {
  VAR_14 = FUNC_0(VAR_13->clk);
  if (VAR_14)
   return VAR_14;
 }

 FUNC_2(VAR_13->kpior, VAR_13->base + VAR_10);

 FUNC_2(VAR_13->imr0_val, VAR_13->base + VAR_8);
 FUNC_2(VAR_13->imr1_val, VAR_13->base + VAR_9);

 FUNC_2(VAR_13->kpemr, VAR_13->base + VAR_2);
 FUNC_2(VAR_13->kpemr, VAR_13->base + VAR_3);
 FUNC_2(VAR_13->kpemr, VAR_13->base + VAR_4);
 FUNC_2(VAR_13->kpemr, VAR_13->base + VAR_5);

 FUNC_2(0xFFFFFFFF, VAR_13->base + VAR_6);
 FUNC_2(0xFFFFFFFF, VAR_13->base + VAR_7);

 VAR_13->last_state[0] = FUNC_1(VAR_13->base + VAR_11);
 VAR_13->last_state[0] = FUNC_1(VAR_13->base + VAR_12);

 FUNC_2(VAR_13->kpcr | VAR_0, VAR_13->base + VAR_1);

 return 0;
}
