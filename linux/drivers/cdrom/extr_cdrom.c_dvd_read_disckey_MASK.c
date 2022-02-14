
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
struct TYPE_4__ {int agid; int value; } ;
struct TYPE_5__ {int type; TYPE_1__ disckey; } ;
typedef TYPE_2__ dvd_struct ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct packet_command*,int *,int,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (struct cdrom_device_info*,struct packet_command*) ;

__attribute__((used)) static int FUNC_5(struct cdrom_device_info *VAR_4, dvd_struct *VAR_5,
    struct packet_command *VAR_6)
{
 int VAR_7, VAR_8;
 u_char *VAR_9;
 const struct cdrom_device_ops *VAR_10 = VAR_4->ops;

 VAR_8 = sizeof(VAR_5->disckey.value) + 4;

 VAR_9 = FUNC_2(VAR_8, VAR_2);
 if (!VAR_9)
  return -VAR_1;

 FUNC_0(VAR_6, VAR_9, VAR_8, VAR_0);
 VAR_6->cmd[0] = VAR_3;
 VAR_6->cmd[7] = VAR_5->type;
 VAR_6->cmd[8] = VAR_8 >> 8;
 VAR_6->cmd[9] = VAR_8 & 0xff;
 VAR_6->cmd[10] = VAR_5->disckey.agid << 6;

 VAR_7 = VAR_10->generic_packet(VAR_4, VAR_6);
 if (!VAR_7)
  FUNC_3(VAR_5->disckey.value, &VAR_9[4], sizeof(VAR_5->disckey.value));

 FUNC_1(VAR_9);
 return VAR_7;
}
