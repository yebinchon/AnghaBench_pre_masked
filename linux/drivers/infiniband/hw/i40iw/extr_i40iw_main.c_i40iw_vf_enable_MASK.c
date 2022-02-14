
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ max_enabled_vfs; } ;
struct i40iw_handler {TYPE_1__ device; } ;
struct i40e_info {int dummy; } ;
struct i40e_client {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct i40iw_handler* FUNC_0 (struct i40e_info*) ;

__attribute__((used)) static void FUNC_1(struct i40e_info *VAR_1,
       struct i40e_client *VAR_2,
       u32 VAR_3)
{
 struct i40iw_handler *VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 if (!VAR_4)
  return;

 if (VAR_3 > VAR_0)
  VAR_4->device.max_enabled_vfs = VAR_0;
 else
  VAR_4->device.max_enabled_vfs = VAR_3;
}
