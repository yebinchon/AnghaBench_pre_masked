
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_ras_eeprom_table_header {int checksum; int tbl_size; int first_rec_offset; int version; int header; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct amdgpu_ras_eeprom_table_header *VAR_0,
       unsigned char *VAR_1)
{
 uint32_t *VAR_2 = (uint32_t *) VAR_1;

 VAR_2[0] = FUNC_0(VAR_0->header);
 VAR_2[1] = FUNC_0(VAR_0->version);
 VAR_2[2] = FUNC_0(VAR_0->first_rec_offset);
 VAR_2[3] = FUNC_0(VAR_0->tbl_size);
 VAR_2[4] = FUNC_0(VAR_0->checksum);
}
