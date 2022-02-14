
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef size_t u32 ;
struct i40iw_hmc_obj_info {size_t max_cnt; int size; } ;


 int FUNC_0 (int,size_t) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__*,size_t,scalar_t__*) ;

__attribute__((used)) static u64 FUNC_3(u64 *VAR_0,
         u32 VAR_1,
         struct i40iw_hmc_obj_info *VAR_2,
         u32 VAR_3)
{
 u64 VAR_4;
 u32 VAR_5;

 FUNC_2(VAR_0, VAR_1, &VAR_4);
 VAR_2[VAR_3].max_cnt = (u32)VAR_4;
 VAR_5 = (u32)FUNC_1(VAR_4, 32);
 VAR_2[VAR_3].size = FUNC_0(1, VAR_5);

 return VAR_4;
}
