
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_6__ {int vram_base_offset; } ;
struct TYPE_5__ {int agp_start; int agp_end; int fb_end; int vram_start; int fb_start; } ;
struct TYPE_4__ {int gpu_addr; } ;
struct amdgpu_device {scalar_t__ asic_type; int rev_id; int dummy_page_addr; TYPE_3__ vm_manager; TYPE_2__ gmc; TYPE_1__ vram_scratch; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_5(struct amdgpu_device *VAR_13)
{
 uint64_t VAR_14;


 FUNC_2(VAR_2, 0, VAR_4, 0);
 FUNC_2(VAR_2, 0, VAR_5, VAR_13->gmc.agp_start >> 24);
 FUNC_2(VAR_2, 0, VAR_6, VAR_13->gmc.agp_end >> 24);


 FUNC_2(VAR_2, 0, VAR_10,
       FUNC_4(VAR_13->gmc.fb_start, VAR_13->gmc.agp_start) >> 18);

 if (VAR_13->asic_type == VAR_1 && VAR_13->rev_id >= 0x8)






  FUNC_2(VAR_2, 0, VAR_9,
        FUNC_3((VAR_13->gmc.fb_end >> 18) + 0x1,
     VAR_13->gmc.agp_end >> 18));
 else
  FUNC_2(VAR_2, 0, VAR_9,
        FUNC_3(VAR_13->gmc.fb_end, VAR_13->gmc.agp_end) >> 18);


 VAR_14 = VAR_13->vram_scratch.gpu_addr - VAR_13->gmc.vram_start
  + VAR_13->vm_manager.vram_base_offset;
 FUNC_1(VAR_2, 0, VAR_7,
       (u32)(VAR_14 >> 12));
 FUNC_1(VAR_2, 0, VAR_8,
       (u32)(VAR_14 >> 44));


 FUNC_1(VAR_2, 0, VAR_12,
       (u32)(VAR_13->dummy_page_addr >> 12));
 FUNC_1(VAR_2, 0, VAR_11,
       (u32)((u64)VAR_13->dummy_page_addr >> 44));

 FUNC_0(VAR_2, 0, VAR_3,
         VAR_0, 1);
}
