
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct pp_hwmgr {int device; int smu_version; int is_kicker; } ;
struct cgs_firmware_info {int image_size; int ucode_start_address; scalar_t__ kptr; int version; int is_kicker; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,struct cgs_firmware_info*) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct pp_hwmgr *VAR_7)
{
 uint32_t VAR_8, VAR_9;
 uint8_t *VAR_10;
 uint32_t VAR_11;

 struct cgs_firmware_info VAR_12 = {0};

 FUNC_1(VAR_7->device, VAR_1, &VAR_12);

 VAR_7->is_kicker = VAR_12.is_kicker;
 VAR_7->smu_version = VAR_12.version;
 VAR_8 = VAR_12.image_size;
 VAR_10 = (uint8_t *)VAR_12.kptr;
 VAR_9 = VAR_12.ucode_start_address;

 if (VAR_8 > VAR_4) {
  FUNC_3("SMC address is beyond the SMC RAM area.\n");
  return -VAR_2;
 }

 FUNC_2(VAR_7->device, VAR_6, VAR_9);
 FUNC_0(VAR_7->device, VAR_3, VAR_0, 1);

 for (; VAR_8 >= 4; VAR_8 -= 4) {
  VAR_11 = (VAR_10[0] << 24) | (VAR_10[1] << 16) | (VAR_10[2] << 8) | VAR_10[3];
  FUNC_2(VAR_7->device, VAR_5, VAR_11);
  VAR_10 += 4;
 }
 FUNC_0(VAR_7->device, VAR_3, VAR_0, 0);

 if (0 != VAR_8) {
  FUNC_3("SMC size must be divisible by 4\n");
  return -VAR_2;
 }

 return 0;
}
