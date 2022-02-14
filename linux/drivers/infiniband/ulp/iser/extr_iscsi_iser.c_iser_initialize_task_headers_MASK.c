
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_11__ {int * next; } ;
struct TYPE_12__ {TYPE_4__ wr; } ;
struct TYPE_10__ {int * next; } ;
struct iser_tx_desc {int mapped; TYPE_6__* tx_sg; int dma_addr; TYPE_5__ reg_wr; TYPE_3__ inv_wr; } ;
struct iser_device {TYPE_7__* pd; int ib_device; } ;
struct TYPE_9__ {struct iser_device* device; } ;
struct iser_conn {scalar_t__ state; int state_mutex; TYPE_2__ ib_conn; } ;
struct iscsi_task {int sc; struct iscsi_iser_task* dd_data; TYPE_1__* conn; } ;
struct iscsi_iser_task {struct iser_conn* iser_conn; } ;
struct TYPE_14__ {int local_dma_lkey; } ;
struct TYPE_13__ {int lkey; int length; int addr; } ;
struct TYPE_8__ {struct iser_conn* dd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,void*,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int const) ;

int
FUNC_6(struct iscsi_task *VAR_5,
        struct iser_tx_desc *VAR_6)
{
 struct iser_conn *VAR_7 = VAR_5->conn->dd_data;
 struct iser_device *VAR_8 = VAR_7->ib_conn.device;
 struct iscsi_iser_task *VAR_9 = VAR_5->dd_data;
 u64 VAR_10;
 const bool VAR_11 = !VAR_5->sc && !FUNC_2();
 int VAR_12 = 0;

 if (FUNC_5(VAR_11))
  FUNC_3(&VAR_7->state_mutex);

 if (FUNC_5(VAR_7->state != VAR_3)) {
  VAR_12 = -VAR_1;
  goto out;
 }

 VAR_10 = FUNC_0(VAR_8->ib_device, (void *)VAR_6,
    VAR_4, VAR_0);
 if (FUNC_1(VAR_8->ib_device, VAR_10)) {
  VAR_12 = -VAR_2;
  goto out;
 }

 VAR_6->inv_wr.next = ((void*)0);
 VAR_6->reg_wr.wr.next = ((void*)0);
 VAR_6->mapped = 1;
 VAR_6->dma_addr = VAR_10;
 VAR_6->tx_sg[0].addr = VAR_6->dma_addr;
 VAR_6->tx_sg[0].length = VAR_4;
 VAR_6->tx_sg[0].lkey = VAR_8->pd->local_dma_lkey;

 VAR_9->iser_conn = VAR_7;
out:
 if (FUNC_5(VAR_11))
  FUNC_4(&VAR_7->state_mutex);

 return VAR_12;
}
