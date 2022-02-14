
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpc32xx_irq_chip {int dummy; } ;
struct irq_data {int hwirq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct lpc32xx_irq_chip* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct irq_data*,int ) ;
 int FUNC_3 (struct irq_data*,unsigned int) ;
 int FUNC_4 (struct lpc32xx_irq_chip*,int ) ;
 int FUNC_5 (struct lpc32xx_irq_chip*,int ,int ) ;
 int FUNC_6 (char*,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct irq_data *VAR_5, unsigned int VAR_6)
{
 struct lpc32xx_irq_chip *VAR_7 = FUNC_1(VAR_5);
 u32 VAR_8, VAR_9 = FUNC_0(VAR_5->hwirq);
 bool VAR_10, VAR_11;

 switch (VAR_6) {
 case 130:
  VAR_11 = 1;
  VAR_10 = 1;
  break;
 case 131:
  VAR_11 = 1;
  VAR_10 = 0;
  break;
 case 129:
  VAR_11 = 0;
  VAR_10 = 1;
  break;
 case 128:
  VAR_11 = 0;
  VAR_10 = 0;
  break;
 default:
  FUNC_6("unsupported irq type %d\n", VAR_6);
  return -VAR_0;
 }

 FUNC_3(VAR_5, VAR_6);

 VAR_8 = FUNC_4(VAR_7, VAR_1);
 if (VAR_10)
  VAR_8 |= VAR_9;
 else
  VAR_8 &= ~VAR_9;
 FUNC_5(VAR_7, VAR_1, VAR_8);

 VAR_8 = FUNC_4(VAR_7, VAR_2);
 if (VAR_11) {
  VAR_8 |= VAR_9;
  FUNC_2(VAR_5, VAR_3);
 } else {
  VAR_8 &= ~VAR_9;
  FUNC_2(VAR_5, VAR_4);
 }
 FUNC_5(VAR_7, VAR_2, VAR_8);

 return 0;
}
