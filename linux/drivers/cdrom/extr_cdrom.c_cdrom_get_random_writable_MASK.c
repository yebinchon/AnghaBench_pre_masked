
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rwrt_feature_desc {int dummy; } ;
struct packet_command {int* cmd; int quiet; } ;
struct feature_header {int dummy; } ;
struct cdrom_device_info {TYPE_1__* ops; } ;
typedef int buffer ;
struct TYPE_2__ {int (* generic_packet ) (struct cdrom_device_info*,struct packet_command*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct packet_command*,char*,int,int ) ;
 int FUNC_1 (struct rwrt_feature_desc*,char*,int) ;
 int FUNC_2 (struct cdrom_device_info*,struct packet_command*) ;

__attribute__((used)) static int FUNC_3(struct cdrom_device_info *VAR_3,
         struct rwrt_feature_desc *VAR_4)
{
 struct packet_command VAR_5;
 char VAR_6[24];
 int VAR_7;

 FUNC_0(&VAR_5, VAR_6, sizeof(VAR_6), VAR_1);

 VAR_5.cmd[0] = VAR_2;
 VAR_5.cmd[3] = VAR_0;
 VAR_5.cmd[8] = sizeof(VAR_6);
 VAR_5.quiet = 1;

 if ((VAR_7 = VAR_3->ops->generic_packet(VAR_3, &VAR_5)))
  return VAR_7;

 FUNC_1(VAR_4, &VAR_6[sizeof(struct feature_header)], sizeof (*VAR_4));
 return 0;
}
