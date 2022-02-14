
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ib_mr {int dummy; } ;
struct TYPE_2__ {scalar_t__ addr; } ;
struct i40iw_pble_alloc {TYPE_1__ level1; } ;
struct i40iw_pbl {struct i40iw_pble_alloc pble_alloc; } ;
struct i40iw_mr {scalar_t__ npages; scalar_t__ page_cnt; struct i40iw_pbl iwpbl; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct i40iw_mr* FUNC_1 (struct ib_mr*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct ib_mr *VAR_1, u64 VAR_2)
{
 struct i40iw_mr *VAR_3 = FUNC_1(VAR_1);
 struct i40iw_pbl *VAR_4 = &VAR_3->iwpbl;
 struct i40iw_pble_alloc *VAR_5 = &VAR_4->pble_alloc;
 u64 *VAR_6;

 if (FUNC_2(VAR_3->npages == VAR_3->page_cnt))
  return -VAR_0;

 VAR_6 = (u64 *)VAR_5->level1.addr;
 VAR_6[VAR_3->npages++] = FUNC_0(VAR_2);
 return 0;
}
