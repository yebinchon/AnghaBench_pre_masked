
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_iv_entry {int dummy; } ;
struct amdgpu_irq_src {int dummy; } ;
struct TYPE_2__ {int flr_work; } ;
struct amdgpu_device {TYPE_1__ virt; } ;
typedef enum idh_event { ____Placeholder_idh_event } idh_event ;







 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_0,
       struct amdgpu_irq_src *VAR_1,
       struct amdgpu_iv_entry *VAR_2)
{
 enum idh_event VAR_3 = FUNC_2(VAR_0);

 switch (VAR_3) {
  case 131:
  if (FUNC_0(VAR_0))
   FUNC_1(&VAR_0->virt.flr_work);
  break;
  case 129:
   FUNC_3(VAR_0);
   break;




  case 132:
  case 130:
  case 128:
  default:
  break;
 }

 return 0;
}
