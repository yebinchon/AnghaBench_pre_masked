
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int queue_depth; int nr_hw_queues; struct ubd* driver_data; int flags; int numa_node; int * ops; } ;
struct ubd {TYPE_4__* queue; TYPE_7__ tag_set; int size; int * file; } ;
struct TYPE_14__ {struct ubd* queuedata; } ;
struct TYPE_13__ {int disk_name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (TYPE_7__*) ;
 TYPE_4__* FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (TYPE_4__*,int,int) ;
 TYPE_1__** VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (int ) ;
 struct ubd* VAR_7 ;
 int FUNC_10 (scalar_t__,int ,int,TYPE_1__**) ;
 int FUNC_11 (struct ubd*,int *) ;
 TYPE_1__** VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_12(int VAR_10, char **VAR_11)
{
 struct ubd *VAR_12 = &VAR_7[VAR_10];
 int VAR_13 = 0;

 if(VAR_12->file == ((void*)0))
  goto out;

 VAR_13 = FUNC_11(VAR_12, &VAR_12->size);
 if(VAR_13 < 0){
  *VAR_11 = "Couldn't determine size of device's file";
  goto out;
 }

 VAR_12->size = FUNC_2(VAR_12->size);

 VAR_12->tag_set.ops = &VAR_9;
 VAR_12->tag_set.queue_depth = 64;
 VAR_12->tag_set.numa_node = VAR_2;
 VAR_12->tag_set.flags = VAR_0;
 VAR_12->tag_set.driver_data = VAR_12;
 VAR_12->tag_set.nr_hw_queues = 1;

 VAR_13 = FUNC_4(&VAR_12->tag_set);
 if (VAR_13)
  goto out;

 VAR_12->queue = FUNC_6(&VAR_12->tag_set);
 if (FUNC_0(VAR_12->queue)) {
  VAR_13 = FUNC_1(VAR_12->queue);
  goto out_cleanup_tags;
 }

 VAR_12->queue->queuedata = VAR_12;
 FUNC_8(VAR_12->queue, 1, 0);

 FUNC_7(VAR_12->queue, VAR_1);
 VAR_13 = FUNC_10(VAR_3, VAR_12->size, VAR_10, &VAR_8[VAR_10]);
 if(VAR_13){
  *VAR_11 = "Failed to register device";
  goto out_cleanup_tags;
 }

 if (VAR_6 != VAR_3)
  FUNC_10(VAR_6, VAR_12->size, VAR_10,
      &VAR_4[VAR_10]);





 if (VAR_5)
  FUNC_9(VAR_8[VAR_10]->disk_name);

 VAR_13 = 0;
out:
 return VAR_13;

out_cleanup_tags:
 FUNC_5(&VAR_12->tag_set);
 if (!(FUNC_0(VAR_12->queue)))
  FUNC_3(VAR_12->queue);
 goto out;
}
