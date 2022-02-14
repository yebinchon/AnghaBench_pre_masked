
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u64 ;
struct sysinfo {int mem_unit; scalar_t__ totalram; } ;
struct TYPE_12__ {int gds_size; int gws_size; int oa_size; } ;
struct TYPE_13__ {int no_retry; } ;
struct TYPE_11__ {int initialized; TYPE_6__ bdev; int aper_base_kaddr; int gtt_window_lock; } ;
struct TYPE_10__ {int real_vram_size; int visible_vram_size; int mc_vram_size; int stolen_size; int aper_base; } ;
struct amdgpu_device {TYPE_5__ gds; TYPE_4__ mman; TYPE_3__ gmc; int stolen_vga_memory; int dev; TYPE_2__* ddev; } ;
struct TYPE_9__ {TYPE_1__* anon_inode; } ;
struct TYPE_8__ {int i_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct amdgpu_device*,int ,int ,int ,int *,int *,void**) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*,int) ;
 scalar_t__ VAR_11 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct sysinfo*) ;
 int FUNC_12 (TYPE_6__*,int *,int ,int ) ;
 int FUNC_13 (TYPE_6__*,int ,int) ;

int FUNC_14(struct amdgpu_device *VAR_12)
{
 uint64_t VAR_13;
 int VAR_14;
 u64 VAR_15;
 void *VAR_16;

 FUNC_10(&VAR_12->mman.gtt_window_lock);


 VAR_14 = FUNC_12(&VAR_12->mman.bdev,
          &VAR_9,
          VAR_12->ddev->anon_inode->i_mapping,
          FUNC_6(VAR_12->dev));
 if (VAR_14) {
  FUNC_0("failed initializing buffer object driver(%d).\n", VAR_14);
  return VAR_14;
 }
 VAR_12->mman.initialized = 1;


 VAR_12->mman.bdev.no_retry = 1;


 VAR_14 = FUNC_13(&VAR_12->mman.bdev, VAR_8,
    VAR_12->gmc.real_vram_size >> VAR_5);
 if (VAR_14) {
  FUNC_0("Failed initializing VRAM heap.\n");
  return VAR_14;
 }


 VAR_15 = (u64)VAR_11 * 1024 * 1024;
 if (VAR_11 > 0 &&
     VAR_15 <= VAR_12->gmc.visible_vram_size)
  VAR_12->gmc.visible_vram_size = VAR_15;


 FUNC_5(VAR_12, 0);
 VAR_14 = FUNC_4(VAR_12);
 if (VAR_14) {
  return VAR_14;
 }





 VAR_14 = FUNC_2(VAR_12, VAR_12->gmc.stolen_size, VAR_6,
        VAR_1,
        &VAR_12->stolen_vga_memory,
        ((void*)0), &VAR_16);
 if (VAR_14)
  return VAR_14;
 FUNC_1("amdgpu: %uM of VRAM memory ready\n",
   (unsigned) (VAR_12->gmc.real_vram_size / (1024 * 1024)));



 if (VAR_10 == -1) {
  struct sysinfo VAR_17;

  FUNC_11(&VAR_17);
  VAR_13 = FUNC_9(FUNC_8((VAR_0 << 20),
          VAR_12->gmc.mc_vram_size),
          ((uint64_t)VAR_17.totalram * VAR_17.mem_unit * 3/4));
 }
 else
  VAR_13 = (uint64_t)VAR_10 << 20;


 VAR_14 = FUNC_13(&VAR_12->mman.bdev, VAR_7, VAR_13 >> VAR_5);
 if (VAR_14) {
  FUNC_0("Failed initializing GTT heap.\n");
  return VAR_14;
 }
 FUNC_1("amdgpu: %uM of GTT memory ready.\n",
   (unsigned)(VAR_13 / (1024 * 1024)));


 VAR_14 = FUNC_13(&VAR_12->mman.bdev, VAR_2,
      VAR_12->gds.gds_size);
 if (VAR_14) {
  FUNC_0("Failed initializing GDS heap.\n");
  return VAR_14;
 }

 VAR_14 = FUNC_13(&VAR_12->mman.bdev, VAR_3,
      VAR_12->gds.gws_size);
 if (VAR_14) {
  FUNC_0("Failed initializing gws heap.\n");
  return VAR_14;
 }

 VAR_14 = FUNC_13(&VAR_12->mman.bdev, VAR_4,
      VAR_12->gds.oa_size);
 if (VAR_14) {
  FUNC_0("Failed initializing oa heap.\n");
  return VAR_14;
 }


 VAR_14 = FUNC_3(VAR_12);
 if (VAR_14) {
  FUNC_0("Failed to init debugfs\n");
  return VAR_14;
 }
 return 0;
}
