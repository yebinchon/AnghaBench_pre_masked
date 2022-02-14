
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dst_addr_width; int src_addr_width; } ;
struct mdc_chan {TYPE_2__* mdma; TYPE_1__ config; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;
struct TYPE_4__ {int bus_width; } ;


 int VAR_0 ;




 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct mdc_chan *VAR_2,
     enum dma_transfer_direction VAR_3)
{
 enum dma_slave_buswidth VAR_4;

 if (VAR_3 == VAR_0)
  VAR_4 = VAR_2->config.dst_addr_width;
 else
  VAR_4 = VAR_2->config.src_addr_width;

 switch (VAR_4) {
 case 131:
 case 130:
 case 129:
 case 128:
  break;
 default:
  return -VAR_1;
 }

 if (VAR_4 > VAR_2->mdma->bus_width)
  return -VAR_1;

 return 0;
}
