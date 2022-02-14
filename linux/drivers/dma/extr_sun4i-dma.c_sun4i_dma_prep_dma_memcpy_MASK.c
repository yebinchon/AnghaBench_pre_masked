
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_slave_config {int src_maxburst; int dst_maxburst; void* dst_addr_width; void* src_addr_width; } ;
struct sun4i_dma_vchan {int vc; scalar_t__ is_dedicated; struct dma_slave_config cfg; } ;
struct sun4i_dma_promise {int cfg; int list; } ;
struct sun4i_dma_contract {int vd; int demands; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 struct sun4i_dma_promise* FUNC_2 (struct dma_chan*,int ,int ,size_t,struct dma_slave_config*) ;
 struct sun4i_dma_contract* FUNC_3 () ;
 struct sun4i_dma_promise* FUNC_4 (struct dma_chan*,int ,int ,size_t,struct dma_slave_config*,int ) ;
 int FUNC_5 (struct sun4i_dma_contract*) ;
 int FUNC_6 (int *,int *) ;
 struct sun4i_dma_vchan* FUNC_7 (struct dma_chan*) ;
 struct dma_async_tx_descriptor* FUNC_8 (int *,int *,unsigned long) ;

__attribute__((used)) static struct dma_async_tx_descriptor *
FUNC_9(struct dma_chan *VAR_4, dma_addr_t VAR_5,
     dma_addr_t VAR_6, size_t VAR_7, unsigned long VAR_8)
{
 struct sun4i_dma_vchan *VAR_9 = FUNC_7(VAR_4);
 struct dma_slave_config *VAR_10 = &VAR_9->cfg;
 struct sun4i_dma_promise *VAR_11;
 struct sun4i_dma_contract *VAR_12;

 VAR_12 = FUNC_3();
 if (!VAR_12)
  return ((void*)0);






 VAR_10->src_addr_width = VAR_1;
 VAR_10->dst_addr_width = VAR_1;
 VAR_10->src_maxburst = 8;
 VAR_10->dst_maxburst = 8;

 if (VAR_9->is_dedicated)
  VAR_11 = FUNC_2(VAR_4, VAR_6, VAR_5, VAR_7, VAR_10);
 else
  VAR_11 = FUNC_4(VAR_4, VAR_6, VAR_5, VAR_7, VAR_10,
      VAR_0);

 if (!VAR_11) {
  FUNC_5(VAR_12);
  return ((void*)0);
 }


 if (VAR_9->is_dedicated) {
  VAR_11->cfg |= FUNC_1(VAR_2) |
    FUNC_0(VAR_2);
 } else {
  VAR_11->cfg |= FUNC_1(VAR_3) |
    FUNC_0(VAR_3);
 }


 FUNC_6(&VAR_11->list, &VAR_12->demands);


 return FUNC_8(&VAR_9->vc, &VAR_12->vd, VAR_8);
}
