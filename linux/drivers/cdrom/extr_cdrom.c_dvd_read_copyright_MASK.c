
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u_char ;
struct packet_command {int* cmd; int buflen; } ;
struct cdrom_device_ops {int (* generic_packet ) (struct cdrom_device_info*,struct packet_command*) ;} ;
struct cdrom_device_info {struct cdrom_device_ops* ops; } ;
struct TYPE_4__ {int layer_num; void* rmi; void* cpst; } ;
struct TYPE_5__ {int type; TYPE_1__ copyright; } ;
typedef TYPE_2__ dvd_struct ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct packet_command*,void**,int,int ) ;
 int FUNC_1 (struct cdrom_device_info*,struct packet_command*) ;

__attribute__((used)) static int FUNC_2(struct cdrom_device_info *VAR_2, dvd_struct *VAR_3,
    struct packet_command *VAR_4)
{
 int VAR_5;
 u_char VAR_6[8];
 const struct cdrom_device_ops *VAR_7 = VAR_2->ops;

 FUNC_0(VAR_4, VAR_6, sizeof(VAR_6), VAR_0);
 VAR_4->cmd[0] = VAR_1;
 VAR_4->cmd[6] = VAR_3->copyright.layer_num;
 VAR_4->cmd[7] = VAR_3->type;
 VAR_4->cmd[8] = VAR_4->buflen >> 8;
 VAR_4->cmd[9] = VAR_4->buflen & 0xff;

 VAR_5 = VAR_7->generic_packet(VAR_2, VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_3->copyright.cpst = VAR_6[4];
 VAR_3->copyright.rmi = VAR_6[5];

 return 0;
}
