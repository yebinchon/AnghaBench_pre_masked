
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu8_hwmgr {int is_nb_dpm_enabled; } ;
struct pp_hwmgr {struct smu8_hwmgr* backend; } ;



__attribute__((used)) static void FUNC_0(struct pp_hwmgr *VAR_0)
{
 struct smu8_hwmgr *VAR_1 = VAR_0->backend;

 VAR_1->is_nb_dpm_enabled = 0;
}
