
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ishtp_cl {int tx_ring_free_size; int tx_free_list_spinlock; TYPE_3__* device; } ;
struct TYPE_6__ {TYPE_2__* fw_client; } ;
struct TYPE_4__ {int max_msg_length; } ;
struct TYPE_5__ {TYPE_1__ props; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

int FUNC_2(struct ishtp_cl *VAR_0)
{
 unsigned long VAR_1;
 int VAR_2;

 FUNC_0(&VAR_0->tx_free_list_spinlock, VAR_1);
 VAR_2 = VAR_0->tx_ring_free_size * VAR_0->device->fw_client->props.max_msg_length;
 FUNC_1(&VAR_0->tx_free_list_spinlock, VAR_1);

 return VAR_2;
}
