
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct gendisk {int first_minor; int disk_name; int flags; struct brd_device* private_data; int * fops; int major; } ;
struct brd_device {int brd_number; TYPE_2__* brd_queue; struct gendisk* brd_disk; int brd_pages; int brd_lock; } ;
struct TYPE_10__ {TYPE_1__* backing_dev_info; } ;
struct TYPE_9__ {int capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct gendisk* FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (struct brd_device*) ;
 struct brd_device* FUNC_10 (int,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_11 (struct gendisk*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,char*,int) ;

__attribute__((used)) static struct brd_device *FUNC_14(int VAR_12)
{
 struct brd_device *VAR_13;
 struct gendisk *VAR_14;

 VAR_13 = FUNC_10(sizeof(*VAR_13), VAR_3);
 if (!VAR_13)
  goto out;
 VAR_13->brd_number = VAR_12;
 FUNC_12(&VAR_13->brd_lock);
 FUNC_0(&VAR_13->brd_pages, VAR_2);

 VAR_13->brd_queue = FUNC_2(VAR_3);
 if (!VAR_13->brd_queue)
  goto out_free_dev;

 FUNC_6(VAR_13->brd_queue, VAR_9);
 FUNC_7(VAR_13->brd_queue, 1024);







 FUNC_8(VAR_13->brd_queue, VAR_4);
 VAR_14 = VAR_13->brd_disk = FUNC_1(VAR_10);
 if (!VAR_14)
  goto out_free_queue;
 VAR_14->major = VAR_7;
 VAR_14->first_minor = VAR_12 * VAR_10;
 VAR_14->fops = &VAR_8;
 VAR_14->private_data = VAR_13;
 VAR_14->flags = VAR_1;
 FUNC_13(VAR_14->disk_name, "ram%d", VAR_12);
 FUNC_11(VAR_14, VAR_11 * 2);
 VAR_13->brd_queue->backing_dev_info->capabilities |= VAR_0;


 FUNC_5(VAR_6, VAR_13->brd_queue);
 FUNC_4(VAR_5, VAR_13->brd_queue);

 return VAR_13;

out_free_queue:
 FUNC_3(VAR_13->brd_queue);
out_free_dev:
 FUNC_9(VAR_13);
out:
 return ((void*)0);
}
