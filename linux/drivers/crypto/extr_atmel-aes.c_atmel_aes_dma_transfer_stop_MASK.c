
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_aes_dma {int chan; } ;
struct atmel_aes_dev {struct atmel_aes_dma dst; struct atmel_aes_dma src; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;




 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct atmel_aes_dev *VAR_0,
     enum dma_transfer_direction VAR_1)
{
 struct atmel_aes_dma *VAR_2;

 switch (VAR_1) {
 case 128:
  VAR_2 = &VAR_0->src;
  break;

 case 129:
  VAR_2 = &VAR_0->dst;
  break;

 default:
  return;
 }

 FUNC_0(VAR_2->chan);
}
