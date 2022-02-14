
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef size_t u32 ;
struct i40iw_hmc_obj_info {int base; int cnt; int size; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int*,size_t,int*) ;

__attribute__((used)) static enum i40iw_status_code FUNC_3(
    u64 *VAR_9,
    struct i40iw_hmc_obj_info *VAR_10,
    u32 *VAR_11)
{
 u64 VAR_12;
 u64 VAR_13;
 u64 VAR_14 = 0;
 u32 VAR_15, VAR_16;
 u32 VAR_17 = 0;


 for (VAR_15 = VAR_5, VAR_16 = 0; VAR_15 <= VAR_4; VAR_15++, VAR_16 += 8) {
  if ((VAR_15 == VAR_6) ||
   (VAR_15 == VAR_3) ||
   (VAR_15 == VAR_2)) {
   VAR_10[VAR_15].base = 0;
   VAR_10[VAR_15].cnt = 0;
   continue;
  }
  FUNC_2(VAR_9, VAR_16, &VAR_12);
  VAR_10[VAR_15].base = FUNC_1(VAR_12, 32) * 512;
  if (VAR_10[VAR_15].base > VAR_14) {
   VAR_14 = VAR_10[VAR_15].base;
   VAR_17 = VAR_15;
  }
  if (VAR_15 == VAR_0) {
   VAR_10[VAR_15].cnt = 1;
   continue;
  }
  if (VAR_15 == VAR_5)
   VAR_10[VAR_15].cnt = (u32)FUNC_0(VAR_12, VAR_8);
  else if (VAR_15 == VAR_1)
   VAR_10[VAR_15].cnt = (u32)FUNC_0(VAR_12, VAR_7);
  else
   VAR_10[VAR_15].cnt = (u32)(VAR_12);
 }
 VAR_13 = VAR_10[VAR_17].cnt * VAR_10[VAR_17].size + VAR_10[VAR_17].base;
 if (VAR_13 & 0x1FFFFF)
  *VAR_11 = (u32)((VAR_13 >> 21) + 1);
 else
  *VAR_11 = (u32)(VAR_13 >> 21);

 return 0;
}
