
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int vram_width; unsigned long long mc_vram_size; unsigned long long real_vram_size; unsigned long long gart_size; int aper_size; int visible_vram_size; int aper_base; } ;
struct amdgpu_device {int flags; int asic_type; TYPE_1__ gmc; int pdev; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long long FUNC_0 (int ) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int VAR_4 ;
 int FUNC_2 (struct amdgpu_device*,TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct amdgpu_device *VAR_8)
{

 u32 VAR_9;
 int VAR_10, VAR_11;
 int VAR_12;

 VAR_9 = FUNC_0(VAR_6);
 if (VAR_9 & (1 << 11)) {
  VAR_10 = 16;
 } else if (VAR_9 & VAR_1) {
  VAR_10 = 64;
 } else {
  VAR_10 = 32;
 }
 VAR_9 = FUNC_0(VAR_7);
 switch ((VAR_9 & VAR_2) >> VAR_3) {
 case 0:
 default:
  VAR_11 = 1;
  break;
 case 1:
  VAR_11 = 2;
  break;
 case 2:
  VAR_11 = 4;
  break;
 case 3:
  VAR_11 = 8;
  break;
 case 4:
  VAR_11 = 3;
  break;
 case 5:
  VAR_11 = 6;
  break;
 case 6:
  VAR_11 = 10;
  break;
 case 7:
  VAR_11 = 12;
  break;
 case 8:
  VAR_11 = 16;
  break;
 }
 VAR_8->gmc.vram_width = VAR_11 * VAR_10;

 VAR_8->gmc.mc_vram_size = FUNC_0(VAR_5) * 1024ULL * 1024ULL;
 VAR_8->gmc.real_vram_size = FUNC_0(VAR_5) * 1024ULL * 1024ULL;

 if (!(VAR_8->flags & VAR_0)) {
  VAR_12 = FUNC_1(VAR_8);
  if (VAR_12)
   return VAR_12;
 }
 VAR_8->gmc.aper_base = FUNC_4(VAR_8->pdev, 0);
 VAR_8->gmc.aper_size = FUNC_3(VAR_8->pdev, 0);
 VAR_8->gmc.visible_vram_size = VAR_8->gmc.aper_size;


 if (VAR_4 == -1) {
  switch (VAR_8->asic_type) {
  case 132:
  default:
   VAR_8->gmc.gart_size = 256ULL << 20;
   break;
  case 128:
  case 129:
  case 130:
  case 131:
   VAR_8->gmc.gart_size = 1024ULL << 20;
   break;
  }
 } else {
  VAR_8->gmc.gart_size = (u64)VAR_4 << 20;
 }

 FUNC_2(VAR_8, &VAR_8->gmc);

 return 0;
}
