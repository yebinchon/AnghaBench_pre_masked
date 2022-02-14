
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_command {int buflen; int cmd; } ;
struct cdrom_device_info {int dummy; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int FUNC_1(struct cdrom_device_info *VAR_0,
 struct packet_command *VAR_1)
{
 FUNC_0(&VAR_1->cmd, VAR_1->buflen);
 return 0;
}
