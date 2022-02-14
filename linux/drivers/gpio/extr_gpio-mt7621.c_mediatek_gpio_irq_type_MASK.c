
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_gc {int rising; int falling; int hlevel; int llevel; } ;
struct irq_data {int hwirq; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int) ;





 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct gpio_chip* FUNC_1 (struct irq_data*) ;
 struct mtk_gc* FUNC_2 (struct gpio_chip*) ;

__attribute__((used)) static int
FUNC_3(struct irq_data *VAR_2, unsigned int VAR_3)
{
 struct gpio_chip *VAR_4 = FUNC_1(VAR_2);
 struct mtk_gc *VAR_5 = FUNC_2(VAR_4);
 int VAR_6 = VAR_2->hwirq;
 u32 VAR_7 = FUNC_0(VAR_6);

 if (VAR_3 == VAR_0) {
  if ((VAR_5->rising | VAR_5->falling |
       VAR_5->hlevel | VAR_5->llevel) & VAR_7)
   return 0;

  VAR_3 = 130 | 131;
 }

 VAR_5->rising &= ~VAR_7;
 VAR_5->falling &= ~VAR_7;
 VAR_5->hlevel &= ~VAR_7;
 VAR_5->llevel &= ~VAR_7;

 switch (VAR_3 & VAR_1) {
 case 132:
  VAR_5->rising |= VAR_7;
  VAR_5->falling |= VAR_7;
  break;
 case 130:
  VAR_5->rising |= VAR_7;
  break;
 case 131:
  VAR_5->falling |= VAR_7;
  break;
 case 129:
  VAR_5->hlevel |= VAR_7;
  break;
 case 128:
  VAR_5->llevel |= VAR_7;
  break;
 }

 return 0;
}
