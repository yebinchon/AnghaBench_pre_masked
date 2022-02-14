
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct i40iw_sc_dev {struct i40iw_device* back_dev; } ;
struct i40iw_device {struct i40e_info* ldev; } ;
struct i40e_info {TYPE_1__* ops; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_2__ {int (* virtchnl_send ) (struct i40e_info*,int *,int ,int *,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i40e_info*,int *,int ,int *,int ) ;

__attribute__((used)) static enum i40iw_status_code FUNC_1(struct i40iw_sc_dev *VAR_2,
        u32 VAR_3,
        u8 *VAR_4,
        u16 VAR_5)
{
 struct i40iw_device *VAR_6;
 struct i40e_info *VAR_7;

 if (!VAR_2 || !VAR_2->back_dev)
  return VAR_0;

 VAR_6 = VAR_2->back_dev;
 VAR_7 = VAR_6->ldev;

 if (VAR_7 && VAR_7->ops && VAR_7->ops->virtchnl_send)
  return VAR_7->ops->virtchnl_send(VAR_7, &VAR_1, VAR_3, VAR_4, VAR_5);
 return VAR_0;
}
