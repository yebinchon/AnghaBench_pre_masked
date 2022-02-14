
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r5l_log {int io_list_lock; } ;
struct r5l_io_unit {TYPE_1__* current_bio; scalar_t__ has_fua; scalar_t__ has_flush; TYPE_1__* split_bio; } ;
struct TYPE_2__ {int bi_opf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct r5l_io_unit*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct r5l_log *VAR_3, struct r5l_io_unit *VAR_4)
{
 unsigned long VAR_5;

 FUNC_1(&VAR_3->io_list_lock, VAR_5);
 FUNC_0(VAR_4, VAR_0);
 FUNC_2(&VAR_3->io_list_lock, VAR_5);
 if (VAR_4->split_bio) {
  if (VAR_4->has_flush)
   VAR_4->split_bio->bi_opf |= VAR_2;
  if (VAR_4->has_fua)
   VAR_4->split_bio->bi_opf |= VAR_1;
  FUNC_3(VAR_4->split_bio);
 }

 if (VAR_4->has_flush)
  VAR_4->current_bio->bi_opf |= VAR_2;
 if (VAR_4->has_fua)
  VAR_4->current_bio->bi_opf |= VAR_1;
 FUNC_3(VAR_4->current_bio);
}
