
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct irq_data *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2->irq);

 if (VAR_3 & 0xff)
  VAR_1 = VAR_3;
 else
  VAR_0 = (VAR_3 >> 8);
}
