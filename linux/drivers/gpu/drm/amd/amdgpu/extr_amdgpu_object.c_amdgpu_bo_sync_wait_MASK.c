
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_sync {int dummy; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_3__ {int resv; } ;
struct TYPE_4__ {TYPE_1__ base; int bdev; } ;
struct amdgpu_bo {TYPE_2__ tbo; } ;


 int FUNC_0 (struct amdgpu_sync*) ;
 int FUNC_1 (struct amdgpu_sync*) ;
 int FUNC_2 (struct amdgpu_device*,struct amdgpu_sync*,int ,void*,int) ;
 int FUNC_3 (struct amdgpu_sync*,int) ;
 struct amdgpu_device* FUNC_4 (int ) ;

int FUNC_5(struct amdgpu_bo *VAR_0, void *VAR_1, bool VAR_2)
{
 struct amdgpu_device *VAR_3 = FUNC_4(VAR_0->tbo.bdev);
 struct amdgpu_sync VAR_4;
 int VAR_5;

 FUNC_0(&VAR_4);
 FUNC_2(VAR_3, &VAR_4, VAR_0->tbo.base.resv, VAR_1, 0);
 VAR_5 = FUNC_3(&VAR_4, VAR_2);
 FUNC_1(&VAR_4);

 return VAR_5;
}
