
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct npcm7xx_pwm_fan_data {int* fan_irq; int * fan_lock; int fan_base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct npcm7xx_pwm_fan_data*,int,int ,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 struct npcm7xx_pwm_fan_data *VAR_6 = VAR_5;
 unsigned long VAR_7;
 int VAR_8;
 u8 VAR_9;

 VAR_8 = VAR_4 - VAR_6->fan_irq[0];
 FUNC_3(&VAR_6->fan_lock[VAR_8], VAR_7);

 VAR_9 = FUNC_1(FUNC_0(VAR_6->fan_base, VAR_8));
 if (VAR_9 > 0) {
  FUNC_2(VAR_6, VAR_8, VAR_2, VAR_9);
  FUNC_2(VAR_6, VAR_8, VAR_3, VAR_9);
  FUNC_4(&VAR_6->fan_lock[VAR_8], VAR_7);
  return VAR_0;
 }

 FUNC_4(&VAR_6->fan_lock[VAR_8], VAR_7);

 return VAR_1;
}
