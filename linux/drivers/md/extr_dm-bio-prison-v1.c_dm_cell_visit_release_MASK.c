
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bio_prison_cell {int node; } ;
struct dm_bio_prison {int lock; int cells; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct dm_bio_prison *VAR_0,
      void (*VAR_1)(void *, struct dm_bio_prison_cell *),
      void *VAR_2,
      struct dm_bio_prison_cell *VAR_3)
{
 unsigned long VAR_4;

 FUNC_1(&VAR_0->lock, VAR_4);
 VAR_1(VAR_2, VAR_3);
 FUNC_0(&VAR_3->node, &VAR_0->cells);
 FUNC_2(&VAR_0->lock, VAR_4);
}
