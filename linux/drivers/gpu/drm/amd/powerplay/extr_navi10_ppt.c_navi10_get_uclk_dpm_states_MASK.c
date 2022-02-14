
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct smu_table_context {TYPE_2__* driver_pptable; } ;
struct smu_context {struct smu_table_context smu_table; } ;
struct TYPE_4__ {scalar_t__* FreqTableUclk; TYPE_1__* DpmDescriptor; } ;
struct TYPE_3__ {scalar_t__ NumDiscreteLevels; } ;
typedef TYPE_2__ PPTable_t ;


 int VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static int FUNC_0(struct smu_context *VAR_2, uint32_t *VAR_3, uint32_t *VAR_4)
{
 uint32_t VAR_5 = 0;
 uint16_t *VAR_6 = ((void*)0);
 uint16_t VAR_7 = 0;
 struct smu_table_context *VAR_8 = &VAR_2->smu_table;
 PPTable_t *VAR_9 = ((void*)0);

 if (!VAR_3 || !VAR_4 || !VAR_8->driver_pptable)
  return -VAR_0;

 VAR_9 = VAR_8->driver_pptable;
 VAR_5 = VAR_9->DpmDescriptor[VAR_1].NumDiscreteLevels;
 VAR_6 = VAR_9->FreqTableUclk;

 if (VAR_5 == 0 || VAR_6 == ((void*)0))
  return -VAR_0;

 *VAR_4 = VAR_5;
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {

  *VAR_3 = (*VAR_6) * 1000;
  VAR_3++;
  VAR_6++;
 }

 return 0;
}
