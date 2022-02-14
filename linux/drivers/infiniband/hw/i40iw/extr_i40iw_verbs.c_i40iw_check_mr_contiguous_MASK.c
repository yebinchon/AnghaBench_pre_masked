
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct i40iw_pble_level2 {int leaf_cnt; struct i40iw_pble_info* leaf; } ;
struct i40iw_pble_info {int cnt; scalar_t__ addr; } ;
struct TYPE_2__ {scalar_t__ addr; } ;
struct i40iw_pble_alloc {scalar_t__ level; int total_cnt; TYPE_1__ level1; struct i40iw_pble_level2 level2; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,int ,int) ;

__attribute__((used)) static bool FUNC_1(struct i40iw_pble_alloc *VAR_2, u32 VAR_3)
{
 struct i40iw_pble_level2 *VAR_4 = &VAR_2->level2;
 struct i40iw_pble_info *VAR_5 = VAR_4->leaf;
 u64 *VAR_6 = ((void*)0);
 u64 *VAR_7 = ((void*)0);
 int VAR_8;
 bool VAR_9;

 if (VAR_2->level == VAR_0) {
  VAR_6 = (u64 *)VAR_2->level1.addr;
  VAR_9 = FUNC_0(VAR_6, VAR_2->total_cnt, VAR_3);
  return VAR_9;
 }

 VAR_7 = (u64 *)VAR_5->addr;

 for (VAR_8 = 0; VAR_8 < VAR_4->leaf_cnt; VAR_8++, VAR_5++) {
  VAR_6 = (u64 *)VAR_5->addr;
  if ((*VAR_7 + (VAR_8 * VAR_3 * VAR_1)) != *VAR_6)
   return 0;
  VAR_9 = FUNC_0(VAR_6, VAR_5->cnt, VAR_3);
  if (!VAR_9)
   return 0;
 }

 return 1;
}
