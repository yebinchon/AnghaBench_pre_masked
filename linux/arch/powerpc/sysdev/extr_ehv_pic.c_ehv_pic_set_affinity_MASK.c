
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;
struct cpumask {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int,int) ;
 int FUNC_2 (struct cpumask const*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 unsigned int FUNC_5 (int ) ;

int FUNC_6(struct irq_data *VAR_2, const struct cpumask *VAR_3,
    bool VAR_4)
{
 unsigned int VAR_5 = FUNC_5(VAR_2->irq);
 unsigned int VAR_6, VAR_7, VAR_8;
 int VAR_9 = FUNC_2(VAR_3);
 unsigned long VAR_10;

 FUNC_3(&VAR_1, VAR_10);
 FUNC_0(VAR_5, &VAR_6, &VAR_7, &VAR_8);
 FUNC_1(VAR_5, VAR_6, VAR_7, VAR_9);
 FUNC_4(&VAR_1, VAR_10);

 return VAR_0;
}
