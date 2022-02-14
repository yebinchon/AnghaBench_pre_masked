
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xive_irq_data {int target; } ;
typedef int irq_hw_number_t ;
struct TYPE_2__ {int (* populate_irq_data ) (int ,struct xive_irq_data*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int,struct xive_irq_data*) ;
 int FUNC_1 (struct xive_irq_data*) ;
 struct xive_irq_data* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,struct xive_irq_data*) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_4, irq_hw_number_t VAR_5)
{
 struct xive_irq_data *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(sizeof(struct xive_irq_data), VAR_1);
 if (!VAR_6)
  return -VAR_0;
 VAR_7 = VAR_3->populate_irq_data(VAR_5, VAR_6);
 if (VAR_7) {
  FUNC_1(VAR_6);
  return VAR_7;
 }
 VAR_6->target = VAR_2;
 FUNC_0(VAR_4, VAR_6);

 return 0;
}
