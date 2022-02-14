
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct pp_hwmgr {int dummy; } ;
struct TYPE_3__ {int CurrSocketPower; } ;
typedef TYPE_1__ SmuMetrics_t ;


 int FUNC_0 (struct pp_hwmgr*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_0, uint32_t *VAR_1)
{
 SmuMetrics_t VAR_2;
 int VAR_3 = 0;

 VAR_3 = FUNC_0(VAR_0, &VAR_2);
 if (VAR_3)
  return VAR_3;

 *VAR_1 = VAR_2.CurrSocketPower << 8;

 return VAR_3;
}
