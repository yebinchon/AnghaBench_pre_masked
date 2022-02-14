
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {TYPE_2__* driver_pptable; } ;
struct smu_context {TYPE_1__ smu_table; } ;
struct TYPE_4__ {int FanMaximumRpm; } ;
typedef TYPE_2__ PPTable_t ;


 int FUNC_0 (struct smu_context*,int*) ;

__attribute__((used)) static int FUNC_1(struct smu_context *VAR_0,
     uint32_t *VAR_1)
{
 int VAR_2 = 0;
 uint32_t VAR_3 = 0, VAR_4 = 0;
 PPTable_t *VAR_5 = VAR_0->smu_table.driver_pptable;

 VAR_2 = FUNC_0(VAR_0, &VAR_3);
 if (VAR_2)
  return VAR_2;

 VAR_4 = VAR_3 * 100 / VAR_5->FanMaximumRpm;
 *VAR_1 = VAR_4 > 100 ? 100 : VAR_4;

 return 0;
}
