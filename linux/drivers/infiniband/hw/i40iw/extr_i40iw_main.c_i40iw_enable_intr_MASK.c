
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40iw_sc_dev {int hw; scalar_t__ is_pf; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct i40iw_sc_dev *VAR_3, u32 VAR_4)
{
 u32 VAR_5;

 VAR_5 = VAR_1 |
  VAR_0 |
  (3 << VAR_2);
 if (VAR_3->is_pf)
  FUNC_2(VAR_3->hw, FUNC_0(VAR_4 - 1), VAR_5);
 else
  FUNC_2(VAR_3->hw, FUNC_1(VAR_4 - 1), VAR_5);
}
