
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int frame; int second; int minute; } ;
struct TYPE_5__ {int lba; TYPE_1__ msf; } ;
struct cdrom_tocentry {scalar_t__ cdte_format; TYPE_2__ cdte_addr; int cdte_adr; int cdte_ctrl; int cdte_track; } ;
struct TYPE_6__ {int lba; } ;
struct atapi_toc_entry {TYPE_3__ addr; int adr; int control; } ;
typedef int ide_drive_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,struct atapi_toc_entry**) ;
 int FUNC_1 (int ,int *,int *,int *) ;

__attribute__((used)) static int FUNC_2(ide_drive_t *VAR_1, void *VAR_2)
{
 struct cdrom_tocentry *VAR_3 = VAR_2;
 struct atapi_toc_entry *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_3->cdte_track, &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_3->cdte_ctrl = VAR_4->control;
 VAR_3->cdte_adr = VAR_4->adr;
 if (VAR_3->cdte_format == VAR_0) {
  FUNC_1(VAR_4->addr.lba,
      &VAR_3->cdte_addr.msf.minute,
      &VAR_3->cdte_addr.msf.second,
      &VAR_3->cdte_addr.msf.frame);
 } else
  VAR_3->cdte_addr.lba = VAR_4->addr.lba;

 return 0;
}
