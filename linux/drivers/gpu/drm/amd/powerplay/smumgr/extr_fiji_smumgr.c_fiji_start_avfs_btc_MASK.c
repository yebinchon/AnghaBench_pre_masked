
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu7_smumgr {scalar_t__ avfs_btc_param; } ;
struct pp_hwmgr {int device; scalar_t__ smu_backend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct pp_hwmgr*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_4)
{
 int VAR_5 = 0;
 struct smu7_smumgr *VAR_6 = (struct smu7_smumgr *)(VAR_4->smu_backend);

 if (0 != VAR_6->avfs_btc_param) {
  if (0 != FUNC_2(VAR_4,
    VAR_1, VAR_6->avfs_btc_param)) {
   FUNC_1("[AVFS][Fiji_PerformBtc] PerformBTC SMU msg failed");
   VAR_5 = -VAR_0;
  }
 }


 FUNC_0(VAR_4->device, VAR_2, 0x50000000);

 FUNC_0(VAR_4->device, VAR_3, 0xffffffff);

 FUNC_0(VAR_4->device, VAR_3, 0);

 return VAR_5;
}
