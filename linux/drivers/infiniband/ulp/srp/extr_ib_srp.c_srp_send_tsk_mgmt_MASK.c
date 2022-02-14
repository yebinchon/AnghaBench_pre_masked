
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct srp_tsk_mgmt {int tag; int task_tag; int tsk_mgmt_func; int lun; int opcode; } ;
struct srp_target_port {scalar_t__ qp_in_error; TYPE_2__* srp_host; struct srp_rport* rport; } ;
struct srp_rport {int mutex; } ;
struct srp_rdma_ch {int tsk_mgmt_tag; int tsk_mgmt_status; int tsk_mgmt_done; int lock; int connected; struct srp_target_port* target; } ;
struct srp_iu {int num_sge; int dma; struct srp_tsk_mgmt* buf; } ;
struct ib_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* srp_dev; } ;
struct TYPE_3__ {struct ib_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 struct srp_iu* FUNC_1 (struct srp_rdma_ch*,int ) ;
 int FUNC_2 (struct ib_device*,int ,int,int ) ;
 int FUNC_3 (struct ib_device*,int ,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct srp_tsk_mgmt*,int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (struct srp_rdma_ch*,struct srp_iu*,int) ;
 int FUNC_13 (struct srp_rdma_ch*,struct srp_iu*,int ) ;
 int FUNC_14 (int *,int ) ;

__attribute__((used)) static int FUNC_15(struct srp_rdma_ch *VAR_5, u64 VAR_6, u64 VAR_7,
        u8 VAR_8, u8 *VAR_9)
{
 struct srp_target_port *VAR_10 = VAR_5->target;
 struct srp_rport *VAR_11 = VAR_10->rport;
 struct ib_device *VAR_12 = VAR_10->srp_host->srp_dev->dev;
 struct srp_iu *VAR_13;
 struct srp_tsk_mgmt *VAR_14;
 int VAR_15;

 if (!VAR_5->connected || VAR_10->qp_in_error)
  return -1;





 FUNC_8(&VAR_11->mutex);
 FUNC_10(&VAR_5->lock);
 VAR_13 = FUNC_1(VAR_5, VAR_2);
 FUNC_11(&VAR_5->lock);

 if (!VAR_13) {
  FUNC_9(&VAR_11->mutex);

  return -1;
 }

 VAR_13->num_sge = 1;

 FUNC_2(VAR_12, VAR_13->dma, sizeof *VAR_14,
       VAR_0);
 VAR_14 = VAR_13->buf;
 FUNC_6(VAR_14, 0, sizeof *VAR_14);

 VAR_14->opcode = VAR_4;
 FUNC_5(VAR_7, &VAR_14->lun);
 VAR_14->tsk_mgmt_func = VAR_8;
 VAR_14->task_tag = VAR_6;

 FUNC_10(&VAR_5->lock);
 VAR_5->tsk_mgmt_tag = (VAR_5->tsk_mgmt_tag + 1) | VAR_3;
 VAR_14->tag = VAR_5->tsk_mgmt_tag;
 FUNC_11(&VAR_5->lock);

 FUNC_4(&VAR_5->tsk_mgmt_done);

 FUNC_3(VAR_12, VAR_13->dma, sizeof *VAR_14,
          VAR_0);
 if (FUNC_12(VAR_5, VAR_13, sizeof(*VAR_14))) {
  FUNC_13(VAR_5, VAR_13, VAR_2);
  FUNC_9(&VAR_11->mutex);

  return -1;
 }
 VAR_15 = FUNC_14(&VAR_5->tsk_mgmt_done,
     FUNC_7(VAR_1));
 if (VAR_15 > 0 && VAR_9)
  *VAR_9 = VAR_5->tsk_mgmt_status;
 FUNC_9(&VAR_11->mutex);

 FUNC_0(VAR_15 < 0);

 return VAR_15 > 0 ? 0 : -1;
}
