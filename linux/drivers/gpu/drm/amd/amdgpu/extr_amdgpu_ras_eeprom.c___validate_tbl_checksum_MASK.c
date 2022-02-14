
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eeprom_table_record {int dummy; } ;
struct TYPE_2__ {int checksum; } ;
struct amdgpu_ras_eeprom_control {int tbl_byte_sum; TYPE_1__ tbl_hdr; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct amdgpu_ras_eeprom_control*,struct eeprom_table_record*,int) ;

__attribute__((used)) static bool FUNC_2(struct amdgpu_ras_eeprom_control *VAR_0,
       struct eeprom_table_record *VAR_1, int VAR_2)
{
 VAR_0->tbl_byte_sum = FUNC_1(VAR_0, VAR_1, VAR_2);

 if (VAR_0->tbl_hdr.checksum + (VAR_0->tbl_byte_sum % 256) != 256) {
  FUNC_0("Checksum mismatch, checksum: %u ", VAR_0->tbl_hdr.checksum);
  return 0;
 }

 return 1;
}
