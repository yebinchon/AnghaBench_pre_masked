
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct isert_device {TYPE_1__* pd; struct ib_device* ib_device; } ;
struct iser_tx_desc {int num_sge; struct ib_sge* tx_sg; int iscsi_header; } ;
struct isert_conn {int mutex; int state; struct isert_device* device; int login_rsp_dma; int * login_rsp_buf; struct iser_tx_desc login_tx_desc; } ;
struct iscsi_login {scalar_t__ login_complete; int login_failed; int * rsp_buf; int * rsp; } ;
struct iscsi_hdr {int dummy; } ;
struct iscsi_conn {struct isert_conn* context; } ;
struct ib_sge {int length; int lkey; int addr; } ;
struct ib_device {int dummy; } ;
struct TYPE_2__ {int local_dma_lkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct isert_device*,struct iser_tx_desc*) ;
 int FUNC_1 (struct ib_device*,int ,int,int ) ;
 int FUNC_2 (struct ib_device*,int ,int,int ) ;
 int FUNC_3 (struct isert_conn*) ;
 int FUNC_4 (struct isert_conn*,struct iser_tx_desc*) ;
 int FUNC_5 (struct isert_conn*) ;
 int FUNC_6 (struct isert_conn*,struct iser_tx_desc*) ;
 int FUNC_7 (struct isert_conn*,int ) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(struct iscsi_conn *VAR_3, struct iscsi_login *VAR_4,
     u32 VAR_5)
{
 struct isert_conn *VAR_6 = VAR_3->context;
 struct isert_device *VAR_7 = VAR_6->device;
 struct ib_device *VAR_8 = VAR_7->ib_device;
 struct iser_tx_desc *VAR_9 = &VAR_6->login_tx_desc;
 int VAR_10;

 FUNC_0(VAR_7, VAR_9);

 FUNC_8(&VAR_9->iscsi_header, &VAR_4->rsp[0],
        sizeof(struct iscsi_hdr));

 FUNC_4(VAR_6, VAR_9);

 if (VAR_5 > 0) {
  struct ib_sge *VAR_11 = &VAR_9->tx_sg[1];

  FUNC_1(VAR_8, VAR_6->login_rsp_dma,
        VAR_5, VAR_0);

  FUNC_8(VAR_6->login_rsp_buf, VAR_4->rsp_buf, VAR_5);

  FUNC_2(VAR_8, VAR_6->login_rsp_dma,
           VAR_5, VAR_0);

  VAR_11->addr = VAR_6->login_rsp_dma;
  VAR_11->length = VAR_5;
  VAR_11->lkey = VAR_6->device->pd->local_dma_lkey;
  VAR_9->num_sge = 2;
 }
 if (!VAR_4->login_failed) {
  if (VAR_4->login_complete) {
   VAR_10 = FUNC_3(VAR_6);
   if (VAR_10)
    return VAR_10;

   VAR_10 = FUNC_7(VAR_6,
            VAR_1);
   if (VAR_10)
    return VAR_10;


   FUNC_9(&VAR_6->mutex);
   VAR_6->state = VAR_2;
   FUNC_10(&VAR_6->mutex);
   goto post_send;
  }

  VAR_10 = FUNC_5(VAR_6);
  if (VAR_10)
   return VAR_10;
 }
post_send:
 VAR_10 = FUNC_6(VAR_6, VAR_9);
 if (VAR_10)
  return VAR_10;

 return 0;
}
