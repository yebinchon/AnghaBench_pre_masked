
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct gpio_rcar_priv {int has_both_edge_trigger; int dev; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;





 unsigned int VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_1 (struct gpio_rcar_priv*,unsigned int,int,int,int) ;
 struct gpio_rcar_priv* FUNC_2 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_3 (struct irq_data*) ;
 unsigned int FUNC_4 (struct irq_data*) ;

__attribute__((used)) static int FUNC_5(struct irq_data *VAR_2, unsigned int VAR_3)
{
 struct gpio_chip *VAR_4 = FUNC_3(VAR_2);
 struct gpio_rcar_priv *VAR_5 = FUNC_2(VAR_4);
 unsigned int VAR_6 = FUNC_4(VAR_2);

 FUNC_0(VAR_5->dev, "sense irq = %d, type = %d\n", VAR_6, VAR_3);

 switch (VAR_3 & VAR_1) {
 case 129:
  FUNC_1(VAR_5, VAR_6, 1, 1,
            0);
  break;
 case 128:
  FUNC_1(VAR_5, VAR_6, 0, 1,
            0);
  break;
 case 130:
  FUNC_1(VAR_5, VAR_6, 1, 0,
            0);
  break;
 case 131:
  FUNC_1(VAR_5, VAR_6, 0, 0,
            0);
  break;
 case 132:
  if (!VAR_5->has_both_edge_trigger)
   return -VAR_0;
  FUNC_1(VAR_5, VAR_6, 1, 0,
            1);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
