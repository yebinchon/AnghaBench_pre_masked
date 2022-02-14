
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iser_rx_desc {int dma_addr; } ;
struct iser_device {int ib_device; TYPE_1__* reg_ops; } ;
struct ib_conn {struct iser_device* device; } ;
struct iser_conn {int qp_max_recv_dtos; struct iser_rx_desc* rx_descs; struct ib_conn ib_conn; } ;
struct TYPE_2__ {int (* free_reg_res ) (struct ib_conn*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct iser_conn*) ;
 int FUNC_2 (struct iser_rx_desc*) ;
 int FUNC_3 (struct ib_conn*) ;

void FUNC_4(struct iser_conn *VAR_2)
{
 int VAR_3;
 struct iser_rx_desc *VAR_4;
 struct ib_conn *VAR_5 = &VAR_2->ib_conn;
 struct iser_device *VAR_6 = VAR_5->device;

 if (VAR_6->reg_ops->free_reg_res)
  VAR_6->reg_ops->free_reg_res(VAR_5);

 VAR_4 = VAR_2->rx_descs;
 for (VAR_3 = 0; VAR_3 < VAR_2->qp_max_recv_dtos; VAR_3++, VAR_4++)
  FUNC_0(VAR_6->ib_device, VAR_4->dma_addr,
        VAR_1, VAR_0);
 FUNC_2(VAR_2->rx_descs);

 VAR_2->rx_descs = ((void*)0);

 FUNC_1(VAR_2);
}
