
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40iw_sc_dev {int hw; scalar_t__ is_pf; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static enum i40iw_status_code FUNC_1(struct i40iw_sc_dev *VAR_2,
         u32 VAR_3)
{

 if (VAR_2->is_pf)
  FUNC_0(VAR_2->hw, VAR_0, VAR_3);
 else
  FUNC_0(VAR_2->hw, VAR_1, VAR_3);

 return 0;
}
