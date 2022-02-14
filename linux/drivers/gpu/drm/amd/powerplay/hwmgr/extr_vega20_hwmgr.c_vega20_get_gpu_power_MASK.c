
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct pp_hwmgr {int smu_version; } ;
struct TYPE_3__ {int AverageSocketPower; int CurrSocketPower; } ;
typedef TYPE_1__ SmuMetrics_t ;


 int FUNC_0 (struct pp_hwmgr*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_0,
  uint32_t *VAR_1)
{
 int VAR_2 = 0;
 SmuMetrics_t VAR_3;

 VAR_2 = FUNC_0(VAR_0, &VAR_3);
 if (VAR_2)
  return VAR_2;


 if (VAR_0->smu_version == 0x282e00)
  *VAR_1 = VAR_3.AverageSocketPower << 8;
 else
  *VAR_1 = VAR_3.CurrSocketPower << 8;

 return VAR_2;
}
