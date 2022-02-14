
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct smu7_hwmgr {int is_memory_gddr5; } ;
struct pp_hwmgr {int chip_id; int is_kicker; scalar_t__ backend; } ;







__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_0,
     uint32_t VAR_1)
{
 struct smu7_hwmgr *VAR_2 = (struct smu7_hwmgr *)(VAR_0->backend);
 uint32_t VAR_3;

 switch (VAR_0->chip_id) {
 case 131:
 case 130:
 case 129:
  if (VAR_0->is_kicker)
   VAR_3 = VAR_2->is_memory_gddr5 ? 450 : 150;
  else
   VAR_3 = VAR_2->is_memory_gddr5 ? 190 : 150;
  break;
 case 128:
  VAR_3 = 30;
  break;
 default:
  VAR_3 = VAR_2->is_memory_gddr5 ? 450 : 150;
  break;
 }

 if (VAR_1 < VAR_3)
  return 1;
 else
  return 0;
}
