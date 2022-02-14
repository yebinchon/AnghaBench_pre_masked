
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq_happened; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(int VAR_4)
{
 switch (VAR_4) {
 case 131:
  VAR_3->irq_happened |= VAR_1;
  break;
 case 129:
  VAR_3->irq_happened |= VAR_0;
  break;
 case 130:
  VAR_3->irq_happened |= VAR_2;
  break;
 case 128:
  FUNC_0();
  break;
 }
}
