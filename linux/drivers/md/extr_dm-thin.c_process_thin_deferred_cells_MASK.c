
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_c {int lock; int deferred_cells; struct pool* pool; } ;
struct pool {int (* process_cell ) (struct thin_c*,struct dm_bio_prison_cell*) ;int (* process_discard_cell ) (struct thin_c*,struct dm_bio_prison_cell*) ;struct dm_bio_prison_cell** cell_sort_array; } ;
struct list_head {int dummy; } ;
struct dm_bio_prison_cell {int holder; int user_list; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct list_head*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct pool*) ;
 int FUNC_4 (int *,struct list_head*) ;
 scalar_t__ FUNC_5 (struct list_head*) ;
 int FUNC_6 (struct list_head*,int *) ;
 int FUNC_7 (int *,struct list_head*) ;
 unsigned int FUNC_8 (struct pool*,struct list_head*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct thin_c*,struct dm_bio_prison_cell*) ;
 int FUNC_12 (struct thin_c*,struct dm_bio_prison_cell*) ;

__attribute__((used)) static void FUNC_13(struct thin_c *VAR_1)
{
 struct pool *VAR_2 = VAR_1->pool;
 unsigned long VAR_3;
 struct list_head VAR_4;
 struct dm_bio_prison_cell *VAR_5;
 unsigned VAR_6, VAR_7, VAR_8;

 FUNC_1(&VAR_4);

 FUNC_9(&VAR_1->lock, VAR_3);
 FUNC_7(&VAR_1->deferred_cells, &VAR_4);
 FUNC_10(&VAR_1->lock, VAR_3);

 if (FUNC_5(&VAR_4))
  return;

 do {
  VAR_8 = FUNC_8(VAR_1->pool, &VAR_4);

  for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
   VAR_5 = VAR_2->cell_sort_array[VAR_6];
   FUNC_0(!VAR_5->holder);






   if (FUNC_3(VAR_2)) {
    for (VAR_7 = VAR_6; VAR_7 < VAR_8; VAR_7++)
     FUNC_4(&VAR_2->cell_sort_array[VAR_7]->user_list, &VAR_4);

    FUNC_9(&VAR_1->lock, VAR_3);
    FUNC_6(&VAR_4, &VAR_1->deferred_cells);
    FUNC_10(&VAR_1->lock, VAR_3);
    return;
   }

   if (FUNC_2(VAR_5->holder) == VAR_0)
    VAR_2->process_discard_cell(VAR_1, VAR_5);
   else
    VAR_2->process_cell(VAR_1, VAR_5);
  }
 } while (!FUNC_5(&VAR_4));
}
