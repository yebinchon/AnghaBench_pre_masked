
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int real_vram_size; int gtt_size; int visible_vram_size; } ;
struct TYPE_9__ {int initialized; int bdev; } ;
struct radeon_device {TYPE_5__ mc; TYPE_4__ mman; int stolen_vga_memory; TYPE_3__* pdev; TYPE_2__* ddev; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {TYPE_1__* anon_inode; } ;
struct TYPE_6__ {int i_mapping; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct radeon_device*,int,int ,int,int ,int ,int *,int *,int *) ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*,int ) ;
 int FUNC_10 (int *,int *,int ,int ) ;
 int FUNC_11 (int *,int ,int) ;

int FUNC_12(struct radeon_device *VAR_6)
{
 int VAR_7;


 VAR_7 = FUNC_10(&VAR_6->mman.bdev,
          &VAR_5,
          VAR_6->ddev->anon_inode->i_mapping,
          FUNC_2(&VAR_6->pdev->dev));
 if (VAR_7) {
  FUNC_0("failed initializing buffer object driver(%d).\n", VAR_7);
  return VAR_7;
 }
 VAR_6->mman.initialized = 1;
 VAR_7 = FUNC_11(&VAR_6->mman.bdev, VAR_4,
    VAR_6->mc.real_vram_size >> VAR_0);
 if (VAR_7) {
  FUNC_0("Failed initializing VRAM heap.\n");
  return VAR_7;
 }

 FUNC_9(VAR_6, VAR_6->mc.visible_vram_size);

 VAR_7 = FUNC_3(VAR_6, 256 * 1024, VAR_1, 1,
        VAR_2, 0, ((void*)0),
        ((void*)0), &VAR_6->stolen_vga_memory);
 if (VAR_7) {
  return VAR_7;
 }
 VAR_7 = FUNC_5(VAR_6->stolen_vga_memory, 0);
 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_4(VAR_6->stolen_vga_memory, VAR_2, ((void*)0));
 FUNC_7(VAR_6->stolen_vga_memory);
 if (VAR_7) {
  FUNC_6(&VAR_6->stolen_vga_memory);
  return VAR_7;
 }
 FUNC_1("radeon: %uM of VRAM memory ready\n",
   (unsigned) (VAR_6->mc.real_vram_size / (1024 * 1024)));
 VAR_7 = FUNC_11(&VAR_6->mman.bdev, VAR_3,
    VAR_6->mc.gtt_size >> VAR_0);
 if (VAR_7) {
  FUNC_0("Failed initializing GTT heap.\n");
  return VAR_7;
 }
 FUNC_1("radeon: %uM of GTT memory ready.\n",
   (unsigned)(VAR_6->mc.gtt_size / (1024 * 1024)));

 VAR_7 = FUNC_8(VAR_6);
 if (VAR_7) {
  FUNC_0("Failed to init debugfs\n");
  return VAR_7;
 }
 return 0;
}
