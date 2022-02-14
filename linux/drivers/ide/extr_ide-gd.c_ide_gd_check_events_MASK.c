
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ide_disk_obj {TYPE_1__* drive; } ;
struct gendisk {int dummy; } ;
struct TYPE_2__ {int dev_flags; } ;
typedef TYPE_1__ ide_drive_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ide_disk_obj* FUNC_0 (struct gendisk*,int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct gendisk *VAR_4,
     unsigned int VAR_5)
{
 struct ide_disk_obj *VAR_6 = FUNC_0(VAR_4, VAR_3);
 ide_drive_t *VAR_7 = VAR_6->drive;
 bool VAR_8;


 if (VAR_7->dev_flags & VAR_1) {
  VAR_7->dev_flags &= ~VAR_1;
  return 0;
 }
 VAR_8 = VAR_7->dev_flags & VAR_2;
 VAR_7->dev_flags &= ~VAR_2;

 return VAR_8 ? VAR_0 : 0;
}
