
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct card_info {int pll_write; int pll_read; int mc_write; int mc_read; void* ioreg_write; void* ioreg_read; void* reg_write; void* reg_read; int dev; } ;
struct TYPE_3__ {TYPE_2__* atom_context; struct card_info* atom_card_info; } ;
struct amdgpu_device {int dev; scalar_t__ is_atom_fw; TYPE_1__ mode_info; int bios; scalar_t__ rio_mem; int ddev; } ;
struct TYPE_4__ {int mutex; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_2 (struct card_info*,int ) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (struct amdgpu_device*) ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (int ,int *) ;
 struct card_info* FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct amdgpu_device *VAR_11)
{
 struct card_info *VAR_12 =
     FUNC_9(sizeof(struct card_info), VAR_1);
 int VAR_13;

 if (!VAR_12)
  return -VAR_0;

 VAR_11->mode_info.atom_card_info = VAR_12;
 VAR_12->dev = VAR_11->ddev;
 VAR_12->reg_read = VAR_8;
 VAR_12->reg_write = VAR_9;

 if (VAR_11->rio_mem) {
  VAR_12->ioreg_read = VAR_2;
  VAR_12->ioreg_write = VAR_3;
 } else {
  FUNC_0("PCI I/O BAR is not found. Using MMIO to access ATOM BIOS\n");
  VAR_12->ioreg_read = VAR_8;
  VAR_12->ioreg_write = VAR_9;
 }
 VAR_12->mc_read = VAR_4;
 VAR_12->mc_write = VAR_5;
 VAR_12->pll_read = VAR_6;
 VAR_12->pll_write = VAR_7;

 VAR_11->mode_info.atom_context = FUNC_2(VAR_12, VAR_11->bios);
 if (!VAR_11->mode_info.atom_context) {
  FUNC_4(VAR_11);
  return -VAR_0;
 }

 FUNC_10(&VAR_11->mode_info.atom_context->mutex);
 if (VAR_11->is_atom_fw) {
  FUNC_7(VAR_11);
  FUNC_6(VAR_11);
 } else {
  FUNC_5(VAR_11);
  FUNC_3(VAR_11);
 }

 VAR_13 = FUNC_8(VAR_11->dev, &VAR_10);
 if (VAR_13) {
  FUNC_1("Failed to create device file for VBIOS version\n");
  return VAR_13;
 }

 return 0;
}
