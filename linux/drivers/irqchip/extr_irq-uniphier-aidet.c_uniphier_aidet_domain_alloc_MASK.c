
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_fwspec {int param_count; unsigned int* param; int fwnode; } ;
struct irq_domain {TYPE_1__* parent; int host_data; } ;
typedef scalar_t__ irq_hw_number_t ;
struct TYPE_2__ {int fwnode; } ;


 int VAR_0 ;
 int VAR_1 ;




 scalar_t__ VAR_2 ;
 int FUNC_0 (struct irq_domain*,unsigned int,int,struct irq_fwspec*) ;
 int FUNC_1 (struct irq_domain*,unsigned int,scalar_t__,int *,int ) ;
 int FUNC_2 (struct irq_domain*,void*,scalar_t__*,unsigned int*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct irq_domain *VAR_4,
           unsigned int VAR_5, unsigned int VAR_6,
           void *VAR_7)
{
 struct irq_fwspec VAR_8;
 irq_hw_number_t VAR_9;
 unsigned int VAR_10;
 int VAR_11;

 if (VAR_6 != 1)
  return -VAR_0;

 VAR_11 = FUNC_2(VAR_4, VAR_7, &VAR_9, &VAR_10);
 if (VAR_11)
  return VAR_11;

 switch (VAR_10) {
 case 130:
 case 129:
  break;
 case 131:
  VAR_10 = 130;
  break;
 case 128:
  VAR_10 = 129;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_9 >= VAR_2)
  return -VAR_1;

 VAR_11 = FUNC_1(VAR_4, VAR_5, VAR_9,
         &VAR_3,
         VAR_4->host_data);
 if (VAR_11)
  return VAR_11;


 VAR_8.fwnode = VAR_4->parent->fwnode;
 VAR_8.param_count = 3;
 VAR_8.param[0] = 0;
 VAR_8.param[1] = VAR_9;
 VAR_8.param[2] = VAR_10;

 return FUNC_0(VAR_4, VAR_5, 1, &VAR_8);
}
