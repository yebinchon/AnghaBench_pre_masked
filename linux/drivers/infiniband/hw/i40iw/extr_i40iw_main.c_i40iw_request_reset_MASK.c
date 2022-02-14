
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40iw_device {int client; struct i40e_info* ldev; } ;
struct i40e_info {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* request_reset ) (struct i40e_info*,int ,int) ;} ;


 int FUNC_0 (struct i40e_info*,int ,int) ;

void FUNC_1(struct i40iw_device *VAR_0)
{
 struct i40e_info *VAR_1 = VAR_0->ldev;

 VAR_1->ops->request_reset(VAR_1, VAR_0->client, 1);
}
