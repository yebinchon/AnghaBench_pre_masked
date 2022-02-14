
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ide_disk_obj {TYPE_2__* drive; } ;
struct gendisk {int dummy; } ;
struct TYPE_6__ {TYPE_1__* disk_ops; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_5__ {int (* get_capacity ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 struct ide_disk_obj* FUNC_0 (struct gendisk*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (struct gendisk*,int ) ;
 int FUNC_3 (struct gendisk*,int ) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(struct gendisk *VAR_1)
{
 struct ide_disk_obj *VAR_2 = FUNC_0(VAR_1, VAR_0);
 ide_drive_t *VAR_3 = VAR_2->drive;

 if (FUNC_2(VAR_1, 0))
  VAR_3->disk_ops->get_capacity(VAR_3);

 FUNC_3(VAR_1, FUNC_1(VAR_3));
 return 0;
}
