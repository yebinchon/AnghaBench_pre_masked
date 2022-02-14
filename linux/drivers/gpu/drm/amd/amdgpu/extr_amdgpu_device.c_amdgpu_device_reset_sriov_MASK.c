
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int gim_feature; } ;
struct TYPE_6__ {int * man; } ;
struct TYPE_4__ {TYPE_3__ bdev; } ;
struct amdgpu_device {TYPE_2__ virt; TYPE_1__ mman; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct amdgpu_device*) ;
 int FUNC_8 (struct amdgpu_device*) ;
 int FUNC_9 (struct amdgpu_device*) ;
 int FUNC_10 (struct amdgpu_device*) ;
 int FUNC_11 (struct amdgpu_device*,int) ;
 int FUNC_12 (struct amdgpu_device*,int) ;
 int FUNC_13 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_14(struct amdgpu_device *VAR_2,
         bool VAR_3)
{
 int VAR_4;

 if (VAR_3)
  VAR_4 = FUNC_12(VAR_2, 1);
 else
  VAR_4 = FUNC_13(VAR_2);
 if (VAR_4)
  return VAR_4;

 FUNC_1(VAR_2);


 VAR_4 = FUNC_3(VAR_2);
 if (VAR_4)
  goto error;


 FUNC_6(&VAR_2->mman.bdev.man[VAR_1]);

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_4(VAR_2);
 if (VAR_4)
  goto error;

 FUNC_9(VAR_2);
 VAR_4 = FUNC_7(VAR_2);
 FUNC_0(VAR_2);

error:
 FUNC_10(VAR_2);
 FUNC_11(VAR_2, 1);
 if (!VAR_4 && VAR_2->virt.gim_feature & VAR_0) {
  FUNC_8(VAR_2);
  VAR_4 = FUNC_5(VAR_2);
 }

 return VAR_4;
}
