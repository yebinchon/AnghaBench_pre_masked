
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smu7_hwmgr {int soft_regs_start; int vr_config; int vce_power_gated; int uvd_power_gated; } ;
struct pp_hwmgr {int device; scalar_t__ backend; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int VAR_10 ;
 int FUNC_4 (struct pp_hwmgr*,int*) ;
 int FUNC_5 (struct pp_hwmgr*) ;
 int FUNC_6 (struct pp_hwmgr*,int ,int ) ;
 int FUNC_7 (struct pp_hwmgr*,int ) ;

__attribute__((used)) static int FUNC_8(struct pp_hwmgr *VAR_11, int VAR_12,
       void *VAR_13, int *VAR_14)
{
 uint32_t VAR_15, VAR_16, VAR_17;
 uint32_t VAR_18, VAR_19;
 struct smu7_hwmgr *VAR_20 = (struct smu7_hwmgr *)(VAR_11->backend);


 if (*VAR_14 < 4)
  return -VAR_3;

 switch (VAR_12) {
 case 135:
  FUNC_7(VAR_11, VAR_7);
  VAR_15 = FUNC_2(VAR_11->device, VAR_10);
  *((uint32_t *)VAR_13) = VAR_15;
  *VAR_14 = 4;
  return 0;
 case 136:
  FUNC_7(VAR_11, VAR_6);
  VAR_16 = FUNC_2(VAR_11->device, VAR_10);
  *((uint32_t *)VAR_13) = VAR_16;
  *VAR_14 = 4;
  return 0;
 case 134:
 case 131:
  VAR_18 = VAR_20->soft_regs_start + FUNC_6(VAR_11,
        VAR_9,
        (VAR_12 == 134) ?
        VAR_0:
        VAR_1);

  VAR_17 = FUNC_1(VAR_11->device, VAR_2, VAR_18);
  VAR_17 += 0x80;
  VAR_17 >>= 8;
  *((uint32_t *)VAR_13) = VAR_17 > 100 ? 100 : VAR_17;
  *VAR_14 = 4;
  return 0;
 case 132:
  *((uint32_t *)VAR_13) = FUNC_5(VAR_11);
  *VAR_14 = 4;
  return 0;
 case 130:
  *((uint32_t *)VAR_13) = VAR_20->uvd_power_gated ? 0 : 1;
  *VAR_14 = 4;
  return 0;
 case 129:
  *((uint32_t *)VAR_13) = VAR_20->vce_power_gated ? 0 : 1;
  *VAR_14 = 4;
  return 0;
 case 133:
  return FUNC_4(VAR_11, (uint32_t *)VAR_13);
 case 128:
  if ((VAR_20->vr_config & 0xff) == 0x2)
   VAR_19 = FUNC_0(VAR_11->device,
     VAR_2, VAR_8, VAR_5);
  else
   VAR_19 = FUNC_0(VAR_11->device,
     VAR_2, VAR_8, VAR_4);

  *((uint32_t *)VAR_13) = (uint32_t)FUNC_3(VAR_19);
  return 0;
 default:
  return -VAR_3;
 }
}
