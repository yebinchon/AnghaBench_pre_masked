
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int TDPAdjustment; scalar_t__ TDPAdjustmentPolarity; } ;
struct pp_hwmgr {TYPE_1__ platform_descriptor; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct pp_hwmgr*,int ) ;

int FUNC_2(struct pp_hwmgr *VAR_1)
{
 int VAR_2;

 if (FUNC_0(VAR_0)) {
  VAR_2 =
    VAR_1->platform_descriptor.TDPAdjustmentPolarity ?
    VAR_1->platform_descriptor.TDPAdjustment :
    (-1 * VAR_1->platform_descriptor.TDPAdjustment);
  FUNC_1(VAR_1,
    (uint32_t)VAR_2);
 }
 return 0;
}
