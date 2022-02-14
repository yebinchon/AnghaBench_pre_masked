
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_sc_dev {scalar_t__ back_dev; } ;
struct i40iw_dma_mem {int dummy; } ;
struct i40iw_device {int dummy; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i40iw_device*,struct i40iw_dma_mem*,int ,int ) ;

enum i40iw_status_code FUNC_1(struct i40iw_sc_dev *VAR_2,
       struct i40iw_dma_mem *VAR_3)
{
 enum i40iw_status_code VAR_4;
 struct i40iw_device *VAR_5 = (struct i40iw_device *)VAR_2->back_dev;

 VAR_4 = FUNC_0(VAR_5, VAR_3, VAR_1,
           VAR_0);
 return VAR_4;
}
