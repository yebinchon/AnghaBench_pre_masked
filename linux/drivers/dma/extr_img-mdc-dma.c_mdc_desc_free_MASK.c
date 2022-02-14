
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virt_dma_desc {int tx; } ;
struct mdc_tx_desc {int dummy; } ;


 int FUNC_0 (struct mdc_tx_desc*) ;
 int FUNC_1 (struct mdc_tx_desc*) ;
 struct mdc_tx_desc* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct virt_dma_desc *VAR_0)
{
 struct mdc_tx_desc *VAR_1 = FUNC_2(&VAR_0->tx);

 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
}
