
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bio_prison_cell {int bios; int node; } ;
struct dm_bio_prison {int cells; } ;
struct bio_list {int dummy; } ;


 int FUNC_0 (struct bio_list*,int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct dm_bio_prison *VAR_0,
         struct dm_bio_prison_cell *VAR_1,
         struct bio_list *VAR_2)
{
 FUNC_1(&VAR_1->node, &VAR_0->cells);
 FUNC_0(VAR_2, &VAR_1->bios);
}
