
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_3->irq);

 VAR_2 &= ~VAR_4;

 FUNC_2(FUNC_1(VAR_1) & ~VAR_4, VAR_1);
 FUNC_2(FUNC_1(VAR_0) & ~VAR_4, VAR_0);
}
