
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


 int VAR_0 ;
 int FUNC_0 (struct smu_context*,int*) ;

__attribute__((used)) static int FUNC_1(struct smu_context *VAR_1,
       uint32_t *VAR_2)
{
 PPTable_t *VAR_3 = VAR_1->smu_table.driver_pptable;
 uint32_t VAR_4, VAR_5;
 int VAR_6 = 0;

 if (!VAR_2)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_1, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_4 = VAR_5 * 100 / VAR_3->FanMaximumRpm;
 *VAR_2 = VAR_4 > 100 ? 100 : VAR_4;

 return VAR_6;
}
