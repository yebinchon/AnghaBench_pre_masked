
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_table_context {int driver_pptable; } ;
struct smu_context {struct smu_table_context smu_table; } ;


 int VAR_0 ;
 int FUNC_0 (struct smu_context*,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct smu_context *VAR_1)
{
 struct smu_table_context *VAR_2 = &VAR_1->smu_table;
 int VAR_3 = 0;

 VAR_3 = FUNC_0(VAR_1, VAR_0, 0,
          VAR_2->driver_pptable, 1);

 return VAR_3;
}
