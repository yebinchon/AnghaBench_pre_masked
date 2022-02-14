
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct irq_data {int irq; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int,int) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_2)
{
 u64 VAR_3;
 int VAR_4, VAR_5;


 VAR_5 = VAR_2->irq % VAR_0;
 VAR_4 = VAR_2->irq / VAR_0;

 switch (VAR_5) {
 case 130:
  VAR_3 = FUNC_1(VAR_4, 1);
  break;
 case 129:
  VAR_3 = FUNC_1(VAR_4, 2);
  break;
 case 128:
  VAR_3 = FUNC_1(VAR_4, 3);
  break;
 default:
  FUNC_2("No matching USB irq %d node  %d!\n", VAR_5, VAR_4);
  return;
 }
 FUNC_0(VAR_3, VAR_1, 0xffffffff);
}
