
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct i2c_msg {int len; unsigned char* buf; int flags; int addr; } ;
struct amdgpu_ras_eeprom_control {int eeprom_accessor; int tbl_hdr; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,unsigned char*) ;
 int FUNC_2 (int *,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_ras_eeprom_control *VAR_4,
     unsigned char *VAR_5)
{
 int VAR_6 = 0;
 struct i2c_msg VAR_7 = {
   .addr = VAR_2,
   .flags = 0,
   .len = VAR_0 + VAR_3,
   .buf = VAR_5,
 };


 *(uint16_t *)VAR_5 = VAR_1;
 FUNC_1(&VAR_4->tbl_hdr, VAR_5 + VAR_0);

 VAR_6 = FUNC_2(&VAR_4->eeprom_accessor, &VAR_7, 1);
 if (VAR_6 < 1)
  FUNC_0("Failed to write EEPROM table header, ret:%d", VAR_6);

 return VAR_6;
}
