
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct packet_command {int* cmd; } ;
struct cdrom_device_ops {int (* generic_packet ) (struct cdrom_device_info*,struct packet_command*) ;} ;
struct cdrom_device_info {struct cdrom_device_ops* ops; } ;
struct TYPE_4__ {int len; int value; } ;
struct TYPE_5__ {int type; TYPE_1__ manufact; } ;
typedef TYPE_2__ dvd_struct ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct packet_command*,int*,int,int ) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int*,int) ;
 int FUNC_5 (struct cdrom_device_info*,struct packet_command*) ;

__attribute__((used)) static int FUNC_6(struct cdrom_device_info *VAR_6, dvd_struct *VAR_7,
    struct packet_command *VAR_8)
{
 int VAR_9 = 0, VAR_10;
 u_char *VAR_11;
 const struct cdrom_device_ops *VAR_12 = VAR_6->ops;

 VAR_10 = sizeof(VAR_7->manufact.value) + 4;

 VAR_11 = FUNC_3(VAR_10, VAR_4);
 if (!VAR_11)
  return -VAR_3;

 FUNC_1(VAR_8, VAR_11, VAR_10, VAR_1);
 VAR_8->cmd[0] = VAR_5;
 VAR_8->cmd[7] = VAR_7->type;
 VAR_8->cmd[8] = VAR_10 >> 8;
 VAR_8->cmd[9] = VAR_10 & 0xff;

 VAR_9 = VAR_12->generic_packet(VAR_6, VAR_8);
 if (VAR_9)
  goto out;

 VAR_7->manufact.len = VAR_11[0] << 8 | VAR_11[1];
 if (VAR_7->manufact.len < 0) {
  FUNC_0(VAR_0, "Received invalid manufacture info length (%d)\n",
         VAR_7->manufact.len);
  VAR_9 = -VAR_2;
 } else {
  if (VAR_7->manufact.len > 2048) {
   FUNC_0(VAR_0, "Received invalid manufacture info length (%d): truncating to 2048\n",
          VAR_7->manufact.len);
   VAR_7->manufact.len = 2048;
  }
  FUNC_4(VAR_7->manufact.value, &VAR_11[4], VAR_7->manufact.len);
 }

out:
 FUNC_2(VAR_11);
 return VAR_9;
}
