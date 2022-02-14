
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int work; } ;
struct TYPE_5__ {TYPE_1__ thermal; } ;
struct TYPE_6__ {int mutex; TYPE_2__ dpm; } ;
struct amdgpu_device {TYPE_3__ pm; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(void *VAR_0)
{
 struct amdgpu_device *VAR_1 = (struct amdgpu_device *)VAR_0;

 FUNC_0(&VAR_1->pm.dpm.thermal.work);

 FUNC_2(&VAR_1->pm.mutex);
 FUNC_1(VAR_1);
 FUNC_3(&VAR_1->pm.mutex);

 return 0;
}
