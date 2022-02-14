
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct smu_context {int dummy; } ;
struct TYPE_3__ {int CurrFanSpeed; } ;
typedef TYPE_1__ SmuMetrics_t ;


 int VAR_0 ;
 int FUNC_0 (struct smu_context*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(struct smu_context *VAR_1,
          uint32_t *VAR_2)
{
 SmuMetrics_t VAR_3;
 int VAR_4 = 0;

 if (!VAR_2)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_1, &VAR_3);
 if (VAR_4)
  return VAR_4;

 *VAR_2 = VAR_3.CurrFanSpeed;

 return VAR_4;
}
