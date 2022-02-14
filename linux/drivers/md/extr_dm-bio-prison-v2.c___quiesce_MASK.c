
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct dm_bio_prison_v2 {int wq; } ;
struct dm_bio_prison_cell_v2 {struct work_struct* quiesce_continuation; int shared_count; } ;


 int FUNC_0 (int ,struct work_struct*) ;

__attribute__((used)) static void FUNC_1(struct dm_bio_prison_v2 *VAR_0,
        struct dm_bio_prison_cell_v2 *VAR_1,
        struct work_struct *VAR_2)
{
 if (!VAR_1->shared_count)
  FUNC_0(VAR_0->wq, VAR_2);
 else
  VAR_1->quiesce_continuation = VAR_2;
}
