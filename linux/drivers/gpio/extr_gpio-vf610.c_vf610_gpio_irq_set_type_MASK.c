
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct vf610_gpio_port {int * irqc; } ;
struct irq_data {size_t hwirq; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct vf610_gpio_port* FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct irq_data*,int ) ;

__attribute__((used)) static int FUNC_3(struct irq_data *VAR_9, u32 VAR_10)
{
 struct vf610_gpio_port *VAR_11 =
  FUNC_0(FUNC_1(VAR_9));
 u8 VAR_12;

 switch (VAR_10) {
 case 130:
  VAR_12 = VAR_6;
  break;
 case 131:
  VAR_12 = VAR_3;
  break;
 case 132:
  VAR_12 = VAR_2;
  break;
 case 128:
  VAR_12 = VAR_5;
  break;
 case 129:
  VAR_12 = VAR_4;
  break;
 default:
  return -VAR_0;
 }

 VAR_11->irqc[VAR_9->hwirq] = VAR_12;

 if (VAR_10 & VAR_1)
  FUNC_2(VAR_9, VAR_8);
 else
  FUNC_2(VAR_9, VAR_7);

 return 0;
}
