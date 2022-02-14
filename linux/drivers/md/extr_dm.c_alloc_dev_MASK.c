
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int completion; } ;
struct mapped_device {int numa_node_id; int init_tio_pdu; int stats; int bdev; TYPE_4__* disk; int wq; int name; int dax_dev; TYPE_3__* queue; TYPE_2__ kobj_holder; int eventq; int work; int wait; int uevent_lock; int table_devices; int uevent_list; int uevent_seq; int event_nr; int open_count; int holders; int deferred_lock; int table_devices_lock; int type_lock; int suspend_lock; int type; int io_barrier; } ;
struct TYPE_10__ {int first_minor; int disk_name; struct mapped_device* private_data; TYPE_3__* queue; int * fops; int major; } ;
struct TYPE_9__ {TYPE_1__* backing_dev_info; struct mapped_device* queuedata; } ;
struct TYPE_7__ {struct mapped_device* congested_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 void* VAR_4 ;
 int FUNC_5 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (struct mapped_device*,int ,int *,int ) ;
 TYPE_4__* FUNC_8 (int,int) ;
 int FUNC_9 (char*,int ,int ) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (TYPE_4__*,int ) ;
 TYPE_3__* FUNC_12 (int ,int) ;
 int FUNC_13 (struct mapped_device*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_14 () ;
 int FUNC_15 (int *) ;
 int VAR_12 ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int) ;
 void* FUNC_18 (int *,struct mapped_device*,int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (struct mapped_device*) ;
 struct mapped_device* FUNC_23 (int,int ,int) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int*) ;
 int FUNC_27 (int) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int ,char*,int) ;
 int FUNC_32 (int ) ;

__attribute__((used)) static struct mapped_device *FUNC_33(int VAR_13)
{
 int VAR_14, VAR_15 = FUNC_14();
 struct mapped_device *VAR_16;
 void *VAR_17;

 VAR_16 = FUNC_23(sizeof(*VAR_16), VAR_3, VAR_15);
 if (!VAR_16) {
  FUNC_1("unable to allocate device, out of memory.");
  return ((void*)0);
 }

 if (!FUNC_32(VAR_5))
  goto bad_module_get;


 if (VAR_13 == VAR_1)
  VAR_14 = FUNC_26(&VAR_13);
 else
  VAR_14 = FUNC_27(VAR_13);
 if (VAR_14 < 0)
  goto bad_minor;

 VAR_14 = FUNC_20(&VAR_16->io_barrier);
 if (VAR_14 < 0)
  goto bad_io_barrier;

 VAR_16->numa_node_id = VAR_15;
 VAR_16->init_tio_pdu = 0;
 VAR_16->type = VAR_2;
 FUNC_25(&VAR_16->suspend_lock);
 FUNC_25(&VAR_16->type_lock);
 FUNC_25(&VAR_16->table_devices_lock);
 FUNC_29(&VAR_16->deferred_lock);
 FUNC_10(&VAR_16->holders, 1);
 FUNC_10(&VAR_16->open_count, 0);
 FUNC_10(&VAR_16->event_nr, 0);
 FUNC_10(&VAR_16->uevent_seq, 0);
 FUNC_2(&VAR_16->uevent_list);
 FUNC_2(&VAR_16->table_devices);
 FUNC_29(&VAR_16->uevent_lock);

 VAR_16->queue = FUNC_12(VAR_3, VAR_15);
 if (!VAR_16->queue)
  goto bad;
 VAR_16->queue->queuedata = VAR_16;
 VAR_16->queue->backing_dev_info->congested_data = VAR_16;

 VAR_16->disk = FUNC_8(1, VAR_16->numa_node_id);
 if (!VAR_16->disk)
  goto bad;

 FUNC_21(&VAR_16->wait);
 FUNC_3(&VAR_16->work, VAR_12);
 FUNC_21(&VAR_16->eventq);
 FUNC_19(&VAR_16->kobj_holder.completion);

 VAR_16->disk->major = VAR_7;
 VAR_16->disk->first_minor = VAR_13;
 VAR_16->disk->fops = &VAR_10;
 VAR_16->disk->queue = VAR_16->queue;
 VAR_16->disk->private_data = VAR_16;
 FUNC_31(VAR_16->disk->disk_name, "dm-%d", VAR_13);

 if (FUNC_4(VAR_0)) {
  VAR_16->dax_dev = FUNC_7(VAR_16, VAR_16->disk->disk_name,
     &VAR_11, 0);
  if (!VAR_16->dax_dev)
   goto bad;
 }

 FUNC_6(VAR_16->disk);
 FUNC_16(VAR_16->name, FUNC_5(VAR_7, VAR_13));

 VAR_16->wq = FUNC_9("kdmflush", VAR_6, 0);
 if (!VAR_16->wq)
  goto bad;

 VAR_16->bdev = FUNC_11(VAR_16->disk, 0);
 if (!VAR_16->bdev)
  goto bad;

 FUNC_15(&VAR_16->stats);


 FUNC_28(&VAR_9);
 VAR_17 = FUNC_18(&VAR_8, VAR_16, VAR_13);
 FUNC_30(&VAR_9);

 FUNC_0(VAR_17 != VAR_4);

 return VAR_16;

bad:
 FUNC_13(VAR_16);
bad_io_barrier:
 FUNC_17(VAR_13);
bad_minor:
 FUNC_24(VAR_5);
bad_module_get:
 FUNC_22(VAR_16);
 return ((void*)0);
}
