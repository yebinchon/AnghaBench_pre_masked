
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvebu_icu_msi_data {TYPE_1__* subset_data; } ;
struct mvebu_icu {int dev; } ;
struct irq_fwspec {unsigned int param_count; unsigned long* param; } ;
struct irq_domain {int dummy; } ;
struct TYPE_2__ {scalar_t__ icu_group; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*,unsigned long) ;
 int VAR_6 ;
 void* FUNC_2 (struct irq_domain*) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct irq_domain *VAR_7, struct irq_fwspec *VAR_8,
          unsigned long *VAR_9, unsigned int *VAR_10)
{
 struct mvebu_icu_msi_data *VAR_11 = FUNC_2(VAR_7);
 struct mvebu_icu *VAR_12 = FUNC_2(VAR_7);
 unsigned int VAR_13 = FUNC_3(&VAR_6) ? 3 : 2;


 if (FUNC_0(VAR_8->param_count != VAR_13)) {
  FUNC_1(VAR_12->dev, "wrong ICU parameter count %d\n",
   VAR_8->param_count);
  return -VAR_0;
 }

 if (FUNC_3(&VAR_6)) {
  *VAR_9 = VAR_8->param[1];
  *VAR_10 = VAR_8->param[2] & VAR_5;
  if (VAR_8->param[0] != VAR_1) {
   FUNC_1(VAR_12->dev, "wrong ICU group type %x\n",
    VAR_8->param[0]);
   return -VAR_0;
  }
 } else {
  *VAR_9 = VAR_8->param[0];
  *VAR_10 = VAR_8->param[1] & VAR_5;







  if (VAR_11->subset_data->icu_group == VAR_2)
   *VAR_10 = VAR_4;
 }

 if (*VAR_9 >= VAR_3) {
  FUNC_1(VAR_12->dev, "invalid interrupt number %ld\n", *VAR_9);
  return -VAR_0;
 }

 return 0;
}
