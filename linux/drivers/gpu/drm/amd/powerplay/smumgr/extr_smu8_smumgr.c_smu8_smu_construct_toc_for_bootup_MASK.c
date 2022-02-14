
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu8_smumgr {int toc_entry_used_count; int toc_entry_initialize_index; } ;
struct pp_hwmgr {scalar_t__ chip_id; struct smu8_smumgr* smu_backend; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct pp_hwmgr*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_9)
{
 struct smu8_smumgr *VAR_10 = VAR_9->smu_backend;

 VAR_10->toc_entry_initialize_index = VAR_10->toc_entry_used_count;

 FUNC_0(VAR_9,
    VAR_7, 0);
 if (VAR_9->chip_id != VAR_0)
  FUNC_0(VAR_9,
    VAR_8, 0);
 FUNC_0(VAR_9,
    VAR_1, 0);
 FUNC_0(VAR_9,
    VAR_5, 0);
 FUNC_0(VAR_9,
    VAR_2, 0);
 FUNC_0(VAR_9,
    VAR_3, 0);
 if (VAR_9->chip_id != VAR_0)
  FUNC_0(VAR_9,
    VAR_4, 0);
 FUNC_0(VAR_9,
    VAR_6, 1);

 return 0;
}
