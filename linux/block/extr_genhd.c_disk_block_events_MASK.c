
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {struct disk_events* ev; } ;
struct disk_events {int block_mutex; int dwork; int lock; int block; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct gendisk *VAR_0)
{
 struct disk_events *VAR_1 = VAR_0->ev;
 unsigned long VAR_2;
 bool VAR_3;

 if (!VAR_1)
  return;





 FUNC_1(&VAR_1->block_mutex);

 FUNC_3(&VAR_1->lock, VAR_2);
 VAR_3 = !VAR_1->block++;
 FUNC_4(&VAR_1->lock, VAR_2);

 if (VAR_3)
  FUNC_0(&VAR_0->ev->dwork);

 FUNC_2(&VAR_1->block_mutex);
}
