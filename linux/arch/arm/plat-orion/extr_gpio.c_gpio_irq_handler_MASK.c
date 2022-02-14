
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ngpio; } ;
struct orion_gpio_chip {int secondary_irq_base; TYPE_1__ chip; } ;
struct irq_desc {int dummy; } ;


 int FUNC_0 (struct orion_gpio_chip*) ;
 int FUNC_1 (struct orion_gpio_chip*) ;
 int FUNC_2 (struct orion_gpio_chip*) ;
 int FUNC_3 (struct orion_gpio_chip*) ;
 int FUNC_4 (struct orion_gpio_chip*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int) ;
 struct orion_gpio_chip* FUNC_6 (struct irq_desc*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,int ) ;

__attribute__((used)) static void FUNC_10(struct irq_desc *VAR_2)
{
 struct orion_gpio_chip *VAR_3 = FUNC_6(VAR_2);
 u32 VAR_4, VAR_5;
 int VAR_6;

 if (VAR_3 == ((void*)0))
  return;

 VAR_4 = FUNC_8(FUNC_0(VAR_3)) & FUNC_8(FUNC_4(VAR_3));
 VAR_4 |= FUNC_8(FUNC_1(VAR_3)) & FUNC_8(FUNC_2(VAR_3));

 for (VAR_6 = 0; VAR_6 < VAR_3->chip.ngpio; VAR_6++) {
  int VAR_7;

  VAR_7 = VAR_3->secondary_irq_base + VAR_6;

  if (!(VAR_4 & (1 << VAR_6)))
   continue;

  VAR_5 = FUNC_7(VAR_7);
  if ((VAR_5 & VAR_1) == VAR_0) {

   u32 VAR_8;

   VAR_8 = FUNC_8(FUNC_3(VAR_3));
   VAR_8 ^= 1 << VAR_6;
   FUNC_9(VAR_8, FUNC_3(VAR_3));
  }
  FUNC_5(VAR_7);
 }
}
