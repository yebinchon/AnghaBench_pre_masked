
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct irq_data *VAR_3, unsigned int VAR_4)
{
 switch (VAR_4) {
 case 128:
  break;
 case 131:
 case 132:
 case 133:
  FUNC_0(VAR_3->irq, VAR_1);
  break;
 case 129:
 case 130:
  FUNC_0(VAR_3->irq, VAR_2);
  break;
 default:
  FUNC_1("No such irq type %d\n", VAR_4);
  return -VAR_0;
 }

 return 0;
}
