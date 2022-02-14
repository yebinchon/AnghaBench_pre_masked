
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_domain {int dummy; } ;
struct TYPE_2__ {int hwirq; } ;
typedef TYPE_1__ msi_alloc_info_t ;


 int VAR_0 ;
 int FUNC_0 (struct irq_domain*,unsigned int,int ,int *,int *,int ,int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct irq_domain *VAR_2,
     unsigned int VAR_3, unsigned int VAR_4,
     void *VAR_5)
{
 msi_alloc_info_t *VAR_6 = VAR_5;

 FUNC_0(VAR_2, VAR_3, VAR_6->hwirq, &VAR_1,
       ((void*)0), VAR_0, ((void*)0), ((void*)0));

 return 0;
}
