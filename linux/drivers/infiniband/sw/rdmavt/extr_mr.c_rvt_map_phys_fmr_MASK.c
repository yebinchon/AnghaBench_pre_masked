
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u64 ;
typedef int u32 ;
struct rvt_lkey_table {int lock; } ;
struct TYPE_5__ {int count; } ;
struct TYPE_8__ {int max_segs; int page_shift; int length; TYPE_3__** map; void* iova; void* user_base; TYPE_1__ refcount; } ;
struct rvt_fmr {TYPE_4__ mr; } ;
struct rvt_dev_info {struct rvt_lkey_table lkey_table; } ;
struct ib_fmr {int device; } ;
struct TYPE_7__ {TYPE_2__* segs; } ;
struct TYPE_6__ {int length; void* vaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int *) ;
 struct rvt_dev_info* FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct rvt_fmr* FUNC_4 (struct ib_fmr*) ;
 int FUNC_5 (TYPE_4__*,int,int,void*,int) ;

int FUNC_6(struct ib_fmr *VAR_3, u64 *VAR_4,
       int VAR_5, u64 VAR_6)
{
 struct rvt_fmr *VAR_7 = FUNC_4(VAR_3);
 struct rvt_lkey_table *VAR_8;
 unsigned long VAR_9;
 int VAR_10, VAR_11;
 unsigned long VAR_12;
 u32 VAR_13;
 struct rvt_dev_info *VAR_14 = FUNC_1(VAR_3->device);

 VAR_12 = FUNC_0(&VAR_7->mr.refcount.count);
 if (VAR_12 > 2)
  return -VAR_0;

 if (VAR_5 > VAR_7->mr.max_segs)
  return -VAR_1;

 VAR_8 = &VAR_14->lkey_table;
 FUNC_2(&VAR_8->lock, VAR_9);
 VAR_7->mr.user_base = VAR_6;
 VAR_7->mr.iova = VAR_6;
 VAR_13 = 1 << VAR_7->mr.page_shift;
 VAR_7->mr.length = VAR_5 * VAR_13;
 VAR_10 = 0;
 VAR_11 = 0;
 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  VAR_7->mr.map[VAR_10]->segs[VAR_11].vaddr = (void *)VAR_4[VAR_12];
  VAR_7->mr.map[VAR_10]->segs[VAR_11].length = VAR_13;
  FUNC_5(&VAR_7->mr, VAR_10, VAR_11, (void *)VAR_4[VAR_12], VAR_13);
  if (++VAR_11 == VAR_2) {
   VAR_10++;
   VAR_11 = 0;
  }
 }
 FUNC_3(&VAR_8->lock, VAR_9);
 return 0;
}
