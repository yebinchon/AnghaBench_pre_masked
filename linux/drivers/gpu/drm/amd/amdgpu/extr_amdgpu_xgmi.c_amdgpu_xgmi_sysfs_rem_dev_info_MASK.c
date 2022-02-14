
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_hive_info {int * kobj; } ;
struct amdgpu_device {TYPE_1__* ddev; TYPE_2__* dev; } ;
struct TYPE_4__ {int kobj; } ;
struct TYPE_3__ {int unique; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_1,
       struct amdgpu_hive_info *VAR_2)
{
 FUNC_0(VAR_1->dev, &VAR_0);
 FUNC_1(&VAR_1->dev->kobj, VAR_1->ddev->unique);
 FUNC_1(VAR_2->kobj, VAR_1->ddev->unique);
}
