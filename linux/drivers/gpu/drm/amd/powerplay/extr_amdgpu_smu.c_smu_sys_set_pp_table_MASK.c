
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smu_table_context {size_t power_play_table_size; scalar_t__ hardcode_pptable; scalar_t__ power_play_table; } ;
struct smu_context {int mutex; int pm_enabled; struct smu_table_context smu_table; } ;
struct TYPE_2__ {size_t usStructureSize; } ;
typedef TYPE_1__ ATOM_COMMON_TABLE_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (size_t,int ) ;
 int FUNC_1 (scalar_t__,void*,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (struct smu_context*) ;

int FUNC_7(struct smu_context *VAR_4, void *VAR_5, size_t VAR_6)
{
 struct smu_table_context *VAR_7 = &VAR_4->smu_table;
 ATOM_COMMON_TABLE_HEADER *VAR_8 = (ATOM_COMMON_TABLE_HEADER *)VAR_5;
 int VAR_9 = 0;

 if (!VAR_4->pm_enabled)
  return -VAR_0;
 if (VAR_8->usStructureSize != VAR_6) {
  FUNC_4("pp table size not matched !\n");
  return -VAR_1;
 }

 FUNC_2(&VAR_4->mutex);
 if (!VAR_7->hardcode_pptable)
  VAR_7->hardcode_pptable = FUNC_0(VAR_6, VAR_3);
 if (!VAR_7->hardcode_pptable) {
  VAR_9 = -VAR_2;
  goto failed;
 }

 FUNC_1(VAR_7->hardcode_pptable, VAR_5, VAR_6);
 VAR_7->power_play_table = VAR_7->hardcode_pptable;
 VAR_7->power_play_table_size = VAR_6;
 FUNC_3(&VAR_4->mutex);

 VAR_9 = FUNC_6(VAR_4);
 if (VAR_9)
  FUNC_5("smu reset failed, ret = %d\n", VAR_9);

 return VAR_9;

failed:
 FUNC_3(&VAR_4->mutex);
 return VAR_9;
}
