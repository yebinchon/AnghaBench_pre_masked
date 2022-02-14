
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mvebu_sei {TYPE_3__* caps; } ;
struct irq_fwspec {int param_count; scalar_t__* param; int fwnode; } ;
struct irq_domain {TYPE_1__* parent; struct mvebu_sei* host_data; } ;
struct TYPE_5__ {scalar_t__ first; } ;
struct TYPE_6__ {TYPE_2__ ap_range; } ;
struct TYPE_4__ {int fwnode; } ;


 int VAR_0 ;
 int FUNC_0 (struct irq_domain*,unsigned int,int,struct irq_fwspec*) ;
 int FUNC_1 (struct irq_domain*,unsigned int,unsigned long,int *,struct mvebu_sei*,int ,int *,int *) ;
 int FUNC_2 (unsigned int) ;
 int VAR_1 ;
 int FUNC_3 (struct irq_domain*,void*,unsigned long*,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct irq_domain *VAR_2, unsigned int VAR_3,
         unsigned int VAR_4, void *VAR_5)
{
 struct mvebu_sei *VAR_6 = VAR_2->host_data;
 struct irq_fwspec VAR_7;
 unsigned long VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 FUNC_3(VAR_2, VAR_5, &VAR_8, &VAR_9);

 VAR_7.fwnode = VAR_2->parent->fwnode;
 VAR_7.param_count = 1;
 VAR_7.param[0] = VAR_8 + VAR_6->caps->ap_range.first;

 VAR_10 = FUNC_0(VAR_2, VAR_3, 1, &VAR_7);
 if (VAR_10)
  return VAR_10;

 FUNC_1(VAR_2, VAR_3, VAR_8,
       &VAR_1, VAR_6,
       VAR_0, ((void*)0), ((void*)0));
 FUNC_2(VAR_3);

 return 0;
}
