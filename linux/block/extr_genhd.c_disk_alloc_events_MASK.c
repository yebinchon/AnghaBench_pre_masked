
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gendisk {struct disk_events* ev; int disk_name; int events; TYPE_1__* fops; } ;
struct disk_events {int block; int poll_msecs; int dwork; int block_mutex; int lock; struct gendisk* disk; int node; } ;
struct TYPE_2__ {int check_events; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 struct disk_events* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct gendisk *VAR_2)
{
 struct disk_events *VAR_3;

 if (!VAR_2->fops->check_events || !VAR_2->events)
  return;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);
 if (!VAR_3) {
  FUNC_4("%s: failed to initialize events\n", VAR_2->disk_name);
  return;
 }

 FUNC_1(&VAR_3->node);
 VAR_3->disk = VAR_2;
 FUNC_5(&VAR_3->lock);
 FUNC_3(&VAR_3->block_mutex);
 VAR_3->block = 1;
 VAR_3->poll_msecs = -1;
 FUNC_0(&VAR_3->dwork, VAR_1);

 VAR_2->ev = VAR_3;
}
