
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_3__ {int dc; struct list_head* irq_handler_list_high_tab; TYPE_2__* irq_handler_list_low_tab; } ;
struct amdgpu_device {TYPE_1__ dm; } ;
struct TYPE_4__ {struct list_head head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*,unsigned long) ;
 int FUNC_1 (struct amdgpu_device*,unsigned long) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (struct list_head*) ;

int FUNC_5(struct amdgpu_device *VAR_2)
{
 int VAR_3;
 struct list_head *VAR_4, *VAR_5;
 unsigned long VAR_6;

 FUNC_0(VAR_2, VAR_6);

 FUNC_2("DM_IRQ: early resume\n");


 for (VAR_3 = VAR_0; VAR_3 <= VAR_1; VAR_3++) {
  VAR_5 = &VAR_2->dm.irq_handler_list_low_tab[VAR_3].head;
  VAR_4 = &VAR_2->dm.irq_handler_list_high_tab[VAR_3];
  if (!FUNC_4(VAR_5) || !FUNC_4(VAR_4))
   FUNC_3(VAR_2->dm.dc, VAR_3, 1);
 }

 FUNC_1(VAR_2, VAR_6);

 return 0;
}
