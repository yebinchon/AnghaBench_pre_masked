
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ bNoFan; } ;
struct TYPE_4__ {TYPE_1__ fanInfo; } ;
struct pp_hwmgr {int device; TYPE_2__ thermal_controller; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct pp_hwmgr*,int ) ;
 int FUNC_5 (struct pp_hwmgr*) ;

int FUNC_6(struct pp_hwmgr *VAR_8,
  uint32_t VAR_9)
{
 uint32_t VAR_10;
 uint32_t VAR_11;
 uint64_t VAR_12;

 if (VAR_8->thermal_controller.fanInfo.bNoFan)
  return 0;

 if (VAR_9 > 100)
  VAR_9 = 100;

 if (FUNC_2(VAR_7))
  FUNC_5(VAR_8);

 VAR_10 = FUNC_0(VAR_8->device, VAR_0,
   VAR_2, VAR_6);

 if (VAR_10 == 0)
  return -VAR_3;

 VAR_12 = (uint64_t)VAR_9 * VAR_10;
 FUNC_3(VAR_12, 100);
 VAR_11 = (uint32_t)VAR_12;

 FUNC_1(VAR_8->device, VAR_0,
   VAR_1, VAR_5, VAR_11);

 return FUNC_4(VAR_8, VAR_4);
}
