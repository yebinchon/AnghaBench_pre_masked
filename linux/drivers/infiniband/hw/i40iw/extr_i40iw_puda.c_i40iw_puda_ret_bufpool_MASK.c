
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_puda_rsrc {int avail_buf_count; int bufpool_lock; int bufpool; } ;
struct i40iw_puda_buf {int list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct i40iw_puda_rsrc *VAR_0,
       struct i40iw_puda_buf *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->bufpool_lock, VAR_2);
 FUNC_0(&VAR_1->list, &VAR_0->bufpool);
 FUNC_2(&VAR_0->bufpool_lock, VAR_2);
 VAR_0->avail_buf_count++;
}
