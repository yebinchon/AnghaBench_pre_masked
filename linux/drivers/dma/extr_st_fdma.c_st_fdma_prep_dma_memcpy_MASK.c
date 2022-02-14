
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {size_t length; scalar_t__ dstride; scalar_t__ sstride; } ;
struct st_fdma_hw_node {size_t nbytes; TYPE_3__ generic; void* daddr; void* saddr; int control; scalar_t__ next; } ;
struct st_fdma_desc {int vdesc; TYPE_2__* node; } ;
struct st_fdma_chan {int vchan; TYPE_1__* fdev; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef void* dma_addr_t ;
struct TYPE_5__ {struct st_fdma_hw_node* desc; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 struct st_fdma_desc* FUNC_1 (struct st_fdma_chan*,int) ;
 struct st_fdma_chan* FUNC_2 (struct dma_chan*) ;
 struct dma_async_tx_descriptor* FUNC_3 (int *,int *,unsigned long) ;

__attribute__((used)) static struct dma_async_tx_descriptor *FUNC_4(
 struct dma_chan *VAR_4, dma_addr_t VAR_5, dma_addr_t VAR_6,
 size_t VAR_7, unsigned long VAR_8)
{
 struct st_fdma_chan *VAR_9;
 struct st_fdma_desc *VAR_10;
 struct st_fdma_hw_node *VAR_11;

 if (!VAR_7)
  return ((void*)0);

 VAR_9 = FUNC_2(VAR_4);


 VAR_10 = FUNC_1(VAR_9, 1);
 if (!VAR_10) {
  FUNC_0(VAR_9->fdev->dev, "no memory for desc\n");
  return ((void*)0);
 }

 VAR_11 = VAR_10->node[0].desc;
 VAR_11->next = 0;
 VAR_11->control = VAR_2;
 VAR_11->control |= VAR_3;
 VAR_11->control |= VAR_0;
 VAR_11->control |= VAR_1;
 VAR_11->nbytes = VAR_7;
 VAR_11->saddr = VAR_6;
 VAR_11->daddr = VAR_5;
 VAR_11->generic.length = VAR_7;
 VAR_11->generic.sstride = 0;
 VAR_11->generic.dstride = 0;

 return FUNC_3(&VAR_9->vchan, &VAR_10->vdesc, VAR_8);
}
