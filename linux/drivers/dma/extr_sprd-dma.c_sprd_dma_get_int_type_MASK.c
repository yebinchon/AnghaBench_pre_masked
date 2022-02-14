
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int dev; } ;
struct sprd_dma_dev {TYPE_2__ dma_dev; } ;
struct TYPE_3__ {int chan; } ;
struct sprd_dma_chn {scalar_t__ chn_base; TYPE_1__ vc; } ;
typedef enum sprd_dma_int_type { ____Placeholder_sprd_dma_int_type } sprd_dma_int_type ;


 int VAR_0 ;

 int VAR_1 ;

 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;

 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__) ;
 struct sprd_dma_dev* FUNC_2 (int *) ;

__attribute__((used)) static enum sprd_dma_int_type FUNC_3(struct sprd_dma_chn *VAR_8)
{
 struct sprd_dma_dev *VAR_9 = FUNC_2(&VAR_8->vc.chan);
 u32 VAR_10 = FUNC_1(VAR_8->chn_base + VAR_2) &
         VAR_3;

 switch (VAR_10) {
 case 131:
  return VAR_1;

 case 129:
  return VAR_5;

 case 128:
  return VAR_7;

 case 132:
  return VAR_0;

 case 130:
  return VAR_4;

 default:
  FUNC_0(VAR_9->dma_dev.dev, "incorrect dma interrupt type\n");
  return VAR_6;
 }
}
