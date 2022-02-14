
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int phys; int flags; int tx_submit; } ;
struct timb_dma_desc {int desc_list_len; struct timb_dma_desc* desc_list; TYPE_1__ txd; } ;
struct dma_chan {int dummy; } ;
struct timb_dma_chan {int desc_elems; struct dma_chan chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (struct dma_chan*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (TYPE_1__*,struct dma_chan*) ;
 int FUNC_4 (int ,struct timb_dma_desc*,int,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct timb_dma_desc*) ;
 void* FUNC_7 (int,int ) ;
 int VAR_4 ;

__attribute__((used)) static struct timb_dma_desc *FUNC_8(struct timb_dma_chan *VAR_5)
{
 struct dma_chan *VAR_6 = &VAR_5->chan;
 struct timb_dma_desc *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_7(sizeof(struct timb_dma_desc), VAR_2);
 if (!VAR_7)
  goto out;

 VAR_7->desc_list_len = VAR_5->desc_elems * VAR_3;

 VAR_7->desc_list = FUNC_7(VAR_7->desc_list_len, VAR_2);
 if (!VAR_7->desc_list)
  goto err;

 FUNC_3(&VAR_7->txd, VAR_6);
 VAR_7->txd.tx_submit = VAR_4;
 VAR_7->txd.flags = VAR_0;

 VAR_7->txd.phys = FUNC_4(FUNC_1(VAR_6),
  VAR_7->desc_list, VAR_7->desc_list_len, VAR_1);

 VAR_8 = FUNC_5(FUNC_1(VAR_6), VAR_7->txd.phys);
 if (VAR_8) {
  FUNC_2(FUNC_0(VAR_6), "DMA mapping error: %d\n", VAR_8);
  goto err;
 }

 return VAR_7;
err:
 FUNC_6(VAR_7->desc_list);
 FUNC_6(VAR_7);
out:
 return ((void*)0);

}
