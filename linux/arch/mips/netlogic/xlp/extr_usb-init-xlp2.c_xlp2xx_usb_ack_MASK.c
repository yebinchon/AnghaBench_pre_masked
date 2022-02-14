
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct irq_data {int irq; } ;





 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_1)
{
 u64 VAR_2;

 switch (VAR_1->irq) {
 case 130:
  VAR_2 = FUNC_1(0, 1);
  break;
 case 129:
  VAR_2 = FUNC_1(0, 2);
  break;
 case 128:
  VAR_2 = FUNC_1(0, 3);
  break;
 default:
  FUNC_2("No matching USB irq!\n");
  return;
 }
 FUNC_0(VAR_2, VAR_0, 0xffffffff);
}
