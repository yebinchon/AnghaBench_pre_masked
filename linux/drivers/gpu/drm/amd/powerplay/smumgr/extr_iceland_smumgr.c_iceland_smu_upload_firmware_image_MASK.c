
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct pp_hwmgr {int * device; int smu_version; } ;
struct cgs_firmware_info {int image_size; int ucode_start_address; scalar_t__ kptr; int version; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pp_hwmgr*,int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ,struct cgs_firmware_info*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ,int) ;
 int FUNC_4 (struct pp_hwmgr*) ;
 int FUNC_5 (struct pp_hwmgr*) ;
 int FUNC_6 (struct pp_hwmgr*,int,int *,int,int ) ;
 int VAR_7 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct pp_hwmgr *VAR_8)
{
 uint32_t VAR_9;
 struct cgs_firmware_info VAR_10 = {0};

 if (VAR_8 == ((void*)0) || VAR_8->device == ((void*)0))
  return -VAR_1;


 FUNC_1(VAR_8->device,
  FUNC_8(VAR_5), &VAR_10);

 if (VAR_10.image_size & 3) {
  FUNC_7("[ powerplay ] SMC ucode is not 4 bytes aligned\n");
  return -VAR_1;
 }

 if (VAR_10.image_size > VAR_2) {
  FUNC_7("[ powerplay ] SMC address is beyond the SMC RAM area\n");
  return -VAR_1;
 }
 VAR_8->smu_version = VAR_10.version;

 FUNC_0(VAR_8, VAR_4,
      VAR_3, VAR_6, 0);


 VAR_9 = FUNC_2(VAR_8->device, VAR_0,
        VAR_7);
 FUNC_3(VAR_8->device, VAR_0,
          VAR_7, VAR_9 | 1);


 FUNC_5(VAR_8);


 FUNC_4(VAR_8);
 FUNC_6(VAR_8, VAR_10.image_size,
    (uint8_t *)VAR_10.kptr, VAR_2,
    VAR_10.ucode_start_address);

 return 0;
}
