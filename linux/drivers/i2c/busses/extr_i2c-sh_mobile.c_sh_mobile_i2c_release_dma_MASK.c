
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_i2c_data {void* dma_rx; void* dma_tx; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static void FUNC_3(struct sh_mobile_i2c_data *VAR_1)
{
 if (!FUNC_1(VAR_1->dma_tx)) {
  FUNC_2(VAR_1->dma_tx);
  VAR_1->dma_tx = FUNC_0(-VAR_0);
 }

 if (!FUNC_1(VAR_1->dma_rx)) {
  FUNC_2(VAR_1->dma_rx);
  VAR_1->dma_rx = FUNC_0(-VAR_0);
 }
}
