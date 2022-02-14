
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct ls_scfg_msi {size_t msir_num; TYPE_1__* msir; } ;
struct irq_data {int dummy; } ;
struct cpumask {int dummy; } ;
struct TYPE_2__ {scalar_t__ gic_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (struct cpumask const*,int ) ;
 size_t FUNC_1 (struct cpumask const*) ;
 int FUNC_2 (size_t) ;
 struct ls_scfg_msi* FUNC_3 (struct irq_data*) ;
 int FUNC_4 (struct irq_data*,int ) ;
 int VAR_3 ;
 int FUNC_5 (char*,size_t) ;

__attribute__((used)) static int FUNC_6(struct irq_data *VAR_4,
        const struct cpumask *VAR_5, bool VAR_6)
{
 struct ls_scfg_msi *VAR_7 = FUNC_3(VAR_4);
 u32 VAR_8;

 if (!VAR_3)
  return -VAR_0;

 if (!VAR_6)
  VAR_8 = FUNC_0(VAR_5, VAR_2);
 else
  VAR_8 = FUNC_1(VAR_5);

 if (VAR_8 >= VAR_7->msir_num)
  return -VAR_0;

 if (VAR_7->msir[VAR_8].gic_irq <= 0) {
  FUNC_5("cannot bind the irq to cpu%d\n", VAR_8);
  return -VAR_0;
 }

 FUNC_4(VAR_4, FUNC_2(VAR_8));

 return VAR_1;
}
