
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int usMaxFanRPM; } ;
struct TYPE_4__ {TYPE_1__ advanceFanControlParameters; } ;
struct pp_hwmgr {TYPE_2__ thermal_controller; } ;


 int VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_1, uint16_t VAR_2)
{
 VAR_1->thermal_controller.
 advanceFanControlParameters.usMaxFanRPM = VAR_2;

 return FUNC_0(VAR_1,
   VAR_0, VAR_2);
}
