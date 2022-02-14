
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_qdma_comp {int vdesc; } ;
struct fsl_qdma_chan {int vchan; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct fsl_qdma_comp*,int ,int ,size_t) ;
 struct fsl_qdma_comp* FUNC_1 (struct fsl_qdma_chan*) ;
 struct fsl_qdma_chan* FUNC_2 (struct dma_chan*) ;
 struct dma_async_tx_descriptor* FUNC_3 (int *,int *,unsigned long) ;

__attribute__((used)) static struct dma_async_tx_descriptor *
FUNC_4(struct dma_chan *VAR_0, dma_addr_t VAR_1,
       dma_addr_t VAR_2, size_t VAR_3, unsigned long VAR_4)
{
 struct fsl_qdma_comp *VAR_5;
 struct fsl_qdma_chan *VAR_6 = FUNC_2(VAR_0);

 VAR_5 = FUNC_1(VAR_6);

 if (!VAR_5)
  return ((void*)0);

 FUNC_0(VAR_5, VAR_1, VAR_2, VAR_3);

 return FUNC_3(&VAR_6->vchan, &VAR_5->vdesc, VAR_4);
}
