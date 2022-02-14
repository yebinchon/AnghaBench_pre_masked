
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned int irq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct irq_data *VAR_4)
{
 unsigned int VAR_5 = VAR_4->irq - VAR_3;

 if (VAR_2 && (VAR_5 > 128))
  FUNC_0(VAR_5 - 128, VAR_2);
 else if (VAR_1 && (VAR_5 > 64))
  FUNC_0(VAR_5 - 64, VAR_1);
 else
  FUNC_0(VAR_5, VAR_0);
}
