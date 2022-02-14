
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct irq_data *VAR_4, unsigned VAR_5)
{
 int VAR_6 = VAR_4->irq - VAR_1;
 int VAR_7 = FUNC_0(VAR_4->irq);

 if (VAR_7 != VAR_2 || VAR_4->irq > (VAR_3 + 13))
  return (VAR_5 == 129) ? 0 : -VAR_0;

 switch (VAR_5) {
 case 129:
  FUNC_1(1, VAR_6);
  break;
 case 128:
  FUNC_1(0, VAR_6);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
