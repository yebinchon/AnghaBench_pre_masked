
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ide_tape_obj {scalar_t__ chrdev_dir; scalar_t__ door_locked; int disk; TYPE_1__* drive; } ;
struct file {struct ide_tape_obj* private_data; } ;
struct TYPE_6__ {int atapi_flags; struct ide_tape_obj* driver_data; } ;
typedef TYPE_1__ ide_drive_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (struct ide_tape_obj*) ;
 int VAR_8 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,unsigned int) ;
 int FUNC_7 (int ) ;
 unsigned int FUNC_8 (struct inode*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_9, struct file *VAR_10)
{
 struct ide_tape_obj *VAR_11 = VAR_10->private_data;
 ide_drive_t *VAR_12 = VAR_11->drive;
 unsigned int VAR_13 = FUNC_8(VAR_9);

 FUNC_9(&VAR_8);

 VAR_11 = VAR_12->driver_data;

 FUNC_1(VAR_7, "enter");

 if (VAR_11->chrdev_dir == VAR_4)
  FUNC_6(VAR_12, VAR_13);
 if (VAR_11->chrdev_dir == VAR_3) {
  if (VAR_13 < 128)
   FUNC_3(VAR_12, 1);
 }

 if (VAR_13 < 128 && FUNC_11(FUNC_7(VAR_6),
        &VAR_12->atapi_flags))
  (void) FUNC_5(VAR_12);

 if (VAR_11->chrdev_dir == VAR_2) {
  if (VAR_11->door_locked == VAR_0) {
   if (!FUNC_2(VAR_12, VAR_11->disk, 0))
    VAR_11->door_locked = VAR_1;
  }
 }
 FUNC_0(FUNC_7(VAR_5), &VAR_12->atapi_flags);
 FUNC_4(VAR_11);

 FUNC_10(&VAR_8);

 return 0;
}
