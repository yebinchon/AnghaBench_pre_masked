
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_table_context {int clocks_table; } ;
struct smu_table {int dummy; } ;
struct smu_context {struct smu_table_context smu_table; } ;
typedef int Watermarks_t ;
typedef int SmuMetrics_t ;
typedef int DpmClocks_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct smu_table*,int ,int,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct smu_context *VAR_7, struct smu_table *VAR_8)
{
 struct smu_table_context *VAR_9 = &VAR_7->smu_table;

 FUNC_0(VAR_8, VAR_6, sizeof(Watermarks_t),
  VAR_3, VAR_0);
 FUNC_0(VAR_8, VAR_4, sizeof(DpmClocks_t),
  VAR_3, VAR_0);
 FUNC_0(VAR_8, VAR_5, sizeof(SmuMetrics_t),
  VAR_3, VAR_0);

 VAR_9->clocks_table = FUNC_1(sizeof(DpmClocks_t), VAR_2);
 if (!VAR_9->clocks_table)
  return -VAR_1;

 return 0;
}
