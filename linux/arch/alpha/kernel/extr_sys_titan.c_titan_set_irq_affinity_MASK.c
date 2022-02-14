
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned int irq; } ;
struct cpumask {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (unsigned int,struct cpumask const) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct irq_data *VAR_2, const struct cpumask *VAR_3,
         bool VAR_4)
{
 unsigned int VAR_5 = VAR_2->irq;
 FUNC_0(&VAR_1);
 FUNC_2(VAR_5 - 16, *VAR_3);
 FUNC_3(VAR_0);
 FUNC_1(&VAR_1);

 return 0;
}
