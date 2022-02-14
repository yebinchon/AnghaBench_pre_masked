
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu8_smumgr {scalar_t__ toc_entry_used_count; } ;
struct pp_hwmgr {struct smu8_smumgr* smu_backend; } ;


 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct pp_hwmgr*) ;
 int FUNC_2 (struct pp_hwmgr*) ;
 int FUNC_3 (struct pp_hwmgr*) ;
 int FUNC_4 (struct pp_hwmgr*) ;
 int FUNC_5 (struct pp_hwmgr*) ;
 int FUNC_6 (struct pp_hwmgr*) ;

__attribute__((used)) static int FUNC_7(struct pp_hwmgr *VAR_0)
{
 struct smu8_smumgr *VAR_1 = VAR_0->smu_backend;

 VAR_1->toc_entry_used_count = 0;
 FUNC_6(VAR_0);
 FUNC_3(VAR_0);
 FUNC_4(VAR_0);
 FUNC_5(VAR_0);
 FUNC_2(VAR_0);
 FUNC_0(VAR_0);
 FUNC_1(VAR_0);

 return 0;
}
