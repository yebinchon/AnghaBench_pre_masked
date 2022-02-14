
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_5)
{
 unsigned int VAR_6 = FUNC_0(VAR_5->irq);

 VAR_3 |= VAR_6;

 FUNC_1(VAR_4 & VAR_3, VAR_1);
 FUNC_1(VAR_2 & VAR_3, VAR_0);
}
