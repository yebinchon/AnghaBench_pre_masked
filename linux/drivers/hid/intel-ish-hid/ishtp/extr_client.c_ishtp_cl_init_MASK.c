
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ishtp_device {int dummy; } ;
struct TYPE_8__ {int list; } ;
struct TYPE_7__ {int list; } ;
struct TYPE_6__ {int list; } ;
struct TYPE_5__ {int list; } ;
struct ishtp_cl {int last_dma_acked; int last_ipc_acked; int * last_dma_addr; int last_tx_path; int tx_ring_size; int tx_ring_free_size; int rx_ring_size; TYPE_4__ in_process_list; TYPE_3__ tx_free_list; TYPE_2__ tx_list; TYPE_1__ free_rb_list; struct ishtp_device* dev; int link; int fc_spinlock; int tx_free_list_spinlock; int tx_list_spinlock; int in_process_spinlock; int free_list_spinlock; int wait_ctrl_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ishtp_cl*,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ishtp_cl *VAR_3, struct ishtp_device *VAR_4)
{
 FUNC_2(VAR_3, 0, sizeof(struct ishtp_cl));
 FUNC_1(&VAR_3->wait_ctrl_res);
 FUNC_3(&VAR_3->free_list_spinlock);
 FUNC_3(&VAR_3->in_process_spinlock);
 FUNC_3(&VAR_3->tx_list_spinlock);
 FUNC_3(&VAR_3->tx_free_list_spinlock);
 FUNC_3(&VAR_3->fc_spinlock);
 FUNC_0(&VAR_3->link);
 VAR_3->dev = VAR_4;

 FUNC_0(&VAR_3->free_rb_list.list);
 FUNC_0(&VAR_3->tx_list.list);
 FUNC_0(&VAR_3->tx_free_list.list);
 FUNC_0(&VAR_3->in_process_list.list);

 VAR_3->rx_ring_size = VAR_0;
 VAR_3->tx_ring_size = VAR_1;
 VAR_3->tx_ring_free_size = VAR_3->tx_ring_size;


 VAR_3->last_tx_path = VAR_2;
 VAR_3->last_dma_acked = 1;
 VAR_3->last_dma_addr = ((void*)0);
 VAR_3->last_ipc_acked = 1;
}
