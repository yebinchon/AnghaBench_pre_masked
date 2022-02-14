
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned int irq; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned short FUNC_0 (int ) ;
 int FUNC_1 (unsigned short,int ) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_2)
{
 unsigned int VAR_3 = VAR_2->irq;
 unsigned short VAR_4;
 unsigned short VAR_5 = 1 << (VAR_3 - VAR_0);

 VAR_4 = FUNC_0(VAR_1);
 VAR_4 |= VAR_5;
 FUNC_1(VAR_4, VAR_1);
}
