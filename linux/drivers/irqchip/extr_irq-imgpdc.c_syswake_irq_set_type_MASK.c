
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdc_intc_priv {int lock; } ;
struct irq_data {int hwirq; } ;


 int VAR_0 ;





 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct irq_data*,unsigned int) ;
 struct pdc_intc_priv* FUNC_2 (struct irq_data*) ;
 unsigned int FUNC_3 (struct pdc_intc_priv*,unsigned int) ;
 int FUNC_4 (struct pdc_intc_priv*,unsigned int,unsigned int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct irq_data *VAR_10, unsigned int VAR_11)
{
 struct pdc_intc_priv *VAR_12 = FUNC_2(VAR_10);
 unsigned int VAR_13 = FUNC_0(VAR_10->hwirq);
 unsigned int VAR_14;
 unsigned int VAR_15, VAR_16;


 switch (VAR_11) {
 case 132:
  VAR_14 = VAR_2;
  break;
 case 130:
  VAR_14 = VAR_8;
  break;
 case 131:
  VAR_14 = VAR_3;
  break;
 case 129:
  VAR_14 = VAR_4;
  break;
 case 128:
  VAR_14 = VAR_5;
  break;
 default:
  return -VAR_0;
 }

 FUNC_5(&VAR_12->lock);


 VAR_15 = VAR_1 + VAR_13*VAR_9;
 VAR_16 = FUNC_3(VAR_12, VAR_15);
 VAR_16 &= ~VAR_6;
 VAR_16 |= VAR_14 << VAR_7;
 FUNC_4(VAR_12, VAR_15, VAR_16);


 FUNC_1(VAR_10, VAR_11);

 FUNC_6(&VAR_12->lock);

 return 0;
}
