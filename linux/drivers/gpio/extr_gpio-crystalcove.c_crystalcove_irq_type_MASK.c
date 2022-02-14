
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {scalar_t__ hwirq; } ;
struct crystalcove_gpio {int update; int intcnt_value; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int VAR_6 ;
 struct crystalcove_gpio* FUNC_0 (int ) ;
 int FUNC_1 (struct irq_data*) ;

__attribute__((used)) static int FUNC_2(struct irq_data *VAR_7, unsigned VAR_8)
{
 struct crystalcove_gpio *VAR_9 =
  FUNC_0(FUNC_1(VAR_7));

 if (VAR_7->hwirq >= VAR_0)
  return 0;

 switch (VAR_8) {
 case 128:
  VAR_9->intcnt_value = VAR_2;
  break;
 case 131:
  VAR_9->intcnt_value = VAR_1;
  break;
 case 129:
  VAR_9->intcnt_value = VAR_4;
  break;
 case 130:
  VAR_9->intcnt_value = VAR_3;
  break;
 default:
  return -VAR_5;
 }

 VAR_9->update |= VAR_6;

 return 0;
}
