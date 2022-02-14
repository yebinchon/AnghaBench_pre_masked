
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_data {unsigned int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_3)
{
 unsigned int VAR_4 = VAR_3->irq - VAR_2;
 u32 VAR_5;

 FUNC_1(VAR_1, ~(1 << VAR_4));

 VAR_5 = FUNC_0(VAR_0);
 VAR_5 &= ~(1 << VAR_4);
 FUNC_1(VAR_0, VAR_5);
}
