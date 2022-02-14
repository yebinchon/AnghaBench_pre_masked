
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct amdgpu_iv_entry {int src_id; } ;
struct amdgpu_irq_src {int dummy; } ;
struct TYPE_6__ {int high_to_low; int work; } ;
struct TYPE_4__ {TYPE_3__ thermal; } ;
struct TYPE_5__ {TYPE_1__ dpm; } ;
struct amdgpu_device {TYPE_2__ pm; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_1,
        struct amdgpu_irq_src *VAR_2,
        struct amdgpu_iv_entry *VAR_3)
{
 bool VAR_4 = 0;

 if (VAR_3 == ((void*)0))
  return -VAR_0;

 switch (VAR_3->src_id) {
 case 230:
  FUNC_0("IH: thermal low to high\n");
  VAR_1->pm.dpm.thermal.high_to_low = 0;
  VAR_4 = 1;
  break;
 case 231:
  FUNC_0("IH: thermal high to low\n");
  VAR_1->pm.dpm.thermal.high_to_low = 1;
  VAR_4 = 1;
  break;
 default:
  break;
 }

 if (VAR_4)
  FUNC_1(&VAR_1->pm.dpm.thermal.work);

 return 0;
}
