
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct rvt_mregion {int lkey_published; size_t lkey; TYPE_1__* pd; } ;
struct rvt_lkey_table {size_t next; int max; int gen; int lock; int * table; } ;
struct TYPE_4__ {int lkey_table_size; } ;
struct rvt_dev_info {TYPE_2__ dparms; int dma_mr; struct rvt_lkey_table lkey_table; } ;
struct TYPE_3__ {int device; } ;


 int VAR_0 ;
 struct rvt_dev_info* FUNC_0 (int ) ;
 struct rvt_mregion* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct rvt_mregion*) ;
 int FUNC_3 (struct rvt_mregion*) ;
 int FUNC_4 (struct rvt_mregion*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct rvt_mregion *VAR_1, int VAR_2)
{
 unsigned long VAR_3;
 u32 VAR_4;
 u32 VAR_5;
 int VAR_6 = 0;
 struct rvt_dev_info *VAR_7 = FUNC_0(VAR_1->pd->device);
 struct rvt_lkey_table *VAR_8 = &VAR_7->lkey_table;

 FUNC_3(VAR_1);
 FUNC_5(&VAR_8->lock, VAR_3);


 if (VAR_2) {
  struct rvt_mregion *VAR_9;

  VAR_9 = FUNC_1(VAR_7->dma_mr);
  if (!VAR_9) {
   VAR_1->lkey_published = 1;

   FUNC_2(VAR_7->dma_mr, VAR_1);
   FUNC_3(VAR_1);
  }
  goto success;
 }


 VAR_4 = VAR_8->next;
 VAR_5 = VAR_4;
 for (;;) {
  if (!FUNC_1(VAR_8->table[VAR_4]))
   break;
  VAR_4 = (VAR_4 + 1) & (VAR_8->max - 1);
  if (VAR_4 == VAR_5)
   goto bail;
 }
 VAR_8->next = (VAR_4 + 1) & (VAR_8->max - 1);




 VAR_8->gen++;



 VAR_1->lkey = (VAR_4 << (32 - VAR_7->dparms.lkey_table_size)) |
  ((((1 << (24 - VAR_7->dparms.lkey_table_size)) - 1) & VAR_8->gen)
   << 8);
 if (VAR_1->lkey == 0) {
  VAR_1->lkey |= 1 << 8;
  VAR_8->gen++;
 }
 VAR_1->lkey_published = 1;

 FUNC_2(VAR_8->table[VAR_4], VAR_1);
success:
 FUNC_6(&VAR_8->lock, VAR_3);
out:
 return VAR_6;
bail:
 FUNC_4(VAR_1);
 FUNC_6(&VAR_8->lock, VAR_3);
 VAR_6 = -VAR_0;
 goto out;
}
