
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dw_edma_chan {scalar_t__ status; TYPE_1__* chip; } ;
struct dma_chan {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct dw_edma_chan* FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct dma_chan *VAR_2)
{
 struct dw_edma_chan *VAR_3 = FUNC_0(VAR_2);

 if (VAR_3->status != VAR_1)
  return -VAR_0;

 FUNC_1(VAR_3->chip->dev);

 return 0;
}
