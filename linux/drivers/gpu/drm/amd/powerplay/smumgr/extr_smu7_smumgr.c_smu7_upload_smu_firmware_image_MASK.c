
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smu7_smumgr {int security_hard_key; } ;
struct pp_hwmgr {int smu_version; int is_kicker; int device; scalar_t__ smu_backend; } ;
struct cgs_firmware_info {scalar_t__ kptr; int image_size; int version; int is_kicker; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct cgs_firmware_info*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pp_hwmgr*,int ,int *,int ) ;

int FUNC_3(struct pp_hwmgr *VAR_3)
{
 int VAR_4 = 0;
 struct smu7_smumgr *VAR_5 = (struct smu7_smumgr *)(VAR_3->smu_backend);

 struct cgs_firmware_info VAR_6 = {0};

 if (VAR_5->security_hard_key == 1)
  FUNC_0(VAR_3->device,
   FUNC_1(VAR_1), &VAR_6);
 else
  FUNC_0(VAR_3->device,
   FUNC_1(VAR_2), &VAR_6);

 VAR_3->is_kicker = VAR_6.is_kicker;
 VAR_3->smu_version = VAR_6.version;
 VAR_4 = FUNC_2(VAR_3, VAR_6.image_size, (uint32_t *)VAR_6.kptr, VAR_0);

 return VAR_4;
}
