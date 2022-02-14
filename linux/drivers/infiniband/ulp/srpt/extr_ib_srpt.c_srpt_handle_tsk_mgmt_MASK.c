
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct se_cmd {TYPE_3__* se_tfo; TYPE_2__* se_tmr_req; int tag; } ;
struct srpt_send_ioctx {struct se_cmd cmd; } ;
struct TYPE_4__ {int offset; struct srp_tsk_mgmt* buf; } ;
struct srpt_recv_ioctx {TYPE_1__ ioctx; } ;
struct srpt_rdma_ch {struct se_session* sess; } ;
struct srp_tsk_mgmt {int task_tag; int lun; int tsk_mgmt_func; int tag; } ;
struct se_session {int dummy; } ;
struct TYPE_6__ {int (* queue_tm_rsp ) (struct se_cmd*) ;} ;
struct TYPE_5__ {int response; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ,int ,int ,struct srpt_rdma_ch*,struct se_session*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct srpt_send_ioctx*,int ) ;
 int FUNC_5 (struct se_cmd*) ;
 int FUNC_6 (struct se_cmd*,struct se_session*,int *,int ,struct srp_tsk_mgmt*,int,int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct srpt_rdma_ch *VAR_4,
     struct srpt_recv_ioctx *VAR_5,
     struct srpt_send_ioctx *VAR_6)
{
 struct srp_tsk_mgmt *VAR_7;
 struct se_cmd *VAR_8;
 struct se_session *VAR_9 = VAR_4->sess;
 int VAR_10;
 int VAR_11;

 FUNC_0(!VAR_6);

 VAR_7 = VAR_5->ioctx.buf + VAR_5->ioctx.offset;
 VAR_8 = &VAR_6->cmd;

 FUNC_1("recv tsk_mgmt fn %d for task_tag %lld and cmd tag %lld ch %p sess %p\n",
   VAR_7->tsk_mgmt_func, VAR_7->task_tag, VAR_7->tag, VAR_4,
   VAR_4->sess);

 FUNC_4(VAR_6, VAR_1);
 VAR_6->cmd.tag = VAR_7->tag;
 VAR_10 = FUNC_3(VAR_7->tsk_mgmt_func);
 VAR_11 = FUNC_6(&VAR_6->cmd, VAR_9, ((void*)0),
          FUNC_2(&VAR_7->lun), VAR_7, VAR_10,
          VAR_0, VAR_7->task_tag,
          VAR_2);
 if (VAR_11 != 0) {
  VAR_6->cmd.se_tmr_req->response = VAR_3;
  VAR_8->se_tfo->queue_tm_rsp(VAR_8);
 }
 return;
}
