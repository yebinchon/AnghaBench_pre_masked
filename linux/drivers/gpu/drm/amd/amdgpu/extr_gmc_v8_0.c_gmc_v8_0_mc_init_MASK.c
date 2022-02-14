
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef unsigned long long u32 ;
struct TYPE_2__ {int vram_width; unsigned long long mc_vram_size; unsigned long long real_vram_size; int aper_base; unsigned long long aper_size; unsigned long long visible_vram_size; unsigned long long gart_size; } ;
struct amdgpu_device {int flags; int asic_type; TYPE_1__ gmc; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned long long,int ,int ) ;
 unsigned long long FUNC_1 (int ) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int VAR_5 ;
 int FUNC_4 (struct amdgpu_device*,TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long long FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_device *VAR_10)
{
 int VAR_11;

 VAR_10->gmc.vram_width = FUNC_2(VAR_10);
 if (!VAR_10->gmc.vram_width) {
  u32 VAR_12;
  int VAR_13, VAR_14;


  VAR_12 = FUNC_1(VAR_7);
  if (FUNC_0(VAR_12, VAR_2, VAR_1)) {
   VAR_13 = 64;
  } else {
   VAR_13 = 32;
  }
  VAR_12 = FUNC_1(VAR_8);
  switch (FUNC_0(VAR_12, VAR_3, VAR_4)) {
  case 0:
  default:
   VAR_14 = 1;
   break;
  case 1:
   VAR_14 = 2;
   break;
  case 2:
   VAR_14 = 4;
   break;
  case 3:
   VAR_14 = 8;
   break;
  case 4:
   VAR_14 = 3;
   break;
  case 5:
   VAR_14 = 6;
   break;
  case 6:
   VAR_14 = 10;
   break;
  case 7:
   VAR_14 = 12;
   break;
  case 8:
   VAR_14 = 16;
   break;
  }
  VAR_10->gmc.vram_width = VAR_14 * VAR_13;
 }

 VAR_10->gmc.mc_vram_size = FUNC_1(VAR_6) * 1024ULL * 1024ULL;
 VAR_10->gmc.real_vram_size = FUNC_1(VAR_6) * 1024ULL * 1024ULL;

 if (!(VAR_10->flags & VAR_0)) {
  VAR_11 = FUNC_3(VAR_10);
  if (VAR_11)
   return VAR_11;
 }
 VAR_10->gmc.aper_base = FUNC_6(VAR_10->pdev, 0);
 VAR_10->gmc.aper_size = FUNC_5(VAR_10->pdev, 0);
 VAR_10->gmc.visible_vram_size = VAR_10->gmc.aper_size;
 if (VAR_10->gmc.visible_vram_size > VAR_10->gmc.real_vram_size)
  VAR_10->gmc.visible_vram_size = VAR_10->gmc.real_vram_size;


 if (VAR_5 == -1) {
  switch (VAR_10->asic_type) {
  case 133:
  case 132:
  case 131:
  case 128:
  default:
   VAR_10->gmc.gart_size = 256ULL << 20;
   break;
  case 129:
  case 134:
  case 135:
  case 130:
   VAR_10->gmc.gart_size = 1024ULL << 20;
   break;
  }
 } else {
  VAR_10->gmc.gart_size = (u64)VAR_5 << 20;
 }

 FUNC_4(VAR_10, &VAR_10->gmc);

 return 0;
}
