
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ide_disk_obj {int openers; TYPE_2__* drive; } ;
struct gendisk {int dummy; } ;
struct TYPE_6__ {int dev_flags; TYPE_1__* disk_ops; } ;
typedef TYPE_2__ ide_drive_t ;
typedef int fmode_t ;
struct TYPE_5__ {int (* set_doorlock ) (TYPE_2__*,struct gendisk*,int ) ;int (* flush ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int FUNC_1 (struct ide_disk_obj*) ;
 struct ide_disk_obj* FUNC_2 (struct gendisk*,int ) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,struct gendisk*,int ) ;

__attribute__((used)) static void FUNC_7(struct gendisk *VAR_5, fmode_t VAR_6)
{
 struct ide_disk_obj *VAR_7 = FUNC_2(VAR_5, VAR_3);
 ide_drive_t *VAR_8 = VAR_7->drive;

 FUNC_0(VAR_0, "enter");

 FUNC_3(&VAR_4);
 if (VAR_7->openers == 1)
  VAR_8->disk_ops->flush(VAR_8);

 if ((VAR_8->dev_flags & VAR_2) && VAR_7->openers == 1) {
  VAR_8->disk_ops->set_doorlock(VAR_8, VAR_5, 0);
  VAR_8->dev_flags &= ~VAR_1;
 }

 VAR_7->openers--;

 FUNC_1(VAR_7);
 FUNC_4(&VAR_4);
}
