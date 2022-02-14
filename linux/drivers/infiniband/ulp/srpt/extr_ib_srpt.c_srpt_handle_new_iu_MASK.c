
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct srpt_send_ioctx {int recv_ioctx; } ;
struct TYPE_4__ {int offset; struct srp_cmd* buf; int dma; } ;
struct srpt_recv_ioctx {int wait_list; TYPE_1__ ioctx; } ;
struct srpt_rdma_ch {scalar_t__ state; int processing_wait_list; int cmd_wait_list; TYPE_2__* sport; } ;
struct srp_cmd {int opcode; } ;
struct TYPE_6__ {int device; } ;
struct TYPE_5__ {TYPE_3__* sdev; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;






 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,...) ;
 int VAR_2 ;
 struct srpt_send_ioctx* FUNC_8 (struct srpt_rdma_ch*) ;
 int FUNC_9 (struct srpt_rdma_ch*,struct srpt_recv_ioctx*,struct srpt_send_ioctx*) ;
 int FUNC_10 (struct srpt_rdma_ch*,struct srpt_recv_ioctx*,struct srpt_send_ioctx*) ;
 int FUNC_11 (TYPE_3__*,struct srpt_rdma_ch*,struct srpt_recv_ioctx*) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static bool
FUNC_13(struct srpt_rdma_ch *VAR_3, struct srpt_recv_ioctx *VAR_4)
{
 struct srpt_send_ioctx *VAR_5 = ((void*)0);
 struct srp_cmd *VAR_6;
 bool VAR_7 = 0;
 u8 VAR_8;

 FUNC_0(!VAR_3);
 FUNC_0(!VAR_4);

 if (FUNC_12(VAR_3->state == VAR_0))
  goto push;

 FUNC_2(VAR_3->sport->sdev->device,
       VAR_4->ioctx.dma,
       VAR_4->ioctx.offset + VAR_2,
       VAR_1);

 VAR_6 = VAR_4->ioctx.buf + VAR_4->ioctx.offset;
 VAR_8 = VAR_6->opcode;
 if (VAR_8 == 132 || VAR_8 == 128) {
  VAR_5 = FUNC_8(VAR_3);
  if (FUNC_12(!VAR_5))
   goto push;
 }

 if (!FUNC_5(&VAR_4->wait_list)) {
  FUNC_1(!VAR_3->processing_wait_list);
  FUNC_4(&VAR_4->wait_list);
 }

 switch (VAR_8) {
 case 132:
  FUNC_9(VAR_3, VAR_4, VAR_5);
  break;
 case 128:
  FUNC_10(VAR_3, VAR_4, VAR_5);
  break;
 case 130:
  FUNC_7("Not yet implemented: SRP_I_LOGOUT\n");
  break;
 case 131:
  FUNC_6("received SRP_CRED_RSP\n");
  break;
 case 133:
  FUNC_6("received SRP_AER_RSP\n");
  break;
 case 129:
  FUNC_7("Received SRP_RSP\n");
  break;
 default:
  FUNC_7("received IU with unknown opcode 0x%x\n", VAR_8);
  break;
 }

 if (!VAR_5 || !VAR_5->recv_ioctx)
  FUNC_11(VAR_3->sport->sdev, VAR_3, VAR_4);
 VAR_7 = 1;

out:
 return VAR_7;

push:
 if (FUNC_5(&VAR_4->wait_list)) {
  FUNC_1(VAR_3->processing_wait_list);
  FUNC_3(&VAR_4->wait_list, &VAR_3->cmd_wait_list);
 }
 goto out;
}
