
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct isert_device {TYPE_1__* pd; struct ib_device* ib_device; } ;
struct isert_conn {struct iser_rx_desc* rx_descs; struct isert_device* device; } ;
struct TYPE_4__ {int done; } ;
struct ib_sge {int lkey; int length; int addr; } ;
struct iser_rx_desc {int dma_addr; TYPE_2__ rx_cqe; struct ib_sge rx_sg; } ;
struct ib_device {int dummy; } ;
struct TYPE_3__ {int local_dma_lkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ib_device*,void*,int ,int ) ;
 scalar_t__ FUNC_1 (struct ib_device*,int ) ;
 int FUNC_2 (struct ib_device*,int ,int ,int ) ;
 int FUNC_3 (char*,struct isert_conn*) ;
 int VAR_5 ;
 struct iser_rx_desc* FUNC_4 (int,int,int ) ;
 int FUNC_5 (struct iser_rx_desc*) ;

__attribute__((used)) static int
FUNC_6(struct isert_conn *VAR_6)
{
 struct isert_device *VAR_7 = VAR_6->device;
 struct ib_device *VAR_8 = VAR_7->ib_device;
 struct iser_rx_desc *VAR_9;
 struct ib_sge *VAR_10;
 u64 VAR_11;
 int VAR_12, VAR_13;

 VAR_6->rx_descs = FUNC_4(VAR_3,
           sizeof(struct iser_rx_desc),
           VAR_2);
 if (!VAR_6->rx_descs)
  return -VAR_1;

 VAR_9 = VAR_6->rx_descs;

 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++, VAR_9++) {
  VAR_11 = FUNC_0(VAR_8, (void *)VAR_9,
     VAR_4, VAR_0);
  if (FUNC_1(VAR_8, VAR_11))
   goto dma_map_fail;

  VAR_9->dma_addr = VAR_11;

  VAR_10 = &VAR_9->rx_sg;
  VAR_10->addr = VAR_9->dma_addr;
  VAR_10->length = VAR_4;
  VAR_10->lkey = VAR_7->pd->local_dma_lkey;
  VAR_9->rx_cqe.done = VAR_5;
 }

 return 0;

dma_map_fail:
 VAR_9 = VAR_6->rx_descs;
 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++, VAR_9++) {
  FUNC_2(VAR_8, VAR_9->dma_addr,
        VAR_4, VAR_0);
 }
 FUNC_5(VAR_6->rx_descs);
 VAR_6->rx_descs = ((void*)0);
 FUNC_3("conn %p failed to allocate rx descriptors\n", VAR_6);
 return -VAR_1;
}
