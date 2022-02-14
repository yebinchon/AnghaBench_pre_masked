
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_16__ {int gpu_vm_support; int fbc_support; int multi_mon_pp_mclk_switch; int power_down_display_on_boot; } ;
struct TYPE_14__ {int atombios_base_address; int vram_width; int hw_internal_rev; int pci_revision_id; int chip_family; } ;
struct dc_init_data {int soc_bounding_box; TYPE_4__ flags; int dce_environment; scalar_t__ cgs_device; struct amdgpu_device* driver; TYPE_2__ asic_id; } ;
struct TYPE_20__ {int display_indexes_num; TYPE_9__* dc; int freesync_module; int soc_bounding_box; scalar_t__ cgs_device; int audio_lock; int dc_lock; struct amdgpu_device* adev; TYPE_10__* ddev; } ;
struct TYPE_17__ {int num_crtc; TYPE_3__* atom_context; } ;
struct TYPE_13__ {int vram_width; } ;
struct amdgpu_device {int flags; scalar_t__ asic_type; TYPE_8__ dm; TYPE_10__* ddev; TYPE_5__ mode_info; TYPE_1__ gmc; int external_rev_id; int rev_id; int family; } ;
typedef int init_data ;
struct TYPE_19__ {int max_cursor_size; } ;
struct TYPE_21__ {TYPE_7__ caps; } ;
struct TYPE_18__ {int cursor_height; int cursor_width; } ;
struct TYPE_15__ {int bios; } ;
struct TYPE_12__ {TYPE_6__ mode_config; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (struct amdgpu_device*) ;
 int VAR_8 ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (struct amdgpu_device*) ;
 scalar_t__ FUNC_7 (struct amdgpu_device*) ;
 TYPE_9__* FUNC_8 (struct dc_init_data*) ;
 scalar_t__ FUNC_9 (TYPE_10__*,int ) ;
 scalar_t__ FUNC_10 (struct amdgpu_device*) ;
 int FUNC_11 (struct dc_init_data*,int ,int) ;
 int FUNC_12 (TYPE_9__*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct amdgpu_device *VAR_9)
{
 struct dc_init_data VAR_10;
 VAR_9->dm.ddev = VAR_9->ddev;
 VAR_9->dm.adev = VAR_9;


 FUNC_11(&VAR_10, 0, sizeof(VAR_10));

 FUNC_13(&VAR_9->dm.dc_lock);
 FUNC_13(&VAR_9->dm.audio_lock);

 if(FUNC_7(VAR_9)) {
  FUNC_1("amdgpu: failed to initialize DM IRQ support.\n");
  goto error;
 }

 VAR_10.asic_id.chip_family = VAR_9->family;

 VAR_10.asic_id.pci_revision_id = VAR_9->rev_id;
 VAR_10.asic_id.hw_internal_rev = VAR_9->external_rev_id;

 VAR_10.asic_id.vram_width = VAR_9->gmc.vram_width;

 VAR_10.asic_id.atombios_base_address =
  VAR_9->mode_info.atom_context->bios;

 VAR_10.driver = VAR_9;

 VAR_9->dm.cgs_device = FUNC_3(VAR_9);

 if (!VAR_9->dm.cgs_device) {
  FUNC_1("amdgpu: failed to create cgs device.\n");
  goto error;
 }

 VAR_10.cgs_device = VAR_9->dm.cgs_device;

 VAR_10.dce_environment = VAR_3;




 if (VAR_9->flags & VAR_0 &&
     VAR_9->asic_type >= VAR_1 &&
     VAR_9->asic_type <= VAR_2)
  VAR_10.flags.gpu_vm_support = 1;

 if (VAR_8 & VAR_4)
  VAR_10.flags.fbc_support = 1;

 if (VAR_8 & VAR_5)
  VAR_10.flags.multi_mon_pp_mclk_switch = 1;

 VAR_10.flags.power_down_display_on_boot = 1;






 VAR_9->dm.dc = FUNC_8(&VAR_10);

 if (VAR_9->dm.dc) {
  FUNC_2("Display Core initialized with v%s!\n", VAR_6);
 } else {
  FUNC_2("Display Core failed to initialize with v%s!\n", VAR_6);
  goto error;
 }

 VAR_9->dm.freesync_module = FUNC_12(VAR_9->dm.dc);
 if (!VAR_9->dm.freesync_module) {
  FUNC_1(
  "amdgpu: failed to initialize freesync_module.\n");
 } else
  FUNC_0("amdgpu: freesync_module init done %p.\n",
    VAR_9->dm.freesync_module);

 FUNC_5();

 if (FUNC_6(VAR_9)) {
  FUNC_1(
  "amdgpu: failed to initialize sw for display support.\n");
  goto error;
 }


 VAR_9->mode_info.num_crtc = VAR_9->dm.display_indexes_num;




 VAR_9->ddev->mode_config.cursor_width = VAR_9->dm.dc->caps.max_cursor_size;
 VAR_9->ddev->mode_config.cursor_height = VAR_9->dm.dc->caps.max_cursor_size;

 if (FUNC_9(VAR_9->ddev, VAR_9->dm.display_indexes_num)) {
  FUNC_1(
  "amdgpu: failed to initialize sw for display support.\n");
  goto error;
 }






 FUNC_0("KMS initialized.\n");

 return 0;
error:
 FUNC_4(VAR_9);

 return -VAR_7;
}
