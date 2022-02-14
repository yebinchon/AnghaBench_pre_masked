
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_4__ {TYPE_2__* driver_pptable; } ;
struct smu_context {TYPE_1__ smu_table; } ;
typedef enum smu_clk_type { ____Placeholder_smu_clk_type } smu_clk_type ;
struct TYPE_6__ {scalar_t__ SnapToDiscrete; } ;
struct TYPE_5__ {TYPE_3__* DpmDescriptor; } ;
typedef TYPE_2__ PPTable_t ;
typedef TYPE_3__ DpmDescriptor_t ;


 size_t FUNC_0 (struct smu_context*,int) ;

__attribute__((used)) static bool FUNC_1(struct smu_context *VAR_0, enum smu_clk_type VAR_1)
{
 PPTable_t *VAR_2 = VAR_0->smu_table.driver_pptable;
 DpmDescriptor_t *VAR_3 = ((void*)0);
 uint32_t VAR_4 = 0;

 VAR_4 = FUNC_0(VAR_0, VAR_1);
 VAR_3 = &VAR_2->DpmDescriptor[VAR_4];


 return VAR_3->SnapToDiscrete == 0 ? 1 : 0;
}
