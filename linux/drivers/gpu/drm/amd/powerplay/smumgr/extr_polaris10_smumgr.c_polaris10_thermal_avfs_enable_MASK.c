
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu7_hwmgr {scalar_t__ apply_avfs_cks_off_voltage; int avfs_vdroop_override_setting; } ;
struct pp_hwmgr {int avfs_supported; scalar_t__ backend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pp_hwmgr*,int ) ;
 int FUNC_1 (struct pp_hwmgr*,int ,int ) ;

int FUNC_2(struct pp_hwmgr *VAR_3)
{
 struct smu7_hwmgr *VAR_4 = (struct smu7_hwmgr *)(VAR_3->backend);

 if (!VAR_3->avfs_supported)
  return 0;

 FUNC_1(VAR_3,
   VAR_2, VAR_4->avfs_vdroop_override_setting);

 FUNC_0(VAR_3, VAR_1);




 if (VAR_4->apply_avfs_cks_off_voltage)
  FUNC_0(VAR_3, VAR_0);

 return 0;
}
