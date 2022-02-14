
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_data {unsigned int irq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (scalar_t__,int) ;
 int VAR_3 ;
 int FUNC_2 (struct irq_data*) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_4)
{
 unsigned int VAR_5 = VAR_4->irq;

 FUNC_2(VAR_4);
 if (!VAR_3)
  FUNC_1(VAR_0, 0);
 else {
  u32 VAR_6;
  FUNC_0(VAR_1+VAR_5*8, VAR_6);
  FUNC_1(VAR_1+VAR_5*8, VAR_6 | ~VAR_2);
  FUNC_1(VAR_1+VAR_5*8, VAR_6);
 }
}
