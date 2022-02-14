
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smu_table_context {int overdrive_table; } ;
struct smu_context {struct smu_table_context smu_table; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct smu_context*,int ,int ,int ,int) ;
 int FUNC_2 (struct smu_context*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct smu_context *VAR_1,
          uint32_t VAR_2,
          uint32_t VAR_3)
{
 struct smu_table_context *VAR_4 = &VAR_1->smu_table;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_0, 0,
          VAR_4->overdrive_table, 0);
 if (VAR_5) {
  FUNC_0("Failed to export over drive table!\n");
  return VAR_5;
 }

 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_0, 0,
          VAR_4->overdrive_table, 1);
 if (VAR_5) {
  FUNC_0("Failed to import over drive table!\n");
  return VAR_5;
 }

 return 0;
}
