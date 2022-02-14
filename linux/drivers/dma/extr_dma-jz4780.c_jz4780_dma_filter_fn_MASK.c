
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jz4780_dma_filter_data {int channel; int transfer_type; } ;
struct jz4780_dma_dev {int chan_reserved; } ;
struct jz4780_dma_chan {int id; int transfer_type; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int) ;
 struct jz4780_dma_dev* FUNC_1 (struct jz4780_dma_chan*) ;
 struct jz4780_dma_chan* FUNC_2 (struct dma_chan*) ;

__attribute__((used)) static bool FUNC_3(struct dma_chan *VAR_0, void *VAR_1)
{
 struct jz4780_dma_chan *VAR_2 = FUNC_2(VAR_0);
 struct jz4780_dma_dev *VAR_3 = FUNC_1(VAR_2);
 struct jz4780_dma_filter_data *VAR_4 = VAR_1;


 if (VAR_4->channel > -1) {
  if (VAR_4->channel != VAR_2->id)
   return 0;
 } else if (VAR_3->chan_reserved & FUNC_0(VAR_2->id)) {
  return 0;
 }

 VAR_2->transfer_type = VAR_4->transfer_type;

 return 1;
}
