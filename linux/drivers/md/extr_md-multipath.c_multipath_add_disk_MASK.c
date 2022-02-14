
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct multipath_info {int * rdev; } ;
struct mpconf {int device_lock; struct multipath_info* multipaths; } ;
struct mddev {int raid_disks; int degraded; int gendisk; struct mpconf* private; } ;
struct md_rdev {int raid_disk; int data_offset; int flags; int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct md_rdev*,struct mddev*) ;
 int FUNC_2 (struct mpconf*) ;
 int FUNC_3 (int *,struct md_rdev*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct mddev *VAR_2, struct md_rdev *VAR_3)
{
 struct mpconf *VAR_4 = VAR_2->private;
 int VAR_5 = -VAR_0;
 int VAR_6;
 struct multipath_info *VAR_7;
 int VAR_8 = 0;
 int VAR_9 = VAR_2->raid_disks - 1;

 if (VAR_3->raid_disk >= 0)
  VAR_8 = VAR_9 = VAR_3->raid_disk;

 FUNC_2(VAR_4);

 for (VAR_6 = VAR_8; VAR_6 <= VAR_9; VAR_6++)
  if ((VAR_7=VAR_4->multipaths+VAR_6)->rdev == ((void*)0)) {
   FUNC_0(VAR_2->gendisk, VAR_3->bdev,
       VAR_3->data_offset << 9);

   VAR_5 = FUNC_1(VAR_3, VAR_2);
   if (VAR_5)
    break;
   FUNC_5(&VAR_4->device_lock);
   VAR_2->degraded--;
   VAR_3->raid_disk = VAR_6;
   FUNC_4(VAR_1, &VAR_3->flags);
   FUNC_6(&VAR_4->device_lock);
   FUNC_3(VAR_7->rdev, VAR_3);
   VAR_5 = 0;
   break;
  }

 FUNC_2(VAR_4);

 return VAR_5;
}
