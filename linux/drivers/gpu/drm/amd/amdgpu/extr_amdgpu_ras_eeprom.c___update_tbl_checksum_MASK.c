
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct eeprom_table_record {int dummy; } ;
struct TYPE_2__ {int checksum; } ;
struct amdgpu_ras_eeprom_control {int tbl_byte_sum; TYPE_1__ tbl_hdr; } ;


 scalar_t__ FUNC_0 (struct amdgpu_ras_eeprom_control*,struct eeprom_table_record*,int) ;

__attribute__((used)) static void FUNC_1(struct amdgpu_ras_eeprom_control *VAR_0,
      struct eeprom_table_record *VAR_1, int VAR_2,
      uint32_t VAR_3)
{
 VAR_0->tbl_byte_sum -= VAR_3;
 VAR_0->tbl_byte_sum += FUNC_0(VAR_0, VAR_1, VAR_2);

 VAR_0->tbl_hdr.checksum = 256 - (VAR_0->tbl_byte_sum % 256);
}
