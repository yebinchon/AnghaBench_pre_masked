
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bin_attribute {int dummy; } ;
struct attribute_group {char* name; struct bin_attribute** bin_attrs; struct attribute** attrs; } ;
struct attribute {int dummy; } ;
struct TYPE_3__ {struct attribute attr; } ;
struct amdgpu_ras {struct bin_attribute badpages_attr; TYPE_1__ features_attr; } ;
struct amdgpu_device {TYPE_2__* dev; } ;
struct TYPE_4__ {int kobj; } ;


 struct amdgpu_ras* FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (int *,struct attribute_group*) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_0)
{
 struct amdgpu_ras *VAR_1 = FUNC_0(VAR_0);
 struct attribute *VAR_2[] = {
  &VAR_1->features_attr.attr,
  ((void*)0)
 };
 struct bin_attribute *VAR_3[] = {
  &VAR_1->badpages_attr,
  ((void*)0)
 };
 struct attribute_group VAR_4 = {
  .name = "ras",
  .attrs = VAR_2,
  .bin_attrs = VAR_3,
 };

 FUNC_1(&VAR_0->dev->kobj, &VAR_4);

 return 0;
}
