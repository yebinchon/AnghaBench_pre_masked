
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbigen_device {int base; } ;
struct irq_fwspec {int dummy; } ;
struct irq_domain {int dummy; } ;
typedef scalar_t__ irq_hw_number_t ;


 int FUNC_0 (struct irq_domain*,unsigned int,scalar_t__,int *,int ) ;
 int FUNC_1 (struct irq_domain*,struct irq_fwspec*,scalar_t__*,unsigned int*) ;
 int VAR_0 ;
 int FUNC_2 (struct irq_domain*,unsigned int,unsigned int) ;
 struct mbigen_device* FUNC_3 (struct irq_domain*) ;

__attribute__((used)) static int FUNC_4(struct irq_domain *VAR_1,
     unsigned int VAR_2,
     unsigned int VAR_3,
     void *VAR_4)
{
 struct irq_fwspec *VAR_5 = VAR_4;
 irq_hw_number_t VAR_6;
 unsigned int VAR_7;
 struct mbigen_device *VAR_8;
 int VAR_9, VAR_10;

 VAR_10 = FUNC_1(VAR_1, VAR_5, &VAR_6, &VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (VAR_10)
  return VAR_10;

 VAR_8 = FUNC_3(VAR_1);

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
  FUNC_0(VAR_1, VAR_2 + VAR_9, VAR_6 + VAR_9,
          &VAR_0, VAR_8->base);

 return 0;
}
