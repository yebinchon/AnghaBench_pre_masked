
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct packet_command {int* cmd; } ;
struct cdrom_slot {int dummy; } ;
struct cdrom_mechstat_header {int dummy; } ;
struct cdrom_device_ops {int (* generic_packet ) (struct cdrom_device_info*,struct packet_command*) ;} ;
struct cdrom_device_info {int sanyo_slot; int capacity; struct cdrom_device_ops* ops; } ;
struct TYPE_3__ {int nslots; int curslot; } ;
struct cdrom_changer_info {TYPE_2__* slots; TYPE_1__ hdr; } ;
struct TYPE_4__ {int disc_present; scalar_t__ change; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct packet_command*,struct cdrom_changer_info*,int,int ) ;
 int FUNC_1 (struct cdrom_device_info*,struct packet_command*) ;

__attribute__((used)) static int FUNC_2(struct cdrom_device_info *VAR_2,
      struct cdrom_changer_info *VAR_3)
{
 struct packet_command VAR_4;
 const struct cdrom_device_ops *VAR_5 = VAR_2->ops;
 int VAR_6;






 if (VAR_2->sanyo_slot) {
  VAR_3->hdr.nslots = 3;
  VAR_3->hdr.curslot = VAR_2->sanyo_slot == 3 ? 0 : VAR_2->sanyo_slot;
  for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {
   VAR_3->slots[VAR_6].disc_present = 1;
   VAR_3->slots[VAR_6].change = 0;
  }
  return 0;
 }

 VAR_6 = sizeof(struct cdrom_mechstat_header) +
   VAR_2->capacity * sizeof(struct cdrom_slot);

 FUNC_0(&VAR_4, VAR_3, VAR_6, VAR_0);
 VAR_4.cmd[0] = VAR_1;
 VAR_4.cmd[8] = (VAR_6 >> 8) & 0xff;
 VAR_4.cmd[9] = VAR_6 & 0xff;
 return VAR_5->generic_packet(VAR_2, &VAR_4);
}
