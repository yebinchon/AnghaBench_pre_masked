
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int capacity; scalar_t__ mask; scalar_t__ speed; struct pcd_unit* handle; int * ops; int * name; } ;
struct pcd_unit {int changed; int * name; TYPE_1__ info; scalar_t__ drive; scalar_t__ last_sense; scalar_t__ present; int pia; int * pi; struct gendisk* disk; int rq_list; int tag_set; } ;
struct gendisk {int first_minor; int events; int flags; int * fops; int disk_name; int major; TYPE_2__* queue; } ;
struct TYPE_6__ {struct pcd_unit* queuedata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_6 ;
 struct gendisk* FUNC_2 (int) ;
 TYPE_2__* FUNC_3 (int *,int *,int,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 scalar_t__*** VAR_7 ;
 int VAR_8 ;
 char* VAR_9 ;
 struct pcd_unit* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (struct gendisk*) ;
 int FUNC_6 (int *,int,char*,char*,int) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(void)
{
 struct pcd_unit *VAR_15;
 int VAR_16;

 VAR_13 = 0;
 for (VAR_16 = 0, VAR_15 = VAR_10; VAR_16 < VAR_6; VAR_16++, VAR_15++) {
  struct gendisk *VAR_17 = FUNC_2(1);

  if (!VAR_17)
   continue;

  VAR_17->queue = FUNC_3(&VAR_15->tag_set, &VAR_14,
         1, VAR_1);
  if (FUNC_1(VAR_17->queue)) {
   VAR_17->queue = ((void*)0);
   FUNC_5(VAR_17);
   continue;
  }

  FUNC_0(&VAR_15->rq_list);
  VAR_17->queue->queuedata = VAR_15;
  FUNC_4(VAR_17->queue, VAR_0);
  VAR_15->disk = VAR_17;
  VAR_15->pi = &VAR_15->pia;
  VAR_15->present = 0;
  VAR_15->last_sense = 0;
  VAR_15->changed = 1;
  VAR_15->drive = (*VAR_7[VAR_16])[VAR_4];
  if ((*VAR_7[VAR_16])[VAR_3])
   VAR_13++;

  VAR_15->name = &VAR_15->info.name[0];
  FUNC_6(VAR_15->name, sizeof(VAR_15->info.name), "%s%d", VAR_9, VAR_16);
  VAR_15->info.ops = &VAR_12;
  VAR_15->info.handle = VAR_15;
  VAR_15->info.speed = 0;
  VAR_15->info.capacity = 1;
  VAR_15->info.mask = 0;
  VAR_17->major = VAR_8;
  VAR_17->first_minor = VAR_16;
  FUNC_7(VAR_17->disk_name, VAR_15->name);
  VAR_17->fops = &VAR_11;
  VAR_17->flags = VAR_5;
  VAR_17->events = VAR_2;
 }
}
