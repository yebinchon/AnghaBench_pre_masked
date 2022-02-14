
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_table_context {scalar_t__ overdrive_table; } ;
struct smu_context {struct smu_table_context smu_table; } ;
typedef int OverDriveTable_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct smu_context*,int ,int ,scalar_t__,int) ;
 int FUNC_3 (struct smu_context*) ;

__attribute__((used)) static int FUNC_4(struct smu_context *VAR_4,
       bool VAR_5)
{
 struct smu_table_context *VAR_6 = &VAR_4->smu_table;
 int VAR_7;

 if (VAR_5) {
  if (VAR_6->overdrive_table)
   return -VAR_0;

  VAR_6->overdrive_table = FUNC_0(sizeof(OverDriveTable_t), VAR_2);

  if (!VAR_6->overdrive_table)
   return -VAR_1;

  VAR_7 = FUNC_2(VAR_4, VAR_3, 0,
           VAR_6->overdrive_table, 0);
  if (VAR_7) {
   FUNC_1("Failed to export over drive table!\n");
   return VAR_7;
  }

  VAR_7 = FUNC_3(VAR_4);
  if (VAR_7)
   return VAR_7;
 }

 VAR_7 = FUNC_2(VAR_4, VAR_3, 0,
          VAR_6->overdrive_table, 1);
 if (VAR_7) {
  FUNC_1("Failed to import over drive table!\n");
  return VAR_7;
 }

 return 0;
}
