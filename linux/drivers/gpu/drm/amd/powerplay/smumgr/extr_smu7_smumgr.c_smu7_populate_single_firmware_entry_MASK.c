
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct pp_hwmgr {int not_vf; int device; } ;
struct cgs_firmware_info {int image_size; int mc_addr; int fw_version; int member_0; } ;
struct SMU_Entry {int data_size_byte; int flags; scalar_t__ num_register_entries; scalar_t__ meta_data_addr_low; scalar_t__ meta_data_addr_high; int image_addr_low; int image_addr_high; scalar_t__ id; int version; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,struct cgs_firmware_info*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct pp_hwmgr *VAR_2,
      uint32_t VAR_3,
      struct SMU_Entry *VAR_4)
{
 int VAR_5 = 0;
 struct cgs_firmware_info VAR_6 = {0};

 VAR_5 = FUNC_0(VAR_2->device,
    FUNC_2(VAR_3),
    &VAR_6);

 if (!VAR_5) {
  VAR_4->version = VAR_6.fw_version;
  VAR_4->id = (uint16_t)VAR_3;
  VAR_4->image_addr_high = FUNC_3(VAR_6.mc_addr);
  VAR_4->image_addr_low = FUNC_1(VAR_6.mc_addr);
  VAR_4->meta_data_addr_high = 0;
  VAR_4->meta_data_addr_low = 0;


  if (!VAR_2->not_vf)
   VAR_6.image_size -= 20;
  VAR_4->data_size_byte = VAR_6.image_size;
  VAR_4->num_register_entries = 0;
 }

 if ((VAR_3 == VAR_1)
  || (VAR_3 == VAR_0))
  VAR_4->flags = 1;
 else
  VAR_4->flags = 0;

 return 0;
}
