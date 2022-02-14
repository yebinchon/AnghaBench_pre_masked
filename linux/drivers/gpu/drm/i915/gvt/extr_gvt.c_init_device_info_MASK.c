
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int msi_cap; } ;
struct intel_gvt_device_info {int max_support_vgpus; int mmio_size; int gtt_start_offset; int gtt_entry_size; int gtt_entry_size_shift; int gmadr_bytes_in_cmd; int max_surface_size; int msi_cap_offset; scalar_t__ mmio_bar; int cfg_space_size; } ;
struct intel_gvt {TYPE_2__* dev_priv; struct intel_gvt_device_info device_info; } ;
struct TYPE_3__ {struct pci_dev* pdev; } ;
struct TYPE_4__ {TYPE_1__ drm; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct intel_gvt *VAR_1)
{
 struct intel_gvt_device_info *VAR_2 = &VAR_1->device_info;
 struct pci_dev *VAR_3 = VAR_1->dev_priv->drm.pdev;

 VAR_2->max_support_vgpus = 8;
 VAR_2->cfg_space_size = VAR_0;
 VAR_2->mmio_size = 2 * 1024 * 1024;
 VAR_2->mmio_bar = 0;
 VAR_2->gtt_start_offset = 8 * 1024 * 1024;
 VAR_2->gtt_entry_size = 8;
 VAR_2->gtt_entry_size_shift = 3;
 VAR_2->gmadr_bytes_in_cmd = 8;
 VAR_2->max_surface_size = 36 * 1024 * 1024;
 VAR_2->msi_cap_offset = VAR_3->msi_cap;
}
