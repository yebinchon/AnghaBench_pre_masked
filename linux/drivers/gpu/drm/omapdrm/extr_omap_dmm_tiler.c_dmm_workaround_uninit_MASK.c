
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmm {int wa_dma_handle; int wa_dma_data; int dev; int wa_dma_chan; } ;


 int FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct dmm *VAR_0)
{
 FUNC_1(VAR_0->wa_dma_chan);

 FUNC_0(VAR_0->dev, 4, VAR_0->wa_dma_data, VAR_0->wa_dma_handle);
}
