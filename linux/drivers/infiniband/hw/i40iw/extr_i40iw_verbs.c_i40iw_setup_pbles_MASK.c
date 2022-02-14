
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct i40iw_pble_info {scalar_t__ addr; } ;
struct TYPE_2__ {struct i40iw_pble_info* leaf; } ;
struct i40iw_pble_alloc {int level; TYPE_1__ level2; struct i40iw_pble_info level1; } ;
struct i40iw_pbl {int pbl_allocated; struct i40iw_pble_alloc pble_alloc; } ;
struct i40iw_mr {int * pgaddrmem; int page_cnt; struct i40iw_pbl iwpbl; } ;
struct i40iw_device {int pbl_mutex; int pble_rsrc; int sc_dev; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
typedef enum i40iw_pble_level { ____Placeholder_i40iw_pble_level } i40iw_pble_level ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i40iw_mr*,int *,int) ;
 int FUNC_1 (int *,int ,struct i40iw_pble_alloc*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct i40iw_device *VAR_2,
        struct i40iw_mr *VAR_3,
        bool VAR_4)
{
 struct i40iw_pbl *VAR_5 = &VAR_3->iwpbl;
 struct i40iw_pble_alloc *VAR_6 = &VAR_5->pble_alloc;
 struct i40iw_pble_info *VAR_7;
 u64 *VAR_8;
 enum i40iw_status_code VAR_9;
 enum i40iw_pble_level VAR_10 = VAR_1;

 if (VAR_4) {
  FUNC_2(&VAR_2->pbl_mutex);
  VAR_9 = FUNC_1(&VAR_2->sc_dev, VAR_2->pble_rsrc, VAR_6, VAR_3->page_cnt);
  FUNC_3(&VAR_2->pbl_mutex);
  if (VAR_9)
   return -VAR_0;

  VAR_5->pbl_allocated = 1;
  VAR_10 = VAR_6->level;
  VAR_7 = (VAR_10 == VAR_1) ? &VAR_6->level1 : VAR_6->level2.leaf;
  VAR_8 = (u64 *)VAR_7->addr;
 } else {
  VAR_8 = VAR_3->pgaddrmem;
 }

 FUNC_0(VAR_3, VAR_8, VAR_10);

 if (VAR_4)
  VAR_3->pgaddrmem[0] = *VAR_8;

 return 0;
}
