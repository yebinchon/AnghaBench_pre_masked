
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qce_dma_data {int txchan; int rxchan; } ;


 int FUNC_0 (int ) ;

int FUNC_1(struct qce_dma_data *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0->rxchan);
 return VAR_1 ?: FUNC_0(VAR_0->txchan);
}
