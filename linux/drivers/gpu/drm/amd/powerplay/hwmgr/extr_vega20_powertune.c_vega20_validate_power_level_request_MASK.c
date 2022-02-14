
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ TDPLimit; } ;
struct pp_hwmgr {TYPE_1__ platform_descriptor; } ;



int FUNC_0(struct pp_hwmgr *VAR_0,
  uint32_t VAR_1, uint32_t VAR_2)
{
 return (VAR_1 > VAR_0->platform_descriptor.TDPLimit) ? -1 : 0;
}
