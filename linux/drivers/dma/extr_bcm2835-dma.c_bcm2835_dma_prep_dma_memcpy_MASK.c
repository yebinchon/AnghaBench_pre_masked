
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
struct bcm2835_desc {int vd; } ;
struct bcm2835_chan {int vc; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct bcm2835_desc* FUNC_0 (struct dma_chan*,int ,int,int,int,size_t,int ,int ,size_t,int ,int ) ;
 size_t FUNC_1 (size_t,size_t) ;
 size_t FUNC_2 (struct bcm2835_chan*) ;
 struct bcm2835_chan* FUNC_3 (struct dma_chan*) ;
 struct dma_async_tx_descriptor* FUNC_4 (int *,int *,unsigned long) ;

__attribute__((used)) static struct dma_async_tx_descriptor *FUNC_5(
 struct dma_chan *VAR_6, dma_addr_t VAR_7, dma_addr_t VAR_8,
 size_t VAR_9, unsigned long VAR_10)
{
 struct bcm2835_chan *VAR_11 = FUNC_3(VAR_6);
 struct bcm2835_desc *VAR_12;
 u32 VAR_13 = VAR_0 | VAR_2;
 u32 VAR_14 = VAR_1 | VAR_3;
 size_t VAR_15 = FUNC_2(VAR_11);
 size_t VAR_16;


 if (!VAR_8 || !VAR_7 || !VAR_9)
  return ((void*)0);


 VAR_16 = FUNC_1(VAR_9, VAR_15);


 VAR_12 = FUNC_0(VAR_6, VAR_4, 0,
     VAR_13, VAR_14, VAR_16,
     VAR_8, VAR_7, VAR_9, 0, VAR_5);
 if (!VAR_12)
  return ((void*)0);

 return FUNC_4(&VAR_11->vc, &VAR_12->vd, VAR_10);
}
