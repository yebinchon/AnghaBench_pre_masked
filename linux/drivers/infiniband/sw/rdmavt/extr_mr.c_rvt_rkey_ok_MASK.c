
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef size_t u32 ;
struct rvt_sge {size_t length; size_t sge_length; unsigned int m; unsigned int n; void* vaddr; struct rvt_mregion* mr; } ;
struct TYPE_6__ {scalar_t__ pd; int device; } ;
struct rvt_qp {TYPE_2__ ibqp; } ;
struct TYPE_5__ {int device; } ;
struct rvt_pd {scalar_t__ user; TYPE_1__ ibpd; } ;
struct rvt_mregion {size_t lkey; scalar_t__ pd; scalar_t__ iova; size_t length; int access_flags; int page_shift; TYPE_4__** map; scalar_t__ offset; int lkey_invalid; int lkey_published; } ;
struct rvt_lkey_table {size_t shift; int * table; } ;
struct rvt_dev_info {int dma_mr; struct rvt_lkey_table lkey_table; } ;
struct TYPE_8__ {TYPE_3__* segs; } ;
struct TYPE_7__ {size_t length; void* vaddr; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 struct rvt_dev_info* FUNC_2 (int ) ;
 struct rvt_pd* FUNC_3 (scalar_t__) ;
 struct rvt_mregion* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct rvt_mregion*) ;
 int FUNC_8 (struct rvt_mregion*) ;
 scalar_t__ FUNC_9 (int) ;

int FUNC_10(struct rvt_qp *VAR_1, struct rvt_sge *VAR_2,
  u32 VAR_3, u64 VAR_4, u32 VAR_5, int VAR_6)
{
 struct rvt_dev_info *VAR_7 = FUNC_2(VAR_1->ibqp.device);
 struct rvt_lkey_table *VAR_8 = &VAR_7->lkey_table;
 struct rvt_mregion *VAR_9;
 unsigned VAR_10, VAR_11;
 size_t VAR_12;





 FUNC_5();
 if (VAR_5 == 0) {
  struct rvt_pd *VAR_13 = FUNC_3(VAR_1->ibqp.pd);
  struct rvt_dev_info *VAR_14 = FUNC_2(VAR_13->ibpd.device);

  if (VAR_13->user)
   goto bail;
  VAR_9 = FUNC_4(VAR_14->dma_mr);
  if (!VAR_9)
   goto bail;
  FUNC_7(VAR_9);
  FUNC_6();

  VAR_2->mr = VAR_9;
  VAR_2->vaddr = (void *)VAR_4;
  VAR_2->length = VAR_3;
  VAR_2->sge_length = VAR_3;
  VAR_2->m = 0;
  VAR_2->n = 0;
  goto ok;
 }

 VAR_9 = FUNC_4(VAR_8->table[VAR_5 >> VAR_8->shift]);
 if (!VAR_9)
  goto bail;
 FUNC_7(VAR_9);

 if (!FUNC_0(VAR_9->lkey_published))
  goto bail_unref;
 if (FUNC_9(FUNC_1(&VAR_9->lkey_invalid) ||
       VAR_9->lkey != VAR_5 || VAR_1->ibqp.pd != VAR_9->pd))
  goto bail_unref;

 VAR_12 = VAR_4 - VAR_9->iova;
 if (FUNC_9(VAR_4 < VAR_9->iova || VAR_12 + VAR_3 > VAR_9->length ||
       (VAR_9->access_flags & VAR_6) == 0))
  goto bail_unref;
 FUNC_6();

 VAR_12 += VAR_9->offset;
 if (VAR_9->page_shift) {





  size_t VAR_15;

  VAR_15 = VAR_12 >> VAR_9->page_shift;
  VAR_12 -= (VAR_15 << VAR_9->page_shift);
  VAR_11 = VAR_15 / VAR_0;
  VAR_10 = VAR_15 % VAR_0;
 } else {
  VAR_11 = 0;
  VAR_10 = 0;
  while (VAR_12 >= VAR_9->map[VAR_11]->segs[VAR_10].length) {
   VAR_12 -= VAR_9->map[VAR_11]->segs[VAR_10].length;
   VAR_10++;
   if (VAR_10 >= VAR_0) {
    VAR_11++;
    VAR_10 = 0;
   }
  }
 }
 VAR_2->mr = VAR_9;
 VAR_2->vaddr = VAR_9->map[VAR_11]->segs[VAR_10].vaddr + VAR_12;
 VAR_2->length = VAR_9->map[VAR_11]->segs[VAR_10].length - VAR_12;
 VAR_2->sge_length = VAR_3;
 VAR_2->m = VAR_11;
 VAR_2->n = VAR_10;
ok:
 return 1;
bail_unref:
 FUNC_8(VAR_9);
bail:
 FUNC_6();
 return 0;
}
