
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_fwspec {int dummy; } ;
struct irq_domain {int dummy; } ;


 int FUNC_0 (struct irq_domain*,unsigned int,unsigned long,int *,int *) ;
 int FUNC_1 (struct irq_domain*,unsigned int,unsigned long) ;
 int VAR_0 ;
 int FUNC_2 (struct irq_domain*,struct irq_fwspec*,unsigned long*,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct irq_domain *VAR_1,
     unsigned int VAR_2, unsigned int VAR_3,
     void *VAR_4)
{
 struct irq_fwspec *VAR_5 = VAR_4;
 unsigned long VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_1, VAR_5, &VAR_6, &VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_6);
 if (VAR_8)
  return VAR_8;

 FUNC_0(VAR_1, VAR_2, VAR_6,
          &VAR_0, ((void*)0));

 return 0;
}
