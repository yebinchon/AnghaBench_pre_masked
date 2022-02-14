
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gendisk {int * private_data; } ;
struct device {int dummy; } ;
struct cdrom_device_info {TYPE_1__* handle; } ;
struct cdrom_info {struct cdrom_info* toc; struct gendisk* disk; TYPE_1__* drive; struct cdrom_device_info devinfo; } ;
struct TYPE_2__ {int * prep_rq; int * driver_data; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct cdrom_info*) ;
 int FUNC_2 (struct gendisk*) ;
 struct cdrom_info* FUNC_3 (struct device*,int ) ;
 int FUNC_4 (struct cdrom_device_info*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_2)
{
 struct cdrom_info *VAR_3 = FUNC_3(VAR_2, VAR_1);
 struct cdrom_device_info *VAR_4 = &VAR_3->devinfo;
 ide_drive_t *VAR_5 = VAR_3->drive;
 struct gendisk *VAR_6 = VAR_3->disk;

 FUNC_0(VAR_0, "enter");

 FUNC_1(VAR_3->toc);
 if (VAR_4->handle == VAR_5)
  FUNC_4(VAR_4);
 VAR_5->driver_data = ((void*)0);
 VAR_5->prep_rq = ((void*)0);
 VAR_6->private_data = ((void*)0);
 FUNC_2(VAR_6);
 FUNC_1(VAR_3);
}
