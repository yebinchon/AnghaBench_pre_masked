
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct TYPE_4__ {TYPE_1__* irq_handler_list_low_tab; } ;
struct amdgpu_device {TYPE_2__ dm; } ;
typedef enum dc_irq_source { ____Placeholder_dc_irq_source } dc_irq_source ;
struct TYPE_3__ {struct work_struct work; int head; } ;


 int FUNC_0 (struct amdgpu_device*,unsigned long) ;
 int FUNC_1 (struct amdgpu_device*,unsigned long) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct work_struct*) ;

__attribute__((used)) static void FUNC_5(struct amdgpu_device *VAR_0,
     enum dc_irq_source VAR_1)
{
 unsigned long VAR_2;
 struct work_struct *VAR_3 = ((void*)0);

 FUNC_0(VAR_0, VAR_2);

 if (!FUNC_3(&VAR_0->dm.irq_handler_list_low_tab[VAR_1].head))
  VAR_3 = &VAR_0->dm.irq_handler_list_low_tab[VAR_1].work;

 FUNC_1(VAR_0, VAR_2);

 if (VAR_3) {
  if (!FUNC_4(VAR_3))
   FUNC_2("amdgpu_dm_irq_schedule_work FAILED src %d\n",
      VAR_1);
 }

}
