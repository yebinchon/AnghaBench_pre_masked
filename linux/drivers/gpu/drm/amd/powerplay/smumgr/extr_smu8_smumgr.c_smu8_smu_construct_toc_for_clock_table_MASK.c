
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu8_smumgr {int toc_entry_used_count; int toc_entry_clock_table; } ;
struct pp_hwmgr {struct smu8_smumgr* smu_backend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pp_hwmgr*,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_2)
{
 struct smu8_smumgr *VAR_3 = VAR_2->smu_backend;

 VAR_3->toc_entry_clock_table = VAR_3->toc_entry_used_count;

 FUNC_0(VAR_2,
    VAR_0,
    VAR_1, 1);

 return 0;
}
