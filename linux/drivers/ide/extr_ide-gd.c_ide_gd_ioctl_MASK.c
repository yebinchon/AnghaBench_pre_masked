
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ide_disk_obj {TYPE_2__* drive; } ;
struct block_device {int bd_disk; } ;
struct TYPE_5__ {TYPE_1__* disk_ops; } ;
typedef TYPE_2__ ide_drive_t ;
typedef int fmode_t ;
struct TYPE_4__ {int (* ioctl ) (TYPE_2__*,struct block_device*,int ,unsigned int,unsigned long) ;} ;


 int VAR_0 ;
 struct ide_disk_obj* FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,struct block_device*,int ,unsigned int,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct block_device *VAR_1, fmode_t VAR_2,
        unsigned int VAR_3, unsigned long VAR_4)
{
 struct ide_disk_obj *VAR_5 = FUNC_0(VAR_1->bd_disk, VAR_0);
 ide_drive_t *VAR_6 = VAR_5->drive;

 return VAR_6->disk_ops->ioctl(VAR_6, VAR_1, VAR_2, VAR_3, VAR_4);
}
