
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ fixed_address; } ;
struct ishtp_fw_client {TYPE_1__ props; } ;
struct ishtp_device {struct ishtp_fw_client* fw_clients; int fw_clients_lock; } ;
typedef int guid_t ;


 int FUNC_0 (struct ishtp_device*,int const*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

struct ishtp_fw_client *FUNC_3(struct ishtp_device *VAR_0,
            const guid_t *VAR_1)
{
 int VAR_2;
 unsigned long VAR_3;

 FUNC_1(&VAR_0->fw_clients_lock, VAR_3);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->fw_clients_lock, VAR_3);
 if (VAR_2 < 0 || VAR_0->fw_clients[VAR_2].props.fixed_address)
  return ((void*)0);

 return &VAR_0->fw_clients[VAR_2];
}
