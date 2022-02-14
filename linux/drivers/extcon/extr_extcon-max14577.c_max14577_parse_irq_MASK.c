
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max14577_muic_info {int irq_adc; int irq_chg; } ;
__attribute__((used)) static int FUNC_0(struct max14577_muic_info *VAR_0, int VAR_1)
{
 switch (VAR_1) {
 case 135:
 case 133:
 case 134:




  VAR_0->irq_adc = 1;
  return 1;
 case 131:
 case 132:
 case 129:
 case 130:
 case 128:

  VAR_0->irq_chg = 1;
  return 1;
 default:
  return 0;
 }
}
