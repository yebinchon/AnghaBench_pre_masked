
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int chan; } ;
struct tegra_adma_chan {unsigned int sreq_index; int sreq_reserved; int sreq_dir; TYPE_2__ vc; struct tegra_adma* tdma; } ;
struct tegra_adma {int dev; int rx_requests_reserved; int tx_requests_reserved; TYPE_1__* cdata; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
struct TYPE_3__ {unsigned int ch_req_max; } ;




 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (unsigned int,int *) ;

__attribute__((used)) static int FUNC_4(struct tegra_adma_chan *VAR_1,
        enum dma_transfer_direction VAR_2)
{
 struct tegra_adma *VAR_3 = VAR_1->tdma;
 unsigned int VAR_4 = VAR_1->sreq_index;

 if (VAR_1->sreq_reserved)
  return VAR_1->sreq_dir == VAR_2 ? 0 : -VAR_0;

 if (VAR_4 > VAR_3->cdata->ch_req_max) {
  FUNC_1(VAR_3->dev, "invalid DMA request\n");
  return -VAR_0;
 }

 switch (VAR_2) {
 case 128:
  if (FUNC_3(VAR_4, &VAR_3->tx_requests_reserved)) {
   FUNC_1(VAR_3->dev, "DMA request reserved\n");
   return -VAR_0;
  }
  break;

 case 129:
  if (FUNC_3(VAR_4, &VAR_3->rx_requests_reserved)) {
   FUNC_1(VAR_3->dev, "DMA request reserved\n");
   return -VAR_0;
  }
  break;

 default:
  FUNC_0(VAR_3->dev, "channel %s has invalid transfer type\n",
    FUNC_2(&VAR_1->vc.chan));
  return -VAR_0;
 }

 VAR_1->sreq_dir = VAR_2;
 VAR_1->sreq_reserved = 1;

 return 0;
}
