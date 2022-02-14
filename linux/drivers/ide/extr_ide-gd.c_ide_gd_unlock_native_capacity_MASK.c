
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ide_disk_ops {int (* unlock_native_capacity ) (TYPE_1__*) ;} ;
struct ide_disk_obj {TYPE_1__* drive; } ;
struct gendisk {int dummy; } ;
struct TYPE_3__ {struct ide_disk_ops* disk_ops; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 struct ide_disk_obj* FUNC_0 (struct gendisk*,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct gendisk *VAR_1)
{
 struct ide_disk_obj *VAR_2 = FUNC_0(VAR_1, VAR_0);
 ide_drive_t *VAR_3 = VAR_2->drive;
 const struct ide_disk_ops *VAR_4 = VAR_3->disk_ops;

 if (VAR_4->unlock_native_capacity)
  VAR_4->unlock_native_capacity(VAR_3);
}
