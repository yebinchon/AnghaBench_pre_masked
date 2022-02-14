
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int src_maxburst; int src_addr; int dst_maxburst; int dst_addr; } ;
struct TYPE_6__ {TYPE_1__* device; } ;
struct TYPE_7__ {TYPE_2__ chan; } ;
struct fsl_edma_chan {int dma_dir; int dma_dev_size; int dma_dev_addr; TYPE_4__ cfg; TYPE_3__ vchan; } ;
struct device {int dummy; } ;
typedef int phys_addr_t ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_5__ {struct device* dev; } ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,int ,int ,int,int ) ;
 scalar_t__ FUNC_1 (struct device*,int ) ;
 int FUNC_2 (struct fsl_edma_chan*) ;

__attribute__((used)) static bool FUNC_3(struct fsl_edma_chan *VAR_3,
        enum dma_transfer_direction VAR_4)
{
 struct device *VAR_5 = VAR_3->vchan.chan.device->dev;
 enum dma_data_direction VAR_6;
 phys_addr_t VAR_7 = 0;
 u32 VAR_8 = 0;

 switch (VAR_4) {
 case 128:
  VAR_6 = VAR_0;
  VAR_7 = VAR_3->cfg.dst_addr;
  VAR_8 = VAR_3->cfg.dst_maxburst;
  break;
 case 129:
  VAR_6 = VAR_2;
  VAR_7 = VAR_3->cfg.src_addr;
  VAR_8 = VAR_3->cfg.src_maxburst;
  break;
 default:
  VAR_6 = VAR_1;
  break;
 }


 if (VAR_3->dma_dir == VAR_6)
  return 1;

 FUNC_2(VAR_3);

 VAR_3->dma_dev_addr = FUNC_0(VAR_5, VAR_7, VAR_8, VAR_6, 0);
 if (FUNC_1(VAR_5, VAR_3->dma_dev_addr))
  return 0;
 VAR_3->dma_dev_size = VAR_8;
 VAR_3->dma_dir = VAR_6;

 return 1;
}
