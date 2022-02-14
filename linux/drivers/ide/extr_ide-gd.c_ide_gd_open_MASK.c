
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ide_disk_obj {int openers; TYPE_2__* drive; } ;
struct gendisk {int dummy; } ;
struct block_device {struct gendisk* bd_disk; } ;
struct TYPE_6__ {int dev_flags; TYPE_1__* disk_ops; } ;
typedef TYPE_2__ ide_drive_t ;
typedef int fmode_t ;
struct TYPE_5__ {int (* init_media ) (TYPE_2__*,struct gendisk*) ;int (* set_doorlock ) (TYPE_2__*,struct gendisk*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct block_device*) ;
 int FUNC_1 (int ,char*) ;
 struct ide_disk_obj* FUNC_2 (struct gendisk*) ;
 int FUNC_3 (struct ide_disk_obj*) ;
 int FUNC_4 (TYPE_2__*,struct gendisk*) ;
 int FUNC_5 (TYPE_2__*,struct gendisk*,int) ;

__attribute__((used)) static int FUNC_6(struct block_device *VAR_11, fmode_t VAR_12)
{
 struct gendisk *VAR_13 = VAR_11->bd_disk;
 struct ide_disk_obj *VAR_14;
 ide_drive_t *VAR_15;
 int VAR_16 = 0;

 VAR_14 = FUNC_2(VAR_13);
 if (VAR_14 == ((void*)0))
  return -VAR_2;

 VAR_15 = VAR_14->drive;

 FUNC_1(VAR_6, "enter");

 VAR_14->openers++;

 if ((VAR_15->dev_flags & VAR_9) && VAR_14->openers == 1) {
  VAR_15->dev_flags &= ~VAR_7;


  VAR_16 = VAR_15->disk_ops->init_media(VAR_15, VAR_13);






  if (VAR_16 && (VAR_12 & VAR_4) == 0) {
   VAR_16 = -VAR_1;
   goto out_put_idkp;
  }

  if ((VAR_15->dev_flags & VAR_10) && (VAR_12 & VAR_5)) {
   VAR_16 = -VAR_3;
   goto out_put_idkp;
  }






  VAR_15->disk_ops->set_doorlock(VAR_15, VAR_13, 1);
  VAR_15->dev_flags |= VAR_8;
  FUNC_0(VAR_11);
 } else if (VAR_15->dev_flags & VAR_7) {
  VAR_16 = -VAR_0;
  goto out_put_idkp;
 }
 return 0;

out_put_idkp:
 VAR_14->openers--;
 FUNC_3(VAR_14);
 return VAR_16;
}
