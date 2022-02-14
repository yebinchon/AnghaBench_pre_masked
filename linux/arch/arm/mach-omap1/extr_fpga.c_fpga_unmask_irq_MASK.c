
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_4)
{
 unsigned int VAR_5 = VAR_4->irq - VAR_3;

 if (VAR_5 < 8)
  FUNC_1((FUNC_0(VAR_2) | (1 << VAR_5)),
       VAR_2);
 else if (VAR_5 < 16)
  FUNC_1((FUNC_0(VAR_1)
         | (1 << (VAR_5 - 8))), VAR_1);
 else
  FUNC_1((FUNC_0(VAR_0)
         | (1 << (VAR_5 - 16))), VAR_0);
}
