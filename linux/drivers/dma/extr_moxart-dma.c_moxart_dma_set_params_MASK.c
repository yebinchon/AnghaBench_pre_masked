
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct moxart_chan {scalar_t__ base; } ;
typedef int dma_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct moxart_chan *VAR_2, dma_addr_t VAR_3,
      dma_addr_t VAR_4)
{
 FUNC_0(VAR_3, VAR_2->base + VAR_1);
 FUNC_0(VAR_4, VAR_2->base + VAR_0);
}
