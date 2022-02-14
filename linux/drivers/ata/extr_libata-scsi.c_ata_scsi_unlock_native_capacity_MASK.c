
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {int host; } ;
struct ata_port {int lock; } ;
struct ata_device {scalar_t__ n_sectors; scalar_t__ n_native_sectors; TYPE_2__* link; int flags; } ;
struct TYPE_3__ {int action; } ;
struct TYPE_4__ {TYPE_1__ eh_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ata_port*) ;
 int FUNC_1 (struct ata_port*) ;
 struct ata_device* FUNC_2 (struct ata_port*,struct scsi_device*) ;
 struct ata_port* FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;

void FUNC_6(struct scsi_device *VAR_2)
{
 struct ata_port *VAR_3 = FUNC_3(VAR_2->host);
 struct ata_device *VAR_4;
 unsigned long VAR_5;

 FUNC_4(VAR_3->lock, VAR_5);

 VAR_4 = FUNC_2(VAR_3, VAR_2);
 if (VAR_4 && VAR_4->n_sectors < VAR_4->n_native_sectors) {
  VAR_4->flags |= VAR_0;
  VAR_4->link->eh_info.action |= VAR_1;
  FUNC_0(VAR_3);
 }

 FUNC_5(VAR_3->lock, VAR_5);
 FUNC_1(VAR_3);
}
