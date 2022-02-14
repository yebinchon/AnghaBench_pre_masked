
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mic_dma_chan {int prep_lock; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 struct dma_async_tx_descriptor* FUNC_0 (struct mic_dma_chan*) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct device* FUNC_2 (struct mic_dma_chan*) ;
 int FUNC_3 (struct mic_dma_chan*,unsigned long,int ,int ,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct mic_dma_chan* FUNC_6 (struct dma_chan*) ;

__attribute__((used)) static struct dma_async_tx_descriptor *
FUNC_7(struct dma_chan *VAR_0, dma_addr_t VAR_1,
    dma_addr_t VAR_2, size_t VAR_3, unsigned long VAR_4)
{
 struct mic_dma_chan *VAR_5 = FUNC_6(VAR_0);
 struct device *VAR_6 = FUNC_2(VAR_5);
 int VAR_7;

 if (!VAR_3 && !VAR_4)
  return ((void*)0);

 FUNC_4(&VAR_5->prep_lock);
 VAR_7 = FUNC_3(VAR_5, VAR_4, VAR_2, VAR_1, VAR_3);
 if (VAR_7 >= 0)
  return FUNC_0(VAR_5);
 FUNC_1(VAR_6, "Error enqueueing dma, error=%d\n", VAR_7);
 FUNC_5(&VAR_5->prep_lock);
 return ((void*)0);
}
