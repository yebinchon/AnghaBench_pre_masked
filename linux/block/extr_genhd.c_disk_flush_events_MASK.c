
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {struct disk_events* ev; } ;
struct disk_events {unsigned int clearing; int lock; int dwork; int block; } ;


 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

void FUNC_3(struct gendisk *VAR_1, unsigned int VAR_2)
{
 struct disk_events *VAR_3 = VAR_1->ev;

 if (!VAR_3)
  return;

 FUNC_1(&VAR_3->lock);
 VAR_3->clearing |= VAR_2;
 if (!VAR_3->block)
  FUNC_0(VAR_0,
    &VAR_3->dwork, 0);
 FUNC_2(&VAR_3->lock);
}
