
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ishtp_device {unsigned int fw_clients_num; TYPE_2__* fw_clients; } ;
typedef int guid_t ;
struct TYPE_3__ {int protocol_name; } ;
struct TYPE_4__ {TYPE_1__ props; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*,int *) ;

int FUNC_1(struct ishtp_device *VAR_1, const guid_t *VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->fw_clients_num; ++VAR_3) {
  if (FUNC_0(VAR_2, &VAR_1->fw_clients[VAR_3].props.protocol_name))
   return VAR_3;
 }
 return -VAR_0;
}
