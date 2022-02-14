
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned int irq; } ;
typedef scalar_t__ __u32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct irq_data*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_1)
{
 unsigned int VAR_2 = VAR_1->irq;
 __u32 VAR_3 = VAR_0 + (FUNC_1(VAR_2) << 2);
 FUNC_2(VAR_1);
 FUNC_3((1 << FUNC_0(VAR_2)), VAR_3);
}
