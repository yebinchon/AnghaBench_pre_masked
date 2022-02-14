
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct isert_device {TYPE_1__* pd; struct ib_device* ib_device; } ;
struct isert_conn {struct isert_device* device; } ;
struct iser_tx_desc {TYPE_2__* tx_sg; int dma_addr; } ;
struct ib_device {int dummy; } ;
struct TYPE_4__ {int lkey; int length; int addr; } ;
struct TYPE_3__ {int local_dma_lkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ib_device*,void*,int ,int ) ;
 scalar_t__ FUNC_1 (struct ib_device*,int ) ;
 int FUNC_2 (char*,int ,int ,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(struct isert_conn *VAR_3,
     struct iser_tx_desc *VAR_4)
{
 struct isert_device *VAR_5 = VAR_3->device;
 struct ib_device *VAR_6 = VAR_5->ib_device;
 u64 VAR_7;

 VAR_7 = FUNC_0(VAR_6, (void *)VAR_4,
   VAR_2, VAR_0);
 if (FUNC_1(VAR_6, VAR_7)) {
  FUNC_3("ib_dma_mapping_error() failed\n");
  return -VAR_1;
 }

 VAR_4->dma_addr = VAR_7;
 VAR_4->tx_sg[0].addr = VAR_4->dma_addr;
 VAR_4->tx_sg[0].length = VAR_2;
 VAR_4->tx_sg[0].lkey = VAR_5->pd->local_dma_lkey;

 FUNC_2("Setup tx_sg[0].addr: 0x%llx length: %u lkey: 0x%x\n",
    VAR_4->tx_sg[0].addr, VAR_4->tx_sg[0].length,
    VAR_4->tx_sg[0].lkey);

 return 0;
}
