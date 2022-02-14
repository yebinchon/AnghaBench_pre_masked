
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iser_tx_desc {int dma_addr; } ;
struct iser_device {int ib_device; } ;
struct ib_wc {scalar_t__ status; TYPE_1__* qp; int wr_cqe; } ;
struct ib_cq {int dummy; } ;
struct ib_conn {struct iser_device* device; } ;
struct TYPE_4__ {int desc_cache; } ;
struct TYPE_3__ {struct ib_conn* qp_context; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 TYPE_2__ VAR_3 ;
 int FUNC_1 (struct ib_wc*,char*) ;
 struct iser_tx_desc* FUNC_2 (int ) ;
 int FUNC_3 (int ,struct iser_tx_desc*) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(struct ib_cq *VAR_4, struct ib_wc *VAR_5)
{
 struct iser_tx_desc *VAR_6 = FUNC_2(VAR_5->wr_cqe);
 struct ib_conn *VAR_7 = VAR_5->qp->qp_context;
 struct iser_device *VAR_8 = VAR_7->device;

 if (FUNC_4(VAR_5->status != VAR_1))
  FUNC_1(VAR_5, "dataout");

 FUNC_0(VAR_8->ib_device, VAR_6->dma_addr,
       VAR_2, VAR_0);
 FUNC_3(VAR_3.desc_cache, VAR_6);
}
