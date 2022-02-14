
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct isert_device {TYPE_1__* pd; } ;
struct TYPE_6__ {int flags; } ;
struct iser_tx_desc {int num_sge; TYPE_2__* tx_sg; TYPE_3__ iser_header; } ;
struct iser_ctrl {int dummy; } ;
struct TYPE_5__ {scalar_t__ lkey; } ;
struct TYPE_4__ {scalar_t__ local_dma_lkey; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct iser_tx_desc*) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct isert_device *VAR_1,
    struct iser_tx_desc *VAR_2)
{

 FUNC_1(&VAR_2->iser_header, 0, sizeof(struct iser_ctrl));
 VAR_2->iser_header.flags = VAR_0;

 VAR_2->num_sge = 1;

 if (VAR_2->tx_sg[0].lkey != VAR_1->pd->local_dma_lkey) {
  VAR_2->tx_sg[0].lkey = VAR_1->pd->local_dma_lkey;
  FUNC_0("tx_desc %p lkey mismatch, fixing\n", VAR_2);
 }
}
