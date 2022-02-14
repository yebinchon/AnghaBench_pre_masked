
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int VAR_6 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(struct irq_data *VAR_7, unsigned int VAR_8)
{
 int VAR_9 = VAR_7->irq - VAR_6;
 int VAR_10;

 switch (VAR_8) {
 case 130:
  VAR_10 = VAR_2;
  break;
 case 131:
  VAR_10 = VAR_1;
  break;
 case 132:
  VAR_10 = VAR_0;
  break;
 case 129:
  VAR_10 = VAR_3;
  break;
 case 128:
  VAR_10 = VAR_4;
  break;
 default:
  VAR_10 = VAR_5;
  break;
 }

 FUNC_0(VAR_10, VAR_9);

 return 0;
}
