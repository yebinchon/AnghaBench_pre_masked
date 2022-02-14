
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct idmac_tx_desc {int txd; } ;
struct TYPE_4__ {unsigned int chan_id; TYPE_1__* dev; } ;
struct idmac_channel {TYPE_2__ dma_chan; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device device; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct device*,char*,struct scatterlist*,unsigned int,int) ;
 int FUNC_2 (unsigned int,int) ;
 int FUNC_3 (struct idmac_channel*,int,int ) ;
 int FUNC_4 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_5(struct idmac_channel *VAR_1,
 struct idmac_tx_desc *VAR_2, struct scatterlist *VAR_3, int VAR_4)
{
 unsigned int VAR_5 = VAR_1->dma_chan.chan_id;
 struct device *VAR_6 = &VAR_1->dma_chan.dev->device;

 if (FUNC_0(&VAR_2->txd))
  return -VAR_0;







 FUNC_3(VAR_1, VAR_4, FUNC_4(VAR_3));

 FUNC_2(VAR_5, VAR_4);
 FUNC_1(VAR_6, "Updated sg %p on channel 0x%x buffer %d\n",
  VAR_3, VAR_5, VAR_4);

 return 0;
}
