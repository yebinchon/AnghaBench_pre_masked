
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ide_disk_obj {int openers; struct gendisk* disk; } ;
struct ide_atapi_pc {int dummy; } ;
struct gendisk {int dummy; } ;
struct TYPE_5__ {struct ide_disk_obj* driver_data; } ;
typedef TYPE_1__ ide_drive_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,struct gendisk*,int) ;
 int FUNC_1 (TYPE_1__*,struct gendisk*,int) ;

__attribute__((used)) static int FUNC_2(ide_drive_t *VAR_2, struct ide_atapi_pc *VAR_3,
          unsigned long VAR_4, unsigned int VAR_5)
{
 struct ide_disk_obj *VAR_6 = VAR_2->driver_data;
 struct gendisk *VAR_7 = VAR_6->disk;
 int VAR_8 = (VAR_4 && VAR_5 != VAR_0) ? 1 : 0;

 if (VAR_6->openers > 1)
  return -VAR_1;

 FUNC_1(VAR_2, VAR_7, VAR_8);

 if (VAR_5 == VAR_0)
  FUNC_0(VAR_2, VAR_7, 2);

 return 0;
}
