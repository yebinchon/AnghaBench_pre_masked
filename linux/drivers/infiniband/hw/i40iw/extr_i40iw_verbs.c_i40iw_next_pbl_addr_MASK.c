
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct i40iw_pble_info {scalar_t__ cnt; scalar_t__ addr; } ;



__attribute__((used)) static inline u64 *FUNC_0(u64 *VAR_0,
           struct i40iw_pble_info **VAR_1,
           u32 *VAR_2)
{
 *VAR_2 += 1;
 if ((!(*VAR_1)) || (*VAR_2 != (*VAR_1)->cnt))
  return ++VAR_0;
 *VAR_2 = 0;
 (*VAR_1)++;
 return (u64 *)(*VAR_1)->addr;
}
