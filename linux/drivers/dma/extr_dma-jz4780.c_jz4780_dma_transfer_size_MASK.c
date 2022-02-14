
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct jz4780_dma_dev {TYPE_1__* soc_data; } ;
struct jz4780_dma_chan {int dummy; } ;
struct TYPE_2__ {int transfer_ord_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned long) ;
 struct jz4780_dma_dev* FUNC_1 (struct jz4780_dma_chan*) ;

__attribute__((used)) static uint32_t FUNC_2(struct jz4780_dma_chan *VAR_7,
 unsigned long VAR_8, uint32_t *VAR_9)
{
 struct jz4780_dma_dev *VAR_10 = FUNC_1(VAR_7);
 int VAR_11 = FUNC_0(VAR_8) - 1;
 if (VAR_11 == 3)
  VAR_11 = 2;
 else if (VAR_11 > VAR_10->soc_data->transfer_ord_max)
  VAR_11 = VAR_10->soc_data->transfer_ord_max;

 *VAR_9 = VAR_11;

 switch (VAR_11) {
 case 0:
  return VAR_2;
 case 1:
  return VAR_3;
 case 2:
  return VAR_5;
 case 4:
  return VAR_1;
 case 5:
  return VAR_4;
 case 6:
  return VAR_6;
 default:
  return VAR_0;
 }
}
