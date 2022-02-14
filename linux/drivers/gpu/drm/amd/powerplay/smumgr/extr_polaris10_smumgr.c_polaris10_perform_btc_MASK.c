
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu7_smumgr {int avfs_btc_param; } ;
struct pp_hwmgr {int device; scalar_t__ smu_backend; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct pp_hwmgr*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_3)
{
 int VAR_4 = 0;
 struct smu7_smumgr *VAR_5 = (struct smu7_smumgr *)(VAR_3->smu_backend);

 if (0 != VAR_5->avfs_btc_param) {
  if (0 != FUNC_2(VAR_3, VAR_0, VAR_5->avfs_btc_param)) {
   FUNC_1("[AVFS][SmuPolaris10_PerformBtc] PerformBTC SMU msg failed");
   VAR_4 = -1;
  }
 }
 if (VAR_5->avfs_btc_param > 1) {


  FUNC_0(VAR_3->device, VAR_1, 0x50000000);

  FUNC_0(VAR_3->device, VAR_2, 0xffffffff);
  FUNC_0(VAR_3->device, VAR_2, 0);
 }
 return VAR_4;
}
