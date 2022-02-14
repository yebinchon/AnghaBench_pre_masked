
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned char FUNC_0 (int ) ;
 int FUNC_1 (unsigned char,int ) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_3)
{

 unsigned int VAR_4 = VAR_3->irq - VAR_2;
 unsigned char VAR_5 = FUNC_0(VAR_0);
 unsigned int VAR_6 = 1 << VAR_4;
 FUNC_1(VAR_5 | VAR_6, VAR_0);

 (void)FUNC_0(VAR_1);
}
