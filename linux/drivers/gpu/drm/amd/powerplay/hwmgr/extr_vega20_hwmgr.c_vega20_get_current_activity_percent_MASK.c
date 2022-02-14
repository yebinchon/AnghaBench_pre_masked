
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct pp_hwmgr {int dummy; } ;
struct TYPE_3__ {int AverageUclkActivity; int AverageGfxActivity; } ;
typedef TYPE_1__ SmuMetrics_t ;




 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct pp_hwmgr*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_1,
  int VAR_2,
  uint32_t *VAR_3)
{
 int VAR_4 = 0;
 SmuMetrics_t VAR_5;

 VAR_4 = FUNC_1(VAR_1, &VAR_5);
 if (VAR_4)
  return VAR_4;

 switch (VAR_2) {
 case 129:
  *VAR_3 = VAR_5.AverageGfxActivity;
  break;
 case 128:
  *VAR_3 = VAR_5.AverageUclkActivity;
  break;
 default:
  FUNC_0("Invalid index for retrieving clock activity\n");
  return -VAR_0;
 }

 return VAR_4;
}
