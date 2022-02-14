
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int data; } ;
struct ishtp_cl_tx_ring {int list; TYPE_3__ send_buf; } ;
struct TYPE_9__ {int list; } ;
struct ishtp_cl {int tx_ring_size; TYPE_5__* device; int tx_free_list_spinlock; scalar_t__ tx_ring_free_size; TYPE_4__ tx_free_list; } ;
struct TYPE_10__ {int dev; TYPE_2__* fw_client; } ;
struct TYPE_6__ {size_t max_msg_length; } ;
struct TYPE_7__ {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct ishtp_cl*) ;
 int FUNC_2 (struct ishtp_cl_tx_ring*) ;
 int FUNC_3 (size_t,int ) ;
 struct ishtp_cl_tx_ring* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

int FUNC_8(struct ishtp_cl *VAR_2)
{
 size_t VAR_3 = VAR_2->device->fw_client->props.max_msg_length;
 int VAR_4;
 unsigned long VAR_5;

 VAR_2->tx_ring_free_size = 0;


 for (VAR_4 = 0; VAR_4 < VAR_2->tx_ring_size; ++VAR_4) {
  struct ishtp_cl_tx_ring *VAR_6;

  VAR_6 = FUNC_4(sizeof(struct ishtp_cl_tx_ring), VAR_1);
  if (!VAR_6)
   goto out;

  VAR_6->send_buf.data = FUNC_3(VAR_3, VAR_1);
  if (!VAR_6->send_buf.data) {
   FUNC_2(VAR_6);
   goto out;
  }

  FUNC_6(&VAR_2->tx_free_list_spinlock, VAR_5);
  FUNC_5(&VAR_6->list, &VAR_2->tx_free_list.list);
  ++VAR_2->tx_ring_free_size;
  FUNC_7(&VAR_2->tx_free_list_spinlock, VAR_5);
 }
 return 0;
out:
 FUNC_0(&VAR_2->device->dev, "error in allocating Tx pool\n");
 FUNC_1(VAR_2);
 return -VAR_0;
}
