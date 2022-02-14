
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu7_hwmgr {scalar_t__ apply_avfs_cks_off_voltage; } ;
struct pp_hwmgr {int avfs_supported; scalar_t__ backend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pp_hwmgr*,int ) ;

int FUNC_1(struct pp_hwmgr *VAR_2)
{
 struct smu7_hwmgr *VAR_3 = (struct smu7_hwmgr *)(VAR_2->backend);
 int VAR_4;

 if (!VAR_2->avfs_supported)
  return 0;

 VAR_4 = FUNC_0(VAR_2, VAR_1);
 if (!VAR_4) {
  if (VAR_3->apply_avfs_cks_off_voltage)
   VAR_4 = FUNC_0(VAR_2, VAR_0);
 }

 return VAR_4;
}
