
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_pool_fmr {scalar_t__ remap_count; int list; int ref_count; struct ib_fmr_pool* pool; } ;
struct ib_fmr_pool {scalar_t__ max_remaps; scalar_t__ dirty_len; scalar_t__ dirty_watermark; int pool_lock; int work; int worker; int req_ser; int dirty_list; int free_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct ib_pool_fmr *VAR_0)
{
 struct ib_fmr_pool *VAR_1;
 unsigned long VAR_2;

 VAR_1 = VAR_0->pool;

 FUNC_3(&VAR_1->pool_lock, VAR_2);

 --VAR_0->ref_count;
 if (!VAR_0->ref_count) {
  if (VAR_0->remap_count < VAR_1->max_remaps) {
   FUNC_2(&VAR_0->list, &VAR_1->free_list);
  } else {
   FUNC_2(&VAR_0->list, &VAR_1->dirty_list);
   if (++VAR_1->dirty_len >= VAR_1->dirty_watermark) {
    FUNC_0(&VAR_1->req_ser);
    FUNC_1(VAR_1->worker, &VAR_1->work);
   }
  }
 }

 FUNC_4(&VAR_1->pool_lock, VAR_2);
}
