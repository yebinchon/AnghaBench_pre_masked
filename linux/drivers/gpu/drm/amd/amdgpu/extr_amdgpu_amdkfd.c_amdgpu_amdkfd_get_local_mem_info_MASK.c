
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct kgd_dev {int dummy; } ;
struct kfd_local_mem_info {int mem_clk_max; scalar_t__ local_mem_size_private; scalar_t__ local_mem_size_public; int vram_width; } ;
struct TYPE_8__ {scalar_t__ pp_funcs; } ;
struct TYPE_7__ {int default_mclk; } ;
struct TYPE_6__ {int aper_base; int aper_size; int vram_width; scalar_t__ real_vram_size; scalar_t__ visible_vram_size; } ;
struct amdgpu_device {TYPE_4__ powerplay; TYPE_3__ clock; TYPE_2__ gmc; TYPE_1__* dev; } ;
typedef int resource_size_t ;
struct TYPE_5__ {unsigned long long* dma_mask; } ;


 int FUNC_0 (struct amdgpu_device*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct kfd_local_mem_info*,int ,int) ;
 int FUNC_3 (char*,int*,int*,scalar_t__,scalar_t__) ;

void FUNC_4(struct kgd_dev *VAR_1,
          struct kfd_local_mem_info *VAR_2)
{
 struct amdgpu_device *VAR_3 = (struct amdgpu_device *)VAR_1;
 uint64_t VAR_4 = VAR_3->dev->dma_mask ? ~*VAR_3->dev->dma_mask :
          ~((1ULL << 32) - 1);
 resource_size_t VAR_5 = VAR_3->gmc.aper_base + VAR_3->gmc.aper_size;

 FUNC_2(VAR_2, 0, sizeof(*VAR_2));
 if (!(VAR_3->gmc.aper_base & VAR_4 || VAR_5 & VAR_4)) {
  VAR_2->local_mem_size_public = VAR_3->gmc.visible_vram_size;
  VAR_2->local_mem_size_private = VAR_3->gmc.real_vram_size -
    VAR_3->gmc.visible_vram_size;
 } else {
  VAR_2->local_mem_size_public = 0;
  VAR_2->local_mem_size_private = VAR_3->gmc.real_vram_size;
 }
 VAR_2->vram_width = VAR_3->gmc.vram_width;

 FUNC_3("Address base: %pap limit %pap public 0x%llx private 0x%llx\n",
   &VAR_3->gmc.aper_base, &VAR_5,
   VAR_2->local_mem_size_public,
   VAR_2->local_mem_size_private);

 if (FUNC_1(VAR_3))
  VAR_2->mem_clk_max = VAR_3->clock.default_mclk / 100;
 else if (VAR_3->powerplay.pp_funcs) {
  if (VAR_0 == 1)
   VAR_2->mem_clk_max = 0;
  else
   VAR_2->mem_clk_max = FUNC_0(VAR_3, 0) / 100;
 } else
  VAR_2->mem_clk_max = 100;
}
