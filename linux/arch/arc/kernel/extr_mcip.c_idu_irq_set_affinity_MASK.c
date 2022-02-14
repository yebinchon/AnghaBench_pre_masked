
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int hwirq; } ;
struct cpumask {int dummy; } ;
typedef int cpumask_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct cpumask const*,int ) ;
 unsigned int* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 int FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (int ,int,int ,int,unsigned int) ;
 int VAR_5 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_8(struct irq_data *VAR_6, const struct cpumask *VAR_7,
       bool VAR_8)
{
 unsigned long VAR_9;
 cpumask_t VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12;


 if (!FUNC_0(&VAR_10, VAR_7, VAR_4))
  return -VAR_0;

 FUNC_6(&VAR_5, VAR_9);

 VAR_11 = FUNC_1(&VAR_10)[0];
 FUNC_4(VAR_6->hwirq, VAR_11);

 if (FUNC_2(VAR_11) == FUNC_3(VAR_11))
  VAR_12 = VAR_1;
 else
  VAR_12 = VAR_2;

 FUNC_5(VAR_6->hwirq, 0, 0, 1, VAR_12);

 FUNC_7(&VAR_5, VAR_9);

 return VAR_3;
}
