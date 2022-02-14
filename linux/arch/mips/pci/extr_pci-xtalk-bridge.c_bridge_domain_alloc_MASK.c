
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct irq_alloc_info {int pin; int nasid; int ctrl; } ;
struct bridge_irq_chip_data {int nasid; int bc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct irq_domain*,unsigned int,unsigned int,void*) ;
 int FUNC_1 (struct irq_domain*,unsigned int,int ,int *,struct bridge_irq_chip_data*,int ,int *,int *) ;
 int FUNC_2 (struct bridge_irq_chip_data*) ;
 struct bridge_irq_chip_data* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct irq_domain *VAR_5, unsigned int VAR_6,
          unsigned int VAR_7, void *VAR_8)
{
 struct bridge_irq_chip_data *VAR_9;
 struct irq_alloc_info *VAR_10 = VAR_8;
 int VAR_11;

 if (VAR_7 > 1 || !VAR_10)
  return -VAR_0;

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_11 = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8);
 if (VAR_11 >= 0) {
  VAR_9->bc = VAR_10->ctrl;
  VAR_9->nasid = VAR_10->nasid;
  FUNC_1(VAR_5, VAR_6, VAR_10->pin, &VAR_3,
        VAR_9, VAR_4, ((void*)0), ((void*)0));
 } else {
  FUNC_2(VAR_9);
 }

 return VAR_11;
}
