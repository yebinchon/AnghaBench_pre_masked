
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_table_context {scalar_t__ metrics_table; scalar_t__ metrics_time; } ;
struct smu_context {struct smu_table_context smu_table; } ;
typedef int SmuMetrics_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct smu_context*,int ,int ,void*,int) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct smu_context *VAR_2,
        SmuMetrics_t *VAR_3)
{
 struct smu_table_context *VAR_4= &VAR_2->smu_table;
 int VAR_5 = 0;

 if (!VAR_4->metrics_time || FUNC_4(VAR_1, VAR_4->metrics_time + FUNC_1(100))) {
  VAR_5 = FUNC_3(VAR_2, VAR_0, 0,
    (void *)VAR_4->metrics_table, 0);
  if (VAR_5) {
   FUNC_2("Failed to export SMU metrics table!\n");
   return VAR_5;
  }
  VAR_4->metrics_time = VAR_1;
 }

 FUNC_0(VAR_3, VAR_4->metrics_table, sizeof(SmuMetrics_t));

 return VAR_5;
}
