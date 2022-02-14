
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rvt_sge {scalar_t__ length; scalar_t__ sge_length; unsigned int m; unsigned int n; void* vaddr; struct rvt_mregion* mr; } ;
struct TYPE_4__ {int device; } ;
struct rvt_pd {TYPE_1__ ibpd; scalar_t__ user; } ;
struct rvt_mregion {scalar_t__ lkey; size_t user_base; scalar_t__ length; int access_flags; int page_shift; TYPE_3__** map; scalar_t__ offset; TYPE_1__* pd; int lkey_invalid; int lkey_published; } ;
struct rvt_lkey_table {size_t shift; int * table; } ;
struct rvt_dev_info {int dma_mr; } ;
struct ib_sge {scalar_t__ lkey; size_t addr; scalar_t__ length; } ;
struct TYPE_6__ {TYPE_2__* segs; } ;
struct TYPE_5__ {size_t length; void* vaddr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 struct rvt_dev_info* FUNC_2 (int ) ;
 struct rvt_mregion* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct rvt_mregion*) ;
 int FUNC_7 (struct rvt_mregion*) ;
 scalar_t__ FUNC_8 (struct rvt_sge*,struct ib_sge*) ;
 int FUNC_9 (struct rvt_sge*,struct ib_sge*) ;
 scalar_t__ FUNC_10 (int) ;

int FUNC_11(struct rvt_lkey_table *VAR_2, struct rvt_pd *VAR_3,
  struct rvt_sge *VAR_4, struct rvt_sge *VAR_5,
  struct ib_sge *VAR_6, int VAR_7)
{
 struct rvt_mregion *VAR_8;
 unsigned VAR_9, VAR_10;
 size_t VAR_11;





 if (VAR_6->lkey == 0) {
  struct rvt_dev_info *VAR_12 = FUNC_2(VAR_3->ibpd.device);

  if (VAR_3->user)
   return -VAR_0;
  if (FUNC_8(VAR_5, VAR_6))
   return 0;
  FUNC_4();
  VAR_8 = FUNC_3(VAR_12->dma_mr);
  if (!VAR_8)
   goto bail;
  FUNC_6(VAR_8);
  FUNC_5();

  VAR_4->mr = VAR_8;
  VAR_4->vaddr = (void *)VAR_6->addr;
  VAR_4->length = VAR_6->length;
  VAR_4->sge_length = VAR_6->length;
  VAR_4->m = 0;
  VAR_4->n = 0;
  goto ok;
 }
 if (FUNC_8(VAR_5, VAR_6))
  return 0;
 FUNC_4();
 VAR_8 = FUNC_3(VAR_2->table[VAR_6->lkey >> VAR_2->shift]);
 if (!VAR_8)
  goto bail;
 FUNC_6(VAR_8);
 if (!FUNC_0(VAR_8->lkey_published))
  goto bail_unref;

 if (FUNC_10(FUNC_1(&VAR_8->lkey_invalid) ||
       VAR_8->lkey != VAR_6->lkey || VAR_8->pd != &VAR_3->ibpd))
  goto bail_unref;

 VAR_11 = VAR_6->addr - VAR_8->user_base;
 if (FUNC_10(VAR_6->addr < VAR_8->user_base ||
       VAR_11 + VAR_6->length > VAR_8->length ||
       (VAR_8->access_flags & VAR_7) != VAR_7))
  goto bail_unref;
 FUNC_5();

 VAR_11 += VAR_8->offset;
 if (VAR_8->page_shift) {





  size_t VAR_13;

  VAR_13 = VAR_11 >> VAR_8->page_shift;
  VAR_11 -= (VAR_13 << VAR_8->page_shift);
  VAR_10 = VAR_13 / VAR_1;
  VAR_9 = VAR_13 % VAR_1;
 } else {
  VAR_10 = 0;
  VAR_9 = 0;
  while (VAR_11 >= VAR_8->map[VAR_10]->segs[VAR_9].length) {
   VAR_11 -= VAR_8->map[VAR_10]->segs[VAR_9].length;
   VAR_9++;
   if (VAR_9 >= VAR_1) {
    VAR_10++;
    VAR_9 = 0;
   }
  }
 }
 VAR_4->mr = VAR_8;
 VAR_4->vaddr = VAR_8->map[VAR_10]->segs[VAR_9].vaddr + VAR_11;
 VAR_4->length = VAR_8->map[VAR_10]->segs[VAR_9].length - VAR_11;
 VAR_4->sge_length = VAR_6->length;
 VAR_4->m = VAR_10;
 VAR_4->n = VAR_9;
ok:
 FUNC_9(VAR_4, VAR_6);
 return 1;
bail_unref:
 FUNC_7(VAR_8);
bail:
 FUNC_5();
 return -VAR_0;
}
