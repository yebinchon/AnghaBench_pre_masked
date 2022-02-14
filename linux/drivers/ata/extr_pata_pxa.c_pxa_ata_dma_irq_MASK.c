
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pata_pxa_data {int dma_done; int dma_cookie; int dma_chan; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_2)
{
 struct pata_pxa_data *VAR_3 = VAR_2;
 enum dma_status VAR_4;

 VAR_4 = FUNC_1(VAR_3->dma_chan, VAR_3->dma_cookie, ((void*)0));
 if (VAR_4 == VAR_1 || VAR_4 == VAR_0)
  FUNC_0(&VAR_3->dma_done);
}
