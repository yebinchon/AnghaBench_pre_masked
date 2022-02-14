
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu7_hwmgr {int pcie_dpm_key_disabled; } ;
struct pp_hwmgr {scalar_t__ backend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct pp_hwmgr*) ;
 int FUNC_2 (struct pp_hwmgr*,int ) ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_2)
{
 struct smu7_hwmgr *VAR_3 = (struct smu7_hwmgr *)(VAR_2->backend);

 if (!FUNC_1(VAR_2))
  return -VAR_0;

 if (!VAR_3->pcie_dpm_key_disabled) {
  FUNC_2(VAR_2,
    VAR_1);
 }

 return FUNC_0(VAR_2);
}
