
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct of_device_id {int dummy; } ;
struct macio_dev {int dummy; } ;
struct gendisk {size_t first_minor; TYPE_1__* queue; int disk_name; int flags; int events; struct floppy_state* private_data; int * fops; int major; } ;
struct floppy_state {int tag_set; } ;
struct TYPE_6__ {struct floppy_state* queuedata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 size_t VAR_7 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct gendisk*) ;
 struct gendisk* FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int *,int *,int,int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 struct gendisk** VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 struct floppy_state* VAR_11 ;
 int FUNC_8 (struct floppy_state*,int ,int) ;
 int FUNC_9 (struct gendisk*) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (struct gendisk*,int) ;
 int FUNC_12 (int ,char*,size_t) ;
 int FUNC_13 (struct macio_dev*,size_t) ;
 int VAR_12 ;
 int FUNC_14 (int ,char*) ;

__attribute__((used)) static int FUNC_15(struct macio_dev *VAR_13,
   const struct of_device_id *VAR_14)
{
 struct floppy_state *VAR_15;
 struct gendisk *VAR_16;
 int VAR_17;

 if (VAR_9 >= VAR_7)
  return -VAR_4;

 if (VAR_9 == 0) {
  VAR_17 = FUNC_10(VAR_5, "fd");
  if (VAR_17)
   return VAR_17;
 }

 VAR_16 = FUNC_3(1);
 if (VAR_16 == ((void*)0)) {
  VAR_17 = -VAR_3;
  goto out_unregister;
 }

 VAR_15 = &VAR_11[VAR_9];
 FUNC_8(VAR_15, 0, sizeof(*VAR_15));

 VAR_16->queue = FUNC_6(&VAR_15->tag_set, &VAR_12, 2,
      VAR_1);
 if (FUNC_0(VAR_16->queue)) {
  VAR_17 = FUNC_1(VAR_16->queue);
  VAR_16->queue = ((void*)0);
  goto out_put_disk;
 }
 FUNC_7(VAR_16->queue, VAR_0);
 VAR_16->queue->queuedata = VAR_15;

 VAR_17 = FUNC_13(VAR_13, VAR_9);
 if (VAR_17)
  goto out_cleanup_queue;

 VAR_16->major = VAR_5;
 VAR_16->first_minor = VAR_9;
 VAR_16->fops = &VAR_10;
 VAR_16->private_data = VAR_15;
 VAR_16->events = VAR_2;
 VAR_16->flags |= VAR_6;
 FUNC_12(VAR_16->disk_name, "fd%d", VAR_9);
 FUNC_11(VAR_16, 2880);
 FUNC_2(VAR_16);

 VAR_8[VAR_9++] = VAR_16;
 return 0;

out_cleanup_queue:
 FUNC_4(VAR_16->queue);
 VAR_16->queue = ((void*)0);
 FUNC_5(&VAR_15->tag_set);
out_put_disk:
 FUNC_9(VAR_16);
out_unregister:
 if (VAR_9 == 0)
  FUNC_14(VAR_5, "fd");
 return VAR_17;
}
