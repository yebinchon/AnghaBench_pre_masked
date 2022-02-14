
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_uncore_type {int num_shared_regs; } ;
struct intel_uncore_extra_reg {int dummy; } ;
struct intel_uncore_box {int cpu; int pci_phys_id; int dieid; int active_list; int hrtimer_duration; TYPE_1__* shared_regs; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct intel_uncore_box* FUNC_1 (int,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct intel_uncore_box*) ;

__attribute__((used)) static struct intel_uncore_box *FUNC_4(struct intel_uncore_type *VAR_2,
       int VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = VAR_2->num_shared_regs ;
 struct intel_uncore_box *VAR_7;

 VAR_5 = sizeof(*VAR_7) + VAR_6 * sizeof(struct intel_uncore_extra_reg);

 VAR_7 = FUNC_1(VAR_5, VAR_0, VAR_3);
 if (!VAR_7)
  return ((void*)0);

 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++)
  FUNC_2(&VAR_7->shared_regs[VAR_4].lock);

 FUNC_3(VAR_7);
 VAR_7->cpu = -1;
 VAR_7->pci_phys_id = -1;
 VAR_7->dieid = -1;


 VAR_7->hrtimer_duration = VAR_1;

 FUNC_0(&VAR_7->active_list);

 return VAR_7;
}
