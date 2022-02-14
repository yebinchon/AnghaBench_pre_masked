
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_sc_dev {int dummy; } ;
struct i40iw_hmc_info {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct i40iw_sc_dev*,int ,struct i40iw_hmc_info*,int,int) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_1(struct i40iw_sc_dev *VAR_2,
      struct i40iw_hmc_info *VAR_3,
      bool VAR_4,
      bool VAR_5)
{
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  FUNC_0(VAR_2, VAR_1[VAR_6], VAR_3, VAR_4, VAR_5);
}
