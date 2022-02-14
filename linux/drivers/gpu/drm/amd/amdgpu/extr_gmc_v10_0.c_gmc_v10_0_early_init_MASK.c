
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int shared_aperture_start; unsigned long long shared_aperture_end; int private_aperture_start; unsigned long long private_aperture_end; } ;
struct amdgpu_device {TYPE_1__ gmc; } ;


 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_2(void *VAR_0)
{
 struct amdgpu_device *VAR_1 = (struct amdgpu_device *)VAR_0;

 FUNC_0(VAR_1);
 FUNC_1(VAR_1);

 VAR_1->gmc.shared_aperture_start = 0x2000000000000000ULL;
 VAR_1->gmc.shared_aperture_end =
  VAR_1->gmc.shared_aperture_start + (4ULL << 30) - 1;
 VAR_1->gmc.private_aperture_start = 0x1000000000000000ULL;
 VAR_1->gmc.private_aperture_end =
  VAR_1->gmc.private_aperture_start + (4ULL << 30) - 1;

 return 0;
}
