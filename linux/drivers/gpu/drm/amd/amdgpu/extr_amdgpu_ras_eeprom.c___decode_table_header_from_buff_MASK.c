
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_ras_eeprom_table_header {void* checksum; void* tbl_size; void* first_rec_offset; void* version; void* header; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct amdgpu_ras_eeprom_table_header *VAR_0,
       unsigned char *VAR_1)
{
 uint32_t *VAR_2 = (uint32_t *)VAR_1;

 VAR_0->header = FUNC_0(VAR_2[0]);
 VAR_0->version = FUNC_0(VAR_2[1]);
 VAR_0->first_rec_offset = FUNC_0(VAR_2[2]);
 VAR_0->tbl_size = FUNC_0(VAR_2[3]);
 VAR_0->checksum = FUNC_0(VAR_2[4]);
}
