
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct smu_table_context {TYPE_1__* driver_pptable; } ;
struct smu_context {struct smu_table_context smu_table; } ;
struct TYPE_2__ {scalar_t__ FanTargetTemperature; } ;
typedef TYPE_1__ PPTable_t ;


 int VAR_0 ;
 int FUNC_0 (struct smu_context*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct smu_context *VAR_1)
{
 int VAR_2;
 struct smu_table_context *VAR_3 = &VAR_1->smu_table;
 PPTable_t *VAR_4 = VAR_3->driver_pptable;

 VAR_2 = FUNC_0(VAR_1, VAR_0,
   (uint32_t)VAR_4->FanTargetTemperature);

 return VAR_2;
}
