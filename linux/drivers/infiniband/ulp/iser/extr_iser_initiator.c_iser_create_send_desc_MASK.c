
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct iser_tx_desc {int num_sge; TYPE_2__ iser_header; int dma_addr; } ;
struct iser_device {int ib_device; } ;
struct iser_ctrl {int dummy; } ;
struct TYPE_3__ {struct iser_device* device; } ;
struct iser_conn {TYPE_1__ ib_conn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct iser_conn *VAR_3,
      struct iser_tx_desc *VAR_4)
{
 struct iser_device *VAR_5 = VAR_3->ib_conn.device;

 FUNC_0(VAR_5->ib_device,
  VAR_4->dma_addr, VAR_1, VAR_0);

 FUNC_1(&VAR_4->iser_header, 0, sizeof(struct iser_ctrl));
 VAR_4->iser_header.flags = VAR_2;
 VAR_4->num_sge = 1;
}
