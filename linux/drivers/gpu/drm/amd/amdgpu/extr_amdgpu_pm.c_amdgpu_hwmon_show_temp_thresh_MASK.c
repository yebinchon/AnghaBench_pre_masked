
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
struct TYPE_5__ {int min_temp; int max_temp; } ;
struct TYPE_6__ {TYPE_1__ thermal; } ;
struct TYPE_7__ {TYPE_2__ dpm; } ;
struct amdgpu_device {TYPE_3__ pm; } ;
typedef int ssize_t ;
struct TYPE_8__ {int index; } ;


 int VAR_0 ;
 struct amdgpu_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int) ;
 TYPE_4__* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
          struct device_attribute *VAR_2,
          char *VAR_3)
{
 struct amdgpu_device *VAR_4 = FUNC_0(VAR_1);
 int VAR_5 = FUNC_2(VAR_2)->index;
 int VAR_6;

 if (VAR_5)
  VAR_6 = VAR_4->pm.dpm.thermal.min_temp;
 else
  VAR_6 = VAR_4->pm.dpm.thermal.max_temp;

 return FUNC_1(VAR_3, VAR_0, "%d\n", VAR_6);
}
