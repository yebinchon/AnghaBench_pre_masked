
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {scalar_t__ chip_data; } ;
struct cpumask {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct cpumask const*) ;
 struct cpumask const* FUNC_4 (struct irq_data*) ;
 int VAR_1 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct irq_data *VAR_2, const struct cpumask *VAR_3,
        bool VAR_4)
{
 unsigned long VAR_5, VAR_6, VAR_7;
 int VAR_8, VAR_9;

 VAR_5 = (unsigned long)VAR_2->chip_data;
 VAR_8 = FUNC_3(FUNC_4(VAR_2));
 VAR_9 = FUNC_3(VAR_3);

 if (VAR_8 == VAR_9)
  goto out;


 FUNC_5(&VAR_1, VAR_7);
 VAR_6 = FUNC_0(FUNC_2(VAR_8));
 FUNC_1(FUNC_2(VAR_8), (VAR_6 & ~VAR_5));
 VAR_6 = FUNC_0(FUNC_2(VAR_9));
 FUNC_1(FUNC_2(VAR_9), (VAR_6 | VAR_5));
 FUNC_6(&VAR_1, VAR_7);
out:
 return VAR_0;
}
