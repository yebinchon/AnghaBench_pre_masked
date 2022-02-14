
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int done; } ;
struct iser_tx_desc {int num_sge; struct ib_sge* tx_sg; TYPE_1__ cqe; int type; } ;
struct iser_login_desc {int req_dma; int req; } ;
struct iser_device {TYPE_2__* pd; int ib_device; } ;
struct TYPE_7__ {struct iser_device* device; } ;
struct iser_conn {TYPE_3__ ib_conn; struct iser_login_desc login_desc; } ;
struct iscsi_task {TYPE_4__* hdr; int data_count; int data; struct iscsi_iser_task* dd_data; } ;
struct iscsi_iser_task {struct iser_tx_desc desc; } ;
struct iscsi_conn {struct iscsi_task* login_task; struct iser_conn* dd_data; } ;
struct ib_sge {int lkey; int length; int addr; } ;
struct TYPE_8__ {int opcode; int dlength; } ;
struct TYPE_6__ {int local_dma_lkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct iser_conn*,struct iser_tx_desc*) ;
 int VAR_2 ;
 int FUNC_3 (char*,int ,unsigned long) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct iser_conn*) ;
 int FUNC_6 (struct iscsi_conn*,TYPE_4__*) ;
 int FUNC_7 (TYPE_3__*,struct iser_tx_desc*,int) ;
 int FUNC_8 (int ,int ,int ) ;
 unsigned long FUNC_9 (int ) ;

int FUNC_10(struct iscsi_conn *VAR_3,
        struct iscsi_task *VAR_4)
{
 struct iser_conn *VAR_5 = VAR_3->dd_data;
 struct iscsi_iser_task *VAR_6 = VAR_4->dd_data;
 struct iser_tx_desc *VAR_7 = &VAR_6->desc;
 unsigned long VAR_8;
 int VAR_9 = 0;
 struct iser_device *VAR_10;


 VAR_7->type = VAR_1;
 VAR_7->cqe.done = VAR_2;
 FUNC_2(VAR_5, VAR_7);

 VAR_10 = VAR_5->ib_conn.device;

 VAR_8 = FUNC_9(VAR_4->hdr->dlength);

 if (VAR_8 > 0) {
  struct iser_login_desc *VAR_11 = &VAR_5->login_desc;
  struct ib_sge *VAR_12 = &VAR_7->tx_sg[1];

  if (VAR_4 != VAR_3->login_task) {
   FUNC_4("data present on non login task!!!\n");
   goto send_control_error;
  }

  FUNC_0(VAR_10->ib_device, VAR_11->req_dma,
        VAR_4->data_count, VAR_0);

  FUNC_8(VAR_11->req, VAR_4->data, VAR_4->data_count);

  FUNC_1(VAR_10->ib_device, VAR_11->req_dma,
           VAR_4->data_count, VAR_0);

  VAR_12->addr = VAR_11->req_dma;
  VAR_12->length = VAR_4->data_count;
  VAR_12->lkey = VAR_10->pd->local_dma_lkey;
  VAR_7->num_sge = 2;
 }

 if (VAR_4 == VAR_3->login_task) {
  FUNC_3("op %x dsl %lx, posting login rx buffer\n",
    VAR_4->hdr->opcode, VAR_8);
  VAR_9 = FUNC_5(VAR_5);
  if (VAR_9)
   goto send_control_error;
  VAR_9 = FUNC_6(VAR_3, VAR_4->hdr);
  if (VAR_9)
   goto send_control_error;
 }

 VAR_9 = FUNC_7(&VAR_5->ib_conn, VAR_7, 1);
 if (!VAR_9)
  return 0;

send_control_error:
 FUNC_4("conn %p failed err %d\n",VAR_3, VAR_9);
 return VAR_9;
}
