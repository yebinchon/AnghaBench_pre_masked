
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int initialized; int bdev; int * aper_base_kaddr; } ;
struct amdgpu_device {TYPE_1__ mman; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct amdgpu_device *VAR_5)
{
 if (!VAR_5->mman.initialized)
  return;

 FUNC_1(VAR_5);
 FUNC_2(VAR_5);
 if (VAR_5->mman.aper_base_kaddr)
  FUNC_3(VAR_5->mman.aper_base_kaddr);
 VAR_5->mman.aper_base_kaddr = ((void*)0);

 FUNC_4(&VAR_5->mman.bdev, VAR_4);
 FUNC_4(&VAR_5->mman.bdev, VAR_3);
 FUNC_4(&VAR_5->mman.bdev, VAR_0);
 FUNC_4(&VAR_5->mman.bdev, VAR_1);
 FUNC_4(&VAR_5->mman.bdev, VAR_2);
 FUNC_5(&VAR_5->mman.bdev);
 VAR_5->mman.initialized = 0;
 FUNC_0("amdgpu: ttm finalized\n");
}
