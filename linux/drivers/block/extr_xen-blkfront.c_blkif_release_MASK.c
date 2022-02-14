
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {scalar_t__ state; } ;
struct gendisk {struct blkfront_info* private_data; int disk_name; } ;
struct block_device {int bd_disk; scalar_t__ bd_openers; } ;
struct blkfront_info {int mutex; struct xenbus_device* xbdev; } ;
typedef int fmode_t ;


 int FUNC_0 (int,char*,int ) ;
 scalar_t__ VAR_0 ;
 struct block_device* FUNC_1 (struct gendisk*,int ) ;
 int FUNC_2 (struct block_device*) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct blkfront_info*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct xenbus_device*) ;
 int FUNC_9 (struct blkfront_info*) ;

__attribute__((used)) static void FUNC_10(struct gendisk *VAR_2, fmode_t VAR_3)
{
 struct blkfront_info *VAR_4 = VAR_2->private_data;
 struct block_device *VAR_5;
 struct xenbus_device *VAR_6;

 FUNC_6(&VAR_1);

 VAR_5 = FUNC_1(VAR_2, 0);

 if (!VAR_5) {
  FUNC_0(1, "Block device %s yanked out from us!\n", VAR_2->disk_name);
  goto out_mutex;
 }
 if (VAR_5->bd_openers)
  goto out;






 FUNC_6(&VAR_4->mutex);
 VAR_6 = VAR_4->xbdev;

 if (VAR_6 && VAR_6->state == VAR_0) {

  FUNC_3(FUNC_4(VAR_5->bd_disk), "releasing disk\n");
  FUNC_9(VAR_4);
  FUNC_8(VAR_4->xbdev);
  }

 FUNC_7(&VAR_4->mutex);

 if (!VAR_6) {

  FUNC_3(FUNC_4(VAR_5->bd_disk), "releasing disk\n");
  FUNC_9(VAR_4);
  VAR_2->private_data = ((void*)0);
  FUNC_5(VAR_4);
 }

out:
 FUNC_2(VAR_5);
out_mutex:
 FUNC_7(&VAR_1);
}
