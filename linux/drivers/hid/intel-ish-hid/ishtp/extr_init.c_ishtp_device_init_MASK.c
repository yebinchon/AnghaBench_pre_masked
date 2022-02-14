
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int list; } ;
struct ishtp_device {TYPE_1__ read_list; int host_clients_map; scalar_t__ open_handle_count; int bh_hbm_work; int fw_clients_lock; int cl_list_lock; int device_list_lock; int device_lock; int read_list_spinlock; int wait_hbm_recvd_msg; int rd_msg_spinlock; scalar_t__ rd_msg_fifo_tail; scalar_t__ rd_msg_fifo_head; int device_list; int cl_list; int dev_state; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct ishtp_device *VAR_3)
{
 VAR_3->dev_state = VAR_1;
 FUNC_0(&VAR_3->cl_list);
 FUNC_0(&VAR_3->device_list);
 VAR_3->rd_msg_fifo_head = 0;
 VAR_3->rd_msg_fifo_tail = 0;
 FUNC_5(&VAR_3->rd_msg_spinlock);

 FUNC_4(&VAR_3->wait_hbm_recvd_msg);
 FUNC_5(&VAR_3->read_list_spinlock);
 FUNC_5(&VAR_3->device_lock);
 FUNC_5(&VAR_3->device_list_lock);
 FUNC_5(&VAR_3->cl_list_lock);
 FUNC_5(&VAR_3->fw_clients_lock);
 FUNC_1(&VAR_3->bh_hbm_work, VAR_2);

 FUNC_3(VAR_3->host_clients_map, VAR_0);
 VAR_3->open_handle_count = 0;




 FUNC_2(VAR_3->host_clients_map, 0, 1);

 FUNC_0(&VAR_3->read_list.list);

}
