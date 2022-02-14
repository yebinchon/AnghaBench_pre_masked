
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int max_hotspot_emergency_temp; int max_edge_emergency_temp; int max_mem_emergency_temp; } ;
struct TYPE_7__ {TYPE_1__ thermal; } ;
struct TYPE_6__ {TYPE_3__ dpm; } ;
struct amdgpu_device {TYPE_2__ pm; } ;
typedef int ssize_t ;
struct TYPE_8__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;

 struct amdgpu_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int) ;
 TYPE_4__* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_3,
          struct device_attribute *VAR_4,
          char *VAR_5)
{
 struct amdgpu_device *VAR_6 = FUNC_0(VAR_3);
 int VAR_7 = FUNC_2(VAR_4)->index;
 int VAR_8 = 0;

 if (VAR_7 >= VAR_2)
  return -VAR_0;

 switch (VAR_7) {
 case 129:
  VAR_8 = VAR_6->pm.dpm.thermal.max_hotspot_emergency_temp;
  break;
 case 130:
  VAR_8 = VAR_6->pm.dpm.thermal.max_edge_emergency_temp;
  break;
 case 128:
  VAR_8 = VAR_6->pm.dpm.thermal.max_mem_emergency_temp;
  break;
 }

 return FUNC_1(VAR_5, VAR_1, "%d\n", VAR_8);
}
