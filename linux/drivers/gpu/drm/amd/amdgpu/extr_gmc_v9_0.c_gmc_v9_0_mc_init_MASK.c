
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_6__ {int vram_width; unsigned long long mc_vram_size; unsigned long long real_vram_size; unsigned long long aper_size; unsigned long long visible_vram_size; unsigned long long gart_size; int aper_base; } ;
struct amdgpu_device {int flags; int asic_type; TYPE_3__ gmc; int pdev; TYPE_2__* nbio_funcs; TYPE_1__* df_funcs; } ;
struct TYPE_5__ {unsigned long long (* get_memsize ) (struct amdgpu_device*) ;} ;
struct TYPE_4__ {int (* get_hbm_channel_number ) (struct amdgpu_device*) ;} ;


 int VAR_0 ;






 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*,TYPE_3__*) ;
 unsigned long long FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct amdgpu_device*) ;
 unsigned long long FUNC_8 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_9(struct amdgpu_device *VAR_3)
{
 int VAR_4, VAR_5;
 int VAR_6;

 if (FUNC_2(VAR_3)) {




  VAR_3->gmc.vram_width = 2048;
 } else if (VAR_1 != 1) {
  VAR_3->gmc.vram_width = FUNC_0(VAR_3);
 }

 if (!VAR_3->gmc.vram_width) {

  if (VAR_3->flags & VAR_0)
   VAR_4 = 64;
  else
   VAR_4 = 128;

  VAR_5 = VAR_3->df_funcs->get_hbm_channel_number(VAR_3);
  VAR_3->gmc.vram_width = VAR_5 * VAR_4;
 }


 VAR_3->gmc.mc_vram_size =
  VAR_3->nbio_funcs->get_memsize(VAR_3) * 1024ULL * 1024ULL;
 VAR_3->gmc.real_vram_size = VAR_3->gmc.mc_vram_size;

 if (!(VAR_3->flags & VAR_0)) {
  VAR_6 = FUNC_1(VAR_3);
  if (VAR_6)
   return VAR_6;
 }
 VAR_3->gmc.aper_base = FUNC_6(VAR_3->pdev, 0);
 VAR_3->gmc.aper_size = FUNC_5(VAR_3->pdev, 0);
 VAR_3->gmc.visible_vram_size = VAR_3->gmc.aper_size;
 if (VAR_3->gmc.visible_vram_size > VAR_3->gmc.real_vram_size)
  VAR_3->gmc.visible_vram_size = VAR_3->gmc.real_vram_size;


 if (VAR_2 == -1) {
  switch (VAR_3->asic_type) {
  case 130:
  case 129:
  case 128:
  case 133:
  default:
   VAR_3->gmc.gart_size = 512ULL << 20;
   break;
  case 132:
  case 131:
   VAR_3->gmc.gart_size = 1024ULL << 20;
   break;
  }
 } else {
  VAR_3->gmc.gart_size = (u64)VAR_2 << 20;
 }

 FUNC_4(VAR_3, &VAR_3->gmc);

 return 0;
}
