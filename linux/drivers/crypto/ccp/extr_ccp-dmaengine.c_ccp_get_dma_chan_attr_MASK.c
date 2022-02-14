
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccp_device {TYPE_1__* vdata; int dev; } ;
struct TYPE_2__ {unsigned int dma_chan_attr; } ;





 unsigned int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;

__attribute__((used)) static unsigned int FUNC_1(struct ccp_device *VAR_2)
{
 switch (VAR_1) {
 case 130:
  return VAR_2->vdata->dma_chan_attr;

 case 129:
  return VAR_0;

 case 128:
  return 0;

 default:
  FUNC_0(VAR_2->dev, "Invalid value for dma_chan_attr: %d\n",
         VAR_1);
  return VAR_2->vdata->dma_chan_attr;
 }
}
