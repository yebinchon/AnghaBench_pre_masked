
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct packet_command {int* cmd; int timeout; } ;
struct cdrom_device_info {TYPE_1__* ops; } ;
typedef int buffer ;
struct TYPE_2__ {int (* generic_packet ) (struct cdrom_device_info*,struct packet_command*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct packet_command*,unsigned char*,int,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct cdrom_device_info*,struct packet_command*) ;

__attribute__((used)) static int FUNC_3(struct cdrom_device_info *VAR_3, int VAR_4)
{
 struct packet_command VAR_5;
 unsigned char VAR_6[12];
 int VAR_7;

 FUNC_1("%sstarting format\n", VAR_4 ? "Re" : "");




 FUNC_0(&VAR_5, VAR_6, sizeof(VAR_6), VAR_0);
 VAR_5.cmd[0] = VAR_1;
 VAR_5.cmd[1] = (1 << 4) | 1;

 VAR_5.timeout = 5 * 60 * VAR_2;




 VAR_6[1] = 1 << 1;
 VAR_6[3] = 8;




 VAR_6[4] = 0xff;
 VAR_6[5] = 0xff;
 VAR_6[6] = 0xff;
 VAR_6[7] = 0xff;

 VAR_6[8] = 0x24 << 2;
 VAR_6[11] = VAR_4;

 VAR_7 = VAR_3->ops->generic_packet(VAR_3, &VAR_5);
 if (VAR_7)
  FUNC_1("bgformat failed\n");

 return VAR_7;
}
