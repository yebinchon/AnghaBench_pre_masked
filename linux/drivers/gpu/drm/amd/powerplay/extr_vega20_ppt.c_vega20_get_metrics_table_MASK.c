
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_table_context {scalar_t__ metrics_table; scalar_t__ metrics_time; } ;
struct smu_context {struct smu_table_context smu_table; } ;
typedef int SmuMetrics_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct smu_context*,int ,int ,void*,int) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct smu_context *VAR_3,
        SmuMetrics_t *VAR_4)
{
 struct smu_table_context *VAR_5= &VAR_3->smu_table;
 int VAR_6 = 0;

 if (!VAR_5->metrics_time || FUNC_3(VAR_2, VAR_5->metrics_time + VAR_0 / 1000)) {
  VAR_6 = FUNC_2(VAR_3, VAR_1, 0,
    (void *)VAR_5->metrics_table, 0);
  if (VAR_6) {
   FUNC_1("Failed to export SMU metrics table!\n");
   return VAR_6;
  }
  VAR_5->metrics_time = VAR_2;
 }

 FUNC_0(VAR_4, VAR_5->metrics_table, sizeof(SmuMetrics_t));

 return VAR_6;
}
