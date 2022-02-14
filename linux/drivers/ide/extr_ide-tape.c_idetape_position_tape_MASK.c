
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct ide_atapi_pc {int dummy; } ;
struct gendisk {int dummy; } ;
struct TYPE_9__ {scalar_t__ chrdev_dir; struct gendisk* disk; } ;
typedef TYPE_1__ idetape_tape_t ;
struct TYPE_10__ {TYPE_1__* driver_data; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,struct gendisk*,struct ide_atapi_pc*,int *,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,struct ide_atapi_pc*,unsigned int,int ,int) ;
 int FUNC_4 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_5(ide_drive_t *VAR_2, unsigned int VAR_3,
  u8 VAR_4, int VAR_5)
{
 idetape_tape_t *VAR_6 = VAR_2->driver_data;
 struct gendisk *VAR_7 = VAR_6->disk;
 int VAR_8;
 struct ide_atapi_pc VAR_9;

 if (VAR_6->chrdev_dir == VAR_1)
  FUNC_0(VAR_2);
 FUNC_4(VAR_2, 60 * 5 * VAR_0);
 FUNC_3(VAR_2, &VAR_9, VAR_3, VAR_4, VAR_5);
 VAR_8 = FUNC_1(VAR_2, VAR_7, &VAR_9, ((void*)0), 0);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_2);
 if (VAR_8 < 0)
  return VAR_8;
 return 0;
}
