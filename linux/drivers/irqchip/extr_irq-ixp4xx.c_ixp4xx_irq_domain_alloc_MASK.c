
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixp4xx_irq {int irqchip; } ;
struct irq_fwspec {int dummy; } ;
struct irq_domain {struct ixp4xx_irq* host_data; } ;
typedef scalar_t__ irq_hw_number_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct irq_domain*,unsigned int,scalar_t__,int *,struct ixp4xx_irq*,int ,int *,int *) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct irq_domain*,struct irq_fwspec*,scalar_t__*,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct irq_domain *VAR_2,
       unsigned int VAR_3, unsigned int VAR_4,
       void *VAR_5)
{
 struct ixp4xx_irq *VAR_6 = VAR_2->host_data;
 irq_hw_number_t VAR_7;
 unsigned int VAR_8 = VAR_0;
 struct irq_fwspec *VAR_9 = VAR_5;
 int VAR_10;
 int VAR_11;

 VAR_10 = FUNC_2(VAR_2, VAR_9, &VAR_7, &VAR_8);
 if (VAR_10)
  return VAR_10;

 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {






  FUNC_0(VAR_2,
        VAR_3 + VAR_11,
        VAR_7 + VAR_11,
        &VAR_6->irqchip,
        VAR_6,
        VAR_1,
        ((void*)0), ((void*)0));
  FUNC_1(VAR_3 + VAR_11);
 }

 return 0;
}
