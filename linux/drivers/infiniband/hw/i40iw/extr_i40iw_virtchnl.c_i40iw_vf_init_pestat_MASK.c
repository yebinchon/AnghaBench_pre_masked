
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct i40iw_vsi_pestat {int lock; int hw; } ;
struct i40iw_sc_dev {int hw; } ;


 int FUNC_0 (struct i40iw_vsi_pestat*,int ,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct i40iw_sc_dev *VAR_0, struct i40iw_vsi_pestat *VAR_1, u16 VAR_2)
{
 VAR_1->hw = VAR_0->hw;
 FUNC_0(VAR_1, (u8)VAR_2, 0);
 FUNC_1(&VAR_1->lock);
}
