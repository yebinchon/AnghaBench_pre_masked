
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rvt_mregion {int lkey; int refcount; scalar_t__ lkey_published; TYPE_1__* pd; } ;
struct rvt_lkey_table {int lock; int * table; } ;
struct TYPE_4__ {int lkey_table_size; } ;
struct rvt_dev_info {TYPE_2__ dparms; int dma_mr; struct rvt_lkey_table lkey_table; } ;
struct TYPE_3__ {int device; } ;


 struct rvt_dev_info* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct rvt_mregion*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct rvt_mregion *VAR_0)
{
 unsigned long VAR_1;
 u32 VAR_2 = VAR_0->lkey;
 u32 VAR_3;
 struct rvt_dev_info *VAR_4 = FUNC_0(VAR_0->pd->device);
 struct rvt_lkey_table *VAR_5 = &VAR_4->lkey_table;
 int VAR_6 = 0;

 FUNC_4(&VAR_5->lock, VAR_1);
 if (!VAR_2) {
  if (VAR_0->lkey_published) {
   VAR_0->lkey_published = 0;

   FUNC_2(VAR_4->dma_mr, ((void*)0));
   FUNC_3(VAR_0);
  }
 } else {
  if (!VAR_0->lkey_published)
   goto out;
  VAR_3 = VAR_2 >> (32 - VAR_4->dparms.lkey_table_size);
  VAR_0->lkey_published = 0;

  FUNC_2(VAR_5->table[VAR_3], ((void*)0));
 }
 VAR_6++;
out:
 FUNC_5(&VAR_5->lock, VAR_1);
 if (VAR_6)
  FUNC_1(&VAR_0->refcount);
}
