
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_device {int closing; int reset; int virtchnl_wq; } ;
struct i40iw_handler {struct i40iw_device device; } ;
struct i40e_info {int dummy; } ;
struct i40e_client {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct i40iw_device*,int *,int *,int) ;
 int FUNC_2 (struct i40iw_device*) ;
 struct i40iw_handler* FUNC_3 (struct i40e_info*) ;

__attribute__((used)) static void FUNC_4(struct i40e_info *VAR_0, struct i40e_client *VAR_1, bool VAR_2)
{
 struct i40iw_device *VAR_3;
 struct i40iw_handler *VAR_4;

 VAR_4 = FUNC_3(VAR_0);
 if (!VAR_4)
  return;

 VAR_3 = &VAR_4->device;
 VAR_3->closing = 1;

 if (VAR_2)
  VAR_3->reset = 1;

 FUNC_1(VAR_3, ((void*)0), ((void*)0), 1);
 FUNC_0(VAR_3->virtchnl_wq);
 FUNC_2(VAR_3);
}
