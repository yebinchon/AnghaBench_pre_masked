
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct amdgpu_device {scalar_t__ family; } ;
struct TYPE_2__ {int bdev; } ;
struct amdgpu_bo {int tiling_flags; TYPE_1__ tbo; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct amdgpu_device* FUNC_1 (int ) ;

int FUNC_2(struct amdgpu_bo *VAR_3, u64 VAR_4)
{
 struct amdgpu_device *VAR_5 = FUNC_1(VAR_3->tbo.bdev);

 if (VAR_5->family <= VAR_0 &&
     FUNC_0(VAR_4, VAR_2) > 6)
  return -VAR_1;

 VAR_3->tiling_flags = VAR_4;
 return 0;
}
