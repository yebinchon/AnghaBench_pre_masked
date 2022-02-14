
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {size_t length; } ;
struct st_fdma_hw_node {size_t nbytes; TYPE_3__ generic; void* daddr; void* saddr; int control; int next; } ;
struct st_fdma_desc {int iscyclic; int vdesc; TYPE_2__* node; } ;
struct st_fdma_chan {int vchan; int dreq_line; TYPE_1__* fdev; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef void* dma_addr_t ;
struct TYPE_5__ {int pdesc; struct st_fdma_hw_node* desc; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct st_fdma_chan*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct st_fdma_hw_node*,struct st_fdma_chan*,int) ;
 struct st_fdma_desc* FUNC_4 (struct st_fdma_chan*,int) ;
 struct st_fdma_chan* FUNC_5 (struct dma_chan*,size_t,int) ;
 struct dma_async_tx_descriptor* FUNC_6 (int *,int *,unsigned long) ;

__attribute__((used)) static struct dma_async_tx_descriptor *FUNC_7(
  struct dma_chan *VAR_2, dma_addr_t VAR_3, size_t VAR_4,
  size_t VAR_5, enum dma_transfer_direction VAR_6,
  unsigned long VAR_7)
{
 struct st_fdma_chan *VAR_8;
 struct st_fdma_desc *VAR_9;
 int VAR_10, VAR_11;

 VAR_8 = FUNC_5(VAR_2, VAR_4, VAR_6);
 if (!VAR_8)
  return ((void*)0);

 if (!VAR_5)
  return ((void*)0);

 if (FUNC_1(VAR_8, VAR_6)) {
  FUNC_2(VAR_8->fdev->dev, "bad width or direction\n");
  return ((void*)0);
 }


 if (VAR_4 % VAR_5 != 0) {
  FUNC_2(VAR_8->fdev->dev, "len is not multiple of period\n");
  return ((void*)0);
 }

 VAR_10 = VAR_4 / VAR_5;
 VAR_9 = FUNC_4(VAR_8, VAR_10);
 if (!VAR_9) {
  FUNC_2(VAR_8->fdev->dev, "no memory for desc\n");
  return ((void*)0);
 }

 VAR_9->iscyclic = 1;

 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  struct st_fdma_hw_node *VAR_12 = VAR_9->node[VAR_11].desc;

  VAR_12->next = VAR_9->node[(VAR_11 + 1) % VAR_10].pdesc;

  VAR_12->control =
   FUNC_0(VAR_8->dreq_line);
  VAR_12->control |= VAR_1;

  FUNC_3(VAR_12, VAR_8, VAR_6);

  if (VAR_6 == VAR_0)
   VAR_12->saddr = VAR_3 + (VAR_11 * VAR_5);
  else
   VAR_12->daddr = VAR_3 + (VAR_11 * VAR_5);

  VAR_12->nbytes = VAR_5;
  VAR_12->generic.length = VAR_5;
 }

 return FUNC_6(&VAR_8->vchan, &VAR_9->vdesc, VAR_7);
}
