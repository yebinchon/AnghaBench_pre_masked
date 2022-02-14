
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u64 ;
typedef size_t u32 ;
struct i40iw_hmc_info {TYPE_1__* hmc_obj; } ;
struct TYPE_2__ {size_t base; size_t size; } ;


 size_t VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct i40iw_hmc_info *VAR_1,
          u32 VAR_2,
          u32 VAR_3,
          u32 VAR_4,
          u32 *VAR_5,
          u32 *VAR_6)
{
 u64 VAR_7, VAR_8;

 VAR_7 = VAR_1->hmc_obj[VAR_2].base +
   VAR_1->hmc_obj[VAR_2].size * VAR_3;
 VAR_8 = VAR_7 + (VAR_1)->hmc_obj[(VAR_2)].size * (VAR_4);
 *(VAR_5) = (u32)(VAR_7 / VAR_0);
 *(VAR_6) = (u32)((VAR_8 - 1) / VAR_0);
 *(VAR_6) += 1;
}
