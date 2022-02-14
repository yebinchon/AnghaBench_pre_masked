
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct ishtp_device {int fw_clients_num; int fw_clients_lock; TYPE_1__* fw_clients; } ;
struct TYPE_2__ {scalar_t__ client_id; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

int FUNC_2(struct ishtp_device *VAR_1, uint8_t VAR_2)
{
 int VAR_3, VAR_4 = -VAR_0;
 unsigned long VAR_5;

 FUNC_0(&VAR_1->fw_clients_lock, VAR_5);
 for (VAR_3 = 0; VAR_3 < VAR_1->fw_clients_num; VAR_3++) {
  if (VAR_1->fw_clients[VAR_3].client_id == VAR_2) {
   VAR_4 = VAR_3;
   break;
  }
 }
 FUNC_1(&VAR_1->fw_clients_lock, VAR_5);

 return VAR_4;
}
