
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dm_bio_prison_cell {TYPE_2__* holder; } ;
struct TYPE_3__ {scalar_t__ bi_sector; } ;
struct TYPE_4__ {TYPE_1__ bi_iter; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 struct dm_bio_prison_cell *VAR_2 = *((struct dm_bio_prison_cell **) VAR_0);
 struct dm_bio_prison_cell *VAR_3 = *((struct dm_bio_prison_cell **) VAR_1);

 FUNC_0(!VAR_2->holder);
 FUNC_0(!VAR_3->holder);

 if (VAR_2->holder->bi_iter.bi_sector < VAR_3->holder->bi_iter.bi_sector)
  return -1;

 if (VAR_2->holder->bi_iter.bi_sector > VAR_3->holder->bi_iter.bi_sector)
  return 1;

 return 0;
}
