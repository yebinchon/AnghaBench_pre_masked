
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
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
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int,scalar_t__) ;

int FUNC_2(struct pp_hwmgr *VAR_7,
  uint32_t *VAR_8)
{
 uint32_t VAR_9;
 uint32_t VAR_10;
 uint64_t VAR_11;

 if (VAR_7->thermal_controller.fanInfo.bNoFan)
  return -VAR_4;

 VAR_9 = FUNC_0(VAR_7->device, VAR_0,
   VAR_1, VAR_6);
 VAR_10 = FUNC_0(VAR_7->device, VAR_0,
   VAR_2, VAR_5);

 if (VAR_9 == 0)
  return -VAR_3;


 VAR_11 = (uint64_t)VAR_10 * 100;
 FUNC_1(VAR_11, VAR_9);
 *VAR_8 = (uint32_t)VAR_11;

 if (*VAR_8 > 100)
  *VAR_8 = 100;

 return 0;
}
