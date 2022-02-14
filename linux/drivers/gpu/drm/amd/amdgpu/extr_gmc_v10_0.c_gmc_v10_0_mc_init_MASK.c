
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int vram_width; unsigned long long aper_size; unsigned long long mc_vram_size; unsigned long long real_vram_size; unsigned long long visible_vram_size; unsigned long long gart_size; int aper_base; } ;
struct amdgpu_device {int asic_type; TYPE_2__ gmc; TYPE_1__* nbio_funcs; int pdev; } ;
struct TYPE_3__ {unsigned long long (* get_memsize ) (struct amdgpu_device*) ;} ;





 int FUNC_0 (struct amdgpu_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct amdgpu_device*,TYPE_2__*) ;
 unsigned long long FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 unsigned long long FUNC_4 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_5(struct amdgpu_device *VAR_2)
{
 int VAR_3, VAR_4;

 if (!VAR_0)
  VAR_2->gmc.vram_width = FUNC_0(VAR_2);
 else {

  VAR_3 = 128;
  VAR_4 = 1;
  VAR_2->gmc.vram_width = VAR_4 * VAR_3;
 }


 VAR_2->gmc.aper_base = FUNC_3(VAR_2->pdev, 0);
 VAR_2->gmc.aper_size = FUNC_2(VAR_2->pdev, 0);


 VAR_2->gmc.mc_vram_size =
  VAR_2->nbio_funcs->get_memsize(VAR_2) * 1024ULL * 1024ULL;
 VAR_2->gmc.real_vram_size = VAR_2->gmc.mc_vram_size;
 VAR_2->gmc.visible_vram_size = VAR_2->gmc.aper_size;


 if (VAR_2->gmc.visible_vram_size > VAR_2->gmc.real_vram_size)
  VAR_2->gmc.visible_vram_size = VAR_2->gmc.real_vram_size;


 if (VAR_1 == -1) {
  switch (VAR_2->asic_type) {
  case 130:
  case 128:
  case 129:
  default:
   VAR_2->gmc.gart_size = 512ULL << 20;
   break;
  }
 } else
  VAR_2->gmc.gart_size = (u64)VAR_1 << 20;

 FUNC_1(VAR_2, &VAR_2->gmc);

 return 0;
}
