
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efa_com_mmio_read {int mmio_read_timeout; scalar_t__ seq_num; TYPE_1__* read_resp; int read_resp_dma_addr; int lock; } ;
struct efa_com_dev {int dmadev; struct efa_com_mmio_read mmio_read; } ;
struct TYPE_2__ {scalar_t__ req_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ,int,int *,int ) ;
 int FUNC_1 (struct efa_com_dev*) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct efa_com_dev *VAR_3)
{
 struct efa_com_mmio_read *VAR_4 = &VAR_3->mmio_read;

 FUNC_2(&VAR_4->lock);
 VAR_4->read_resp =
  FUNC_0(VAR_3->dmadev, sizeof(*VAR_4->read_resp),
       &VAR_4->read_resp_dma_addr, VAR_2);
 if (!VAR_4->read_resp)
  return -VAR_1;

 FUNC_1(VAR_3);

 VAR_4->read_resp->req_id = 0;
 VAR_4->seq_num = 0;
 VAR_4->mmio_read_timeout = VAR_0;

 return 0;
}
