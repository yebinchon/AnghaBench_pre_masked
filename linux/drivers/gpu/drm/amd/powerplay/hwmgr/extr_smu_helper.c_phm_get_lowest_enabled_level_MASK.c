
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pp_hwmgr {int dummy; } ;



uint32_t FUNC_0(struct pp_hwmgr *VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2 = 0;

 while (0 == (VAR_1 & (1 << VAR_2)))
  VAR_2++;

 return VAR_2;
}
