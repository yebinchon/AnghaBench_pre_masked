
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {size_t irq; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;
 unsigned long* VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct irq_data *VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 VAR_3 &= ~VAR_1[VAR_2->irq];
 FUNC_1(VAR_3, VAR_0);
}
