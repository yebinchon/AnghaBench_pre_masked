
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int prt_lock; int num_prt_users; } ;
struct TYPE_5__ {TYPE_1__* gmc_funcs; } ;
struct amdgpu_device {TYPE_3__ vm_manager; TYPE_2__ gmc; } ;
struct TYPE_4__ {int (* set_prt ) (struct amdgpu_device*,int) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct amdgpu_device*,int) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_0)
{
 unsigned long VAR_1;
 bool VAR_2;

 FUNC_1(&VAR_0->vm_manager.prt_lock, VAR_1);
 VAR_2 = !!FUNC_0(&VAR_0->vm_manager.num_prt_users);
 VAR_0->gmc.gmc_funcs->set_prt(VAR_0, VAR_2);
 FUNC_2(&VAR_0->vm_manager.prt_lock, VAR_1);
}
