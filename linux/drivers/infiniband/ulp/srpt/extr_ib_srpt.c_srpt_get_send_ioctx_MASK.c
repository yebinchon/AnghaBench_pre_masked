
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int map_tag; int map_cpu; } ;
struct srpt_send_ioctx {int queue_status_only; TYPE_2__ cmd; TYPE_2__ sense_data; scalar_t__ n_rw_ctx; scalar_t__ n_rdma; int recv_ioctx; int state; struct srpt_rdma_ch* ch; } ;
struct srpt_rdma_ch {struct srpt_send_ioctx** ioctx_ring; TYPE_1__* sess; } ;
struct TYPE_3__ {int sess_tag_pool; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (int *,int*) ;

__attribute__((used)) static struct srpt_send_ioctx *FUNC_4(struct srpt_rdma_ch *VAR_1)
{
 struct srpt_send_ioctx *VAR_2;
 int VAR_3, VAR_4;

 FUNC_0(!VAR_1);

 VAR_3 = FUNC_3(&VAR_1->sess->sess_tag_pool, &VAR_4);
 if (VAR_3 < 0)
  return ((void*)0);

 VAR_2 = VAR_1->ioctx_ring[VAR_3];
 FUNC_0(VAR_2->ch != VAR_1);
 VAR_2->state = VAR_0;
 FUNC_1(VAR_2->recv_ioctx);
 VAR_2->n_rdma = 0;
 VAR_2->n_rw_ctx = 0;
 VAR_2->queue_status_only = 0;




 FUNC_2(&VAR_2->cmd, 0, sizeof(VAR_2->cmd));
 FUNC_2(&VAR_2->sense_data, 0, sizeof(VAR_2->sense_data));
 VAR_2->cmd.map_tag = VAR_3;
 VAR_2->cmd.map_cpu = VAR_4;

 return VAR_2;
}
