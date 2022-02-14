
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct its_vpe {int col_idx; } ;
struct irq_data {int dummy; } ;
struct cpumask {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpumask const*) ;
 int FUNC_1 (int) ;
 struct its_vpe* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct irq_data*,int ) ;
 int FUNC_4 (struct its_vpe*) ;
 int FUNC_5 (struct its_vpe*,int,int) ;

__attribute__((used)) static int FUNC_6(struct irq_data *VAR_1,
    const struct cpumask *VAR_2,
    bool VAR_3)
{
 struct its_vpe *VAR_4 = FUNC_2(VAR_1);
 int VAR_5 = FUNC_0(VAR_2);







 if (VAR_4->col_idx != VAR_5) {
  int VAR_6 = VAR_4->col_idx;

  VAR_4->col_idx = VAR_5;
  FUNC_4(VAR_4);
  FUNC_5(VAR_4, VAR_6, VAR_5);
 }

 FUNC_3(VAR_1, FUNC_1(VAR_5));

 return VAR_0;
}
