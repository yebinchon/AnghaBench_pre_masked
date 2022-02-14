
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smu10_hwmgr {int vcn_power_gated; } ;
struct pp_hwmgr {scalar_t__ backend; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct pp_hwmgr*) ;
 int FUNC_2 (struct pp_hwmgr*,int ) ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_3, int VAR_4,
     void *VAR_5, int *VAR_6)
{
 struct smu10_hwmgr *VAR_7 = (struct smu10_hwmgr *)(VAR_3->backend);
 uint32_t VAR_8, VAR_9;
 int VAR_10 = 0;

 switch (VAR_4) {
 case 130:
  FUNC_2(VAR_3, VAR_2);
  VAR_8 = FUNC_1(VAR_3);

  *((uint32_t *)VAR_5) = VAR_8 * 100;
  *VAR_6 = 4;
  break;
 case 131:
  FUNC_2(VAR_3, VAR_1);
  VAR_9 = FUNC_1(VAR_3);

  *((uint32_t *)VAR_5) = VAR_9 * 100;
  *VAR_6 = 4;
  break;
 case 129:
  *((uint32_t *)VAR_5) = FUNC_0(VAR_3);
  break;
 case 128:
  *(uint32_t *)VAR_5 = VAR_7->vcn_power_gated ? 0 : 1;
  *VAR_6 = 4;
  break;
 default:
  VAR_10 = -VAR_0;
  break;
 }

 return VAR_10;
}
