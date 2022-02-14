
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct isert_conn {int qp; TYPE_2__* cm_id; } ;
struct TYPE_3__ {int done; } ;
struct iser_tx_desc {int num_sge; int tx_sg; TYPE_1__ tx_cqe; int dma_addr; } ;
struct ib_send_wr {int send_flags; int opcode; int num_sge; int sg_list; TYPE_1__* wr_cqe; int * next; } ;
struct ib_device {int dummy; } ;
struct TYPE_4__ {struct ib_device* device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ib_device*,int ,int ,int ) ;
 int FUNC_1 (int ,struct ib_send_wr*,int *) ;
 int FUNC_2 (char*,int) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_3(struct isert_conn *VAR_5, struct iser_tx_desc *VAR_6)
{
 struct ib_device *VAR_7 = VAR_5->cm_id->device;
 struct ib_send_wr VAR_8;
 int VAR_9;

 FUNC_0(VAR_7, VAR_6->dma_addr,
          VAR_3, VAR_0);

 VAR_6->tx_cqe.done = VAR_4;

 VAR_8.next = ((void*)0);
 VAR_8.wr_cqe = &VAR_6->tx_cqe;
 VAR_8.sg_list = VAR_6->tx_sg;
 VAR_8.num_sge = VAR_6->num_sge;
 VAR_8.opcode = VAR_2;
 VAR_8.send_flags = VAR_1;

 VAR_9 = FUNC_1(VAR_5->qp, &VAR_8, ((void*)0));
 if (VAR_9)
  FUNC_2("ib_post_send() failed, ret: %d\n", VAR_9);

 return VAR_9;
}
