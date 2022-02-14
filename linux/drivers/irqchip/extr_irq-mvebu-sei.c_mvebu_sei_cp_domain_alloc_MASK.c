
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mvebu_sei {TYPE_3__* caps; int cp_msi_lock; int cp_msi_bitmap; } ;
struct irq_fwspec {int param_count; scalar_t__* param; int fwnode; } ;
struct irq_domain {TYPE_1__* parent; struct mvebu_sei* host_data; } ;
struct TYPE_5__ {unsigned long size; scalar_t__ first; } ;
struct TYPE_6__ {TYPE_2__ cp_range; } ;
struct TYPE_4__ {int fwnode; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int ,unsigned long) ;
 int VAR_2 ;
 int FUNC_1 (struct irq_domain*,unsigned int,int,struct irq_fwspec*) ;
 int FUNC_2 (struct irq_domain*,unsigned int,unsigned long,int *,struct mvebu_sei*,int ,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int FUNC_5 (struct mvebu_sei*,unsigned long) ;
 int FUNC_6 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_7(struct irq_domain *VAR_4,
         unsigned int VAR_5, unsigned int VAR_6,
         void *VAR_7)
{
 struct mvebu_sei *VAR_8 = VAR_4->host_data;
 struct irq_fwspec VAR_9;
 unsigned long VAR_10;
 int VAR_11;


 if (VAR_6 != 1)
  return -VAR_1;

 FUNC_3(&VAR_8->cp_msi_lock);
 VAR_10 = FUNC_0(VAR_8->cp_msi_bitmap,
        VAR_8->caps->cp_range.size);
 if (VAR_10 < VAR_8->caps->cp_range.size)
  FUNC_6(VAR_10, VAR_8->cp_msi_bitmap);
 FUNC_4(&VAR_8->cp_msi_lock);

 if (VAR_10 == VAR_8->caps->cp_range.size)
  return -VAR_0;

 VAR_9.fwnode = VAR_4->parent->fwnode;
 VAR_9.param_count = 1;
 VAR_9.param[0] = VAR_10 + VAR_8->caps->cp_range.first;

 VAR_11 = FUNC_1(VAR_4, VAR_5, 1, &VAR_9);
 if (VAR_11)
  goto free_irq;

 FUNC_2(VAR_4, VAR_5, VAR_10,
       &VAR_3, VAR_8,
       VAR_2, ((void*)0), ((void*)0));

 return 0;

free_irq:
 FUNC_5(VAR_8, VAR_10);
 return VAR_11;
}
