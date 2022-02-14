
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_1(struct irq_data *VAR_2)
{
 int VAR_3;
 int VAR_4 = VAR_2->irq - 12;

 VAR_3 = VAR_1[VAR_4];
 if (VAR_3 >= 0) {
  if (VAR_3 < 8)
   FUNC_0(VAR_3 & 7, VAR_0);
  else
   FUNC_0(VAR_3 & 7, (VAR_0+1));
 }
}
