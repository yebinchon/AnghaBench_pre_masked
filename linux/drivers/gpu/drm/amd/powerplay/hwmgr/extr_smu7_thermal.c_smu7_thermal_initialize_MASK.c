
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ucTachometerPulsesPerRevolution; } ;
struct TYPE_4__ {TYPE_1__ fanInfo; } ;
struct pp_hwmgr {int device; TYPE_2__ thermal_controller; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_5)
{
 if (VAR_5->thermal_controller.fanInfo.ucTachometerPulsesPerRevolution)
  FUNC_0(VAR_5->device, VAR_0,
    VAR_2, VAR_3,
    VAR_5->thermal_controller.fanInfo.
    ucTachometerPulsesPerRevolution - 1);

 FUNC_0(VAR_5->device, VAR_0,
   VAR_1, VAR_4, 0x28);

 return 0;
}
