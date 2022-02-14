
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_table_context {scalar_t__ metrics_time; int metrics_table; } ;
struct smu_table {int dummy; } ;
struct smu_context {struct smu_table_context smu_table; } ;
typedef int Watermarks_t ;
typedef int SmuMetrics_t ;
typedef int PPTable_t ;
typedef int OverDriveTable_t ;
typedef int DpmActivityMonitorCoeffInt_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct smu_table*,int ,int,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct smu_context *VAR_11, struct smu_table *VAR_12)
{
 struct smu_table_context *VAR_13 = &VAR_11->smu_table;

 FUNC_0(VAR_12, VAR_8, sizeof(PPTable_t),
         VAR_3, VAR_0);
 FUNC_0(VAR_12, VAR_10, sizeof(Watermarks_t),
         VAR_3, VAR_0);
 FUNC_0(VAR_12, VAR_9, sizeof(SmuMetrics_t),
         VAR_3, VAR_0);
 FUNC_0(VAR_12, VAR_6, sizeof(OverDriveTable_t),
         VAR_3, VAR_0);
 FUNC_0(VAR_12, VAR_7, VAR_4,
         VAR_3, VAR_0);
 FUNC_0(VAR_12, VAR_5,
         sizeof(DpmActivityMonitorCoeffInt_t), VAR_3,
                VAR_0);

 VAR_13->metrics_table = FUNC_1(sizeof(SmuMetrics_t), VAR_2);
 if (!VAR_13->metrics_table)
  return -VAR_1;
 VAR_13->metrics_time = 0;

 return 0;
}
