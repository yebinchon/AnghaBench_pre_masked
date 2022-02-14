
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct packet_command {int stat; TYPE_1__* sshdr; } ;
struct cdrom_device_info {int dummy; } ;
struct TYPE_2__ {int sense_key; int asc; int ascq; } ;


 int VAR_0 ;

int FUNC_0(struct cdrom_device_info *VAR_1,
          struct packet_command *VAR_2)
{
 if (VAR_2->sshdr) {
  VAR_2->sshdr->sense_key = 0x05;
  VAR_2->sshdr->asc = 0x20;
  VAR_2->sshdr->ascq = 0x00;
 }

 VAR_2->stat = -VAR_0;
 return -VAR_0;
}
