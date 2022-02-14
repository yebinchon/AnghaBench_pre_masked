
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct smu_context {int dummy; } ;
struct TYPE_3__ {int AverageSocketPower; } ;
typedef TYPE_1__ SmuMetrics_t ;


 int VAR_0 ;
 int FUNC_0 (struct smu_context*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(struct smu_context *VAR_1, uint32_t *VAR_2)
{
 int VAR_3 = 0;
 SmuMetrics_t VAR_4;

 if (!VAR_2)
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_1, &VAR_4);
 if (VAR_3)
  return VAR_3;

 *VAR_2 = VAR_4.AverageSocketPower << 8;

 return 0;
}
