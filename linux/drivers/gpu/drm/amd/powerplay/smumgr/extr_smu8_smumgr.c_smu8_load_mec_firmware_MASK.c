
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smu8_smumgr {int dummy; } ;
struct pp_hwmgr {int * device; struct smu8_smumgr* smu_backend; } ;
struct cgs_firmware_info {int mc_addr; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ,int ,int) ;
 int VAR_13 ;
 int FUNC_2 (int *,int ,struct cgs_firmware_info*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct pp_hwmgr *VAR_18)
{
 uint32_t VAR_19;
 uint32_t VAR_20;
 int VAR_21 = 0;
 struct cgs_firmware_info VAR_22 = {0};
 struct smu8_smumgr *VAR_23;

 if (VAR_18 == ((void*)0) || VAR_18->device == ((void*)0))
  return -VAR_7;

 VAR_23 = VAR_18->smu_backend;
 VAR_21 = FUNC_2(VAR_18->device,
      VAR_2, &VAR_22);

 if (VAR_21)
  return -VAR_7;


 VAR_20 = FUNC_3(VAR_18->device,
     VAR_17);
 VAR_20 = FUNC_1(VAR_20, VAR_6, VAR_10, 1);
 VAR_20 = FUNC_1(VAR_20, VAR_6, VAR_11, 1);
 FUNC_4(VAR_18->device, VAR_17, VAR_20);

 VAR_20 = FUNC_3(VAR_18->device,
     VAR_14);

 VAR_20 = FUNC_1(VAR_20, VAR_3, VAR_13, 0);
 VAR_20 = FUNC_1(VAR_20, VAR_3, VAR_0, 0);
 VAR_20 = FUNC_1(VAR_20, VAR_3, VAR_1, 0);
 VAR_20 = FUNC_1(VAR_20, VAR_3, VAR_12, 1);
 FUNC_4(VAR_18->device, VAR_14, VAR_20);

 VAR_19 = FUNC_5(VAR_22.mc_addr) &
   FUNC_0(VAR_5, VAR_9);
 FUNC_4(VAR_18->device, VAR_16, VAR_19);

 VAR_19 = FUNC_6(VAR_22.mc_addr) &
   FUNC_0(VAR_4, VAR_8);
 FUNC_4(VAR_18->device, VAR_15, VAR_19);

 return 0;
}
