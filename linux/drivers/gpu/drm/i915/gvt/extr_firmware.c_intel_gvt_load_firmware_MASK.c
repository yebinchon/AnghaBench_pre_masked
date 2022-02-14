
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int vendor; int device; int revision; int dev; } ;
struct intel_gvt_firmware {char* cfg_space; char* mmio; int firmware_loaded; } ;
struct intel_gvt_device_info {int mmio_size; int cfg_space_size; } ;
struct intel_gvt {struct intel_gvt_firmware firmware; struct drm_i915_private* dev_priv; struct intel_gvt_device_info device_info; } ;
struct gvt_firmware_header {int mmio_size; scalar_t__ mmio_offset; int cfg_space_size; scalar_t__ cfg_space_offset; } ;
struct firmware {scalar_t__ data; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;
struct drm_i915_private {TYPE_1__ drm; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct intel_gvt*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,scalar_t__,int ) ;
 int FUNC_5 (struct firmware const*) ;
 int FUNC_6 (struct firmware const**,char*,int *) ;
 int FUNC_7 (char*,char*,char*,int,int,int) ;
 int FUNC_8 (struct intel_gvt*,struct firmware const*) ;

int FUNC_9(struct intel_gvt *VAR_4)
{
 struct intel_gvt_device_info *VAR_5 = &VAR_4->device_info;
 struct drm_i915_private *VAR_6 = VAR_4->dev_priv;
 struct pci_dev *VAR_7 = VAR_6->drm.pdev;
 struct intel_gvt_firmware *VAR_8 = &VAR_4->firmware;
 struct gvt_firmware_header *VAR_9;
 const struct firmware *VAR_10;
 char *VAR_11;
 void *VAR_12;
 int VAR_13;

 VAR_11 = FUNC_3(VAR_3, VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_12 = FUNC_3(VAR_5->cfg_space_size, VAR_1);
 if (!VAR_12) {
  FUNC_2(VAR_11);
  return -VAR_0;
 }

 VAR_8->cfg_space = VAR_12;

 VAR_12 = FUNC_3(VAR_5->mmio_size, VAR_1);
 if (!VAR_12) {
  FUNC_2(VAR_11);
  FUNC_2(VAR_8->cfg_space);
  return -VAR_0;
 }

 VAR_8->mmio = VAR_12;

 FUNC_7(VAR_11, "%s/vid_0x%04x_did_0x%04x_rid_0x%02x.golden_hw_state",
   VAR_2, VAR_7->vendor, VAR_7->device,
   VAR_7->revision);

 FUNC_1("request hw state firmware %s...\n", VAR_11);

 VAR_13 = FUNC_6(&VAR_10, VAR_11, &VAR_6->drm.pdev->dev);
 FUNC_2(VAR_11);

 if (VAR_13)
  goto expose_firmware;

 FUNC_1("success.\n");

 VAR_13 = FUNC_8(VAR_4, VAR_10);
 if (VAR_13)
  goto out_free_fw;

 FUNC_1("verified.\n");

 VAR_9 = (struct gvt_firmware_header *)VAR_10->data;

 FUNC_4(VAR_8->cfg_space, VAR_10->data + VAR_9->cfg_space_offset,
        VAR_9->cfg_space_size);
 FUNC_4(VAR_8->mmio, VAR_10->data + VAR_9->mmio_offset,
        VAR_9->mmio_size);

 FUNC_5(VAR_10);
 VAR_8->firmware_loaded = 1;
 return 0;

out_free_fw:
 FUNC_5(VAR_10);
expose_firmware:
 FUNC_0(VAR_4);
 return 0;
}
