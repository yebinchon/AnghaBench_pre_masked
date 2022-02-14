
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct i40iw_puda_rsrc {int bufpool_lock; int stats_buf_alloc_fail; int avail_buf_count; struct list_head bufpool; } ;
struct i40iw_puda_buf {int dummy; } ;


 struct i40iw_puda_buf* FUNC_0 (struct list_head*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

struct i40iw_puda_buf *FUNC_3(struct i40iw_puda_rsrc *VAR_0)
{
 struct i40iw_puda_buf *VAR_1 = ((void*)0);
 struct list_head *VAR_2 = &VAR_0->bufpool;
 unsigned long VAR_3;

 FUNC_1(&VAR_0->bufpool_lock, VAR_3);
 VAR_1 = FUNC_0(VAR_2);
 if (VAR_1)
  VAR_0->avail_buf_count--;
 else
  VAR_0->stats_buf_alloc_fail++;
 FUNC_2(&VAR_0->bufpool_lock, VAR_3);
 return VAR_1;
}
