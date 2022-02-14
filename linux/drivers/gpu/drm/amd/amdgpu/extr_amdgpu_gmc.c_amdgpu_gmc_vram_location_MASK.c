
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ num_physical_nodes; } ;
struct amdgpu_gmc {int mc_vram_size; int real_vram_size; scalar_t__ vram_end; scalar_t__ vram_start; scalar_t__ fb_end; scalar_t__ fb_start; TYPE_1__ xgmi; } ;
struct amdgpu_device {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int,scalar_t__,scalar_t__,int) ;

void FUNC_1(struct amdgpu_device *VAR_1, struct amdgpu_gmc *VAR_2,
         u64 VAR_3)
{
 uint64_t VAR_4 = (uint64_t)VAR_0 << 20;

 VAR_2->vram_start = VAR_3;
 VAR_2->vram_end = VAR_2->vram_start + VAR_2->mc_vram_size - 1;
 if (VAR_4 && VAR_4 < VAR_2->real_vram_size)
  VAR_2->real_vram_size = VAR_4;

 if (VAR_2->xgmi.num_physical_nodes == 0) {
  VAR_2->fb_start = VAR_2->vram_start;
  VAR_2->fb_end = VAR_2->vram_end;
 }
 FUNC_0(VAR_1->dev, "VRAM: %lluM 0x%016llX - 0x%016llX (%lluM used)\n",
   VAR_2->mc_vram_size >> 20, VAR_2->vram_start,
   VAR_2->vram_end, VAR_2->real_vram_size >> 20);
}
