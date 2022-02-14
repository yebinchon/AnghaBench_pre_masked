
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lba; } ;
struct cdrom_multisession {int xa_flag; TYPE_1__ addr; } ;
struct cdrom_info {struct atapi_toc* toc; } ;
struct cdrom_device_info {TYPE_2__* handle; } ;
struct atapi_toc {int xa_flag; int last_session_lba; } ;
struct TYPE_5__ {int atapi_flags; struct cdrom_info* driver_data; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

int FUNC_1(struct cdrom_device_info *VAR_1,
          struct cdrom_multisession *VAR_2)
{
 struct atapi_toc *VAR_3;
 ide_drive_t *VAR_4 = VAR_1->handle;
 struct cdrom_info *VAR_5 = VAR_4->driver_data;
 int VAR_6;

 if ((VAR_4->atapi_flags & VAR_0) == 0 || !VAR_5->toc) {
  VAR_6 = FUNC_0(VAR_4);
  if (VAR_6)
   return VAR_6;
 }

 VAR_3 = VAR_5->toc;
 VAR_2->addr.lba = VAR_3->last_session_lba;
 VAR_2->xa_flag = VAR_3->xa_flag;

 return 0;
}
