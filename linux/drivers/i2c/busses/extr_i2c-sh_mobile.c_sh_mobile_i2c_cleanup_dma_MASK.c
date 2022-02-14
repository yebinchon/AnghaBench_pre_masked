
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_i2c_data {scalar_t__ dma_direction; int dma_tx; int dma_rx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sh_mobile_i2c_data*) ;

__attribute__((used)) static void FUNC_2(struct sh_mobile_i2c_data *VAR_3)
{
 if (VAR_3->dma_direction == VAR_1)
  return;
 else if (VAR_3->dma_direction == VAR_0)
  FUNC_0(VAR_3->dma_rx);
 else if (VAR_3->dma_direction == VAR_2)
  FUNC_0(VAR_3->dma_tx);

 FUNC_1(VAR_3);
}
