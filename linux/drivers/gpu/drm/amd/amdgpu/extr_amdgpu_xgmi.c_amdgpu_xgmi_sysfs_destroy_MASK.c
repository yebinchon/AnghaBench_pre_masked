
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int attr; } ;
struct amdgpu_hive_info {int * kobj; TYPE_1__ dev_attr; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_0,
        struct amdgpu_hive_info *VAR_1)
{
 FUNC_2(VAR_1->kobj, &VAR_1->dev_attr.attr);
 FUNC_0(VAR_1->kobj);
 FUNC_1(VAR_1->kobj);
 VAR_1->kobj = ((void*)0);
}
