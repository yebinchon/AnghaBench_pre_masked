
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
struct axi_dmac_desc {int cyclic; int vdesc; int sg; } ;
struct axi_dmac_chan {int direction; int vchan; int max_length; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef int dma_addr_t ;


 unsigned int FUNC_0 (size_t,int ) ;
 struct axi_dmac_desc* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct axi_dmac_chan*,int ) ;
 int FUNC_3 (struct axi_dmac_chan*,size_t) ;
 int FUNC_4 (struct axi_dmac_chan*,int,int ,unsigned int,size_t,int ) ;
 struct axi_dmac_chan* FUNC_5 (struct dma_chan*) ;
 struct dma_async_tx_descriptor* FUNC_6 (int *,int *,unsigned long) ;

__attribute__((used)) static struct dma_async_tx_descriptor *FUNC_7(
 struct dma_chan *VAR_0, dma_addr_t VAR_1, size_t VAR_2,
 size_t VAR_3, enum dma_transfer_direction VAR_4,
 unsigned long VAR_5)
{
 struct axi_dmac_chan *VAR_6 = FUNC_5(VAR_0);
 struct axi_dmac_desc *VAR_7;
 unsigned int VAR_8, VAR_9;

 if (VAR_4 != VAR_6->direction)
  return ((void*)0);

 if (!FUNC_3(VAR_6, VAR_2) ||
     !FUNC_2(VAR_6, VAR_1))
  return ((void*)0);

 if (VAR_3 == 0 || VAR_2 % VAR_3)
  return ((void*)0);

 VAR_8 = VAR_2 / VAR_3;
 VAR_9 = FUNC_0(VAR_3, VAR_6->max_length);

 VAR_7 = FUNC_1(VAR_8 * VAR_9);
 if (!VAR_7)
  return ((void*)0);

 FUNC_4(VAR_6, VAR_4, VAR_1, VAR_8,
  VAR_3, VAR_7->sg);

 VAR_7->cyclic = 1;

 return FUNC_6(&VAR_6->vchan, &VAR_7->vdesc, VAR_5);
}
