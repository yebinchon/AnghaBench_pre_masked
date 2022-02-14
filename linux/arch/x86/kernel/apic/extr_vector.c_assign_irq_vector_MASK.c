
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct cpumask {int dummy; } ;


 int FUNC_0 (struct irq_data*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct cpumask const*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct irq_data *VAR_3, const struct cpumask *VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;

 FUNC_2(&VAR_1, VAR_5);
 FUNC_1(VAR_2, VAR_4, VAR_0);
 VAR_6 = FUNC_0(VAR_3, VAR_2);
 FUNC_3(&VAR_1, VAR_5);
 return VAR_6;
}
