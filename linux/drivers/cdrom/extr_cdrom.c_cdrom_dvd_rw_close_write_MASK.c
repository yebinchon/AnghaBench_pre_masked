
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct packet_command {int* cmd; int timeout; int quiet; } ;
struct cdrom_device_info {int mmc3_profile; scalar_t__ media_written; TYPE_1__* ops; int name; } ;
struct TYPE_2__ {int (* generic_packet ) (struct cdrom_device_info*,struct packet_command*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct packet_command*,int *,int ,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct cdrom_device_info*,struct packet_command*) ;
 int FUNC_4 (struct cdrom_device_info*,struct packet_command*) ;
 int FUNC_5 (struct cdrom_device_info*,struct packet_command*) ;

__attribute__((used)) static void FUNC_6(struct cdrom_device_info *VAR_5)
{
 struct packet_command VAR_6;

 if (VAR_5->mmc3_profile != 0x1a) {
  FUNC_0(VAR_0, "%s: No DVD+RW\n", VAR_5->name);
  return;
 }

 if (!VAR_5->media_written) {
  FUNC_0(VAR_0, "%s: DVD+RW media clean\n", VAR_5->name);
  return;
 }

 FUNC_2("%s: dirty DVD+RW media, \"finalizing\"\n", VAR_5->name);

 FUNC_1(&VAR_6, ((void*)0), 0, VAR_1);
 VAR_6.cmd[0] = VAR_3;
 VAR_6.timeout = 30*VAR_4;
 VAR_5->ops->generic_packet(VAR_5, &VAR_6);

 FUNC_1(&VAR_6, ((void*)0), 0, VAR_1);
 VAR_6.cmd[0] = VAR_2;
 VAR_6.timeout = 3000*VAR_4;
 VAR_6.quiet = 1;
 VAR_5->ops->generic_packet(VAR_5, &VAR_6);

 FUNC_1(&VAR_6, ((void*)0), 0, VAR_1);
 VAR_6.cmd[0] = VAR_2;
 VAR_6.cmd[2] = 2;
 VAR_6.quiet = 1;
 VAR_6.timeout = 3000*VAR_4;
 VAR_5->ops->generic_packet(VAR_5, &VAR_6);

 VAR_5->media_written = 0;
}
