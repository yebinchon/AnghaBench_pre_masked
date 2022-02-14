
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bio_prison_cell {int bios; int holder; int node; } ;
struct dm_bio_prison {int cells; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(struct dm_bio_prison *VAR_0,
    struct dm_bio_prison_cell *VAR_1)
{
 if (FUNC_0(&VAR_1->bios)) {
  FUNC_2(&VAR_1->node, &VAR_0->cells);
  return 1;
 }

 VAR_1->holder = FUNC_1(&VAR_1->bios);
 return 0;
}
