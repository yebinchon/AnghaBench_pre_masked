
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bio_prison_cell {int bios; scalar_t__ holder; int node; } ;
struct dm_bio_prison {int cells; } ;
struct bio_list {int dummy; } ;


 int FUNC_0 (struct bio_list*,scalar_t__) ;
 int FUNC_1 (struct bio_list*,int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct dm_bio_prison *VAR_0,
      struct dm_bio_prison_cell *VAR_1,
      struct bio_list *VAR_2)
{
 FUNC_2(&VAR_1->node, &VAR_0->cells);

 if (VAR_2) {
  if (VAR_1->holder)
   FUNC_0(VAR_2, VAR_1->holder);
  FUNC_1(VAR_2, &VAR_1->bios);
 }
}
