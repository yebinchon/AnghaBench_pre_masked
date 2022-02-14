
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mapped_device {int table_devices_lock; int type_lock; int suspend_lock; int * bdev; int io_barrier; scalar_t__ queue; TYPE_1__* disk; int * dax_dev; int io_bs; int bs; scalar_t__ wq; } ;
struct TYPE_3__ {int * private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct mapped_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct mapped_device *VAR_1)
{
 if (VAR_1->wq)
  FUNC_5(VAR_1->wq);
 FUNC_1(&VAR_1->bs);
 FUNC_1(&VAR_1->io_bs);

 if (VAR_1->dax_dev) {
  FUNC_7(VAR_1->dax_dev);
  FUNC_9(VAR_1->dax_dev);
  VAR_1->dax_dev = ((void*)0);
 }

 if (VAR_1->disk) {
  FUNC_11(&VAR_0);
  VAR_1->disk->private_data = ((void*)0);
  FUNC_12(&VAR_0);
  FUNC_4(VAR_1->disk);
  FUNC_10(VAR_1->disk);
 }

 if (VAR_1->queue)
  FUNC_2(VAR_1->queue);

 FUNC_3(&VAR_1->io_barrier);

 if (VAR_1->bdev) {
  FUNC_0(VAR_1->bdev);
  VAR_1->bdev = ((void*)0);
 }

 FUNC_8(&VAR_1->suspend_lock);
 FUNC_8(&VAR_1->type_lock);
 FUNC_8(&VAR_1->table_devices_lock);

 FUNC_6(VAR_1);
}
