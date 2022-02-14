
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int fan_ctrl_is_in_default_mode; int tmin; int device; int fan_ctrl_default_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int VAR_3 ;

int FUNC_1(struct pp_hwmgr *VAR_4)
{
 if (!VAR_4->fan_ctrl_is_in_default_mode) {
  FUNC_0(VAR_4->device, VAR_0,
    VAR_1, VAR_2, VAR_4->fan_ctrl_default_mode);
  FUNC_0(VAR_4->device, VAR_0,
    VAR_1, VAR_3, VAR_4->tmin);
  VAR_4->fan_ctrl_is_in_default_mode = 1;
 }

 return 0;
}
