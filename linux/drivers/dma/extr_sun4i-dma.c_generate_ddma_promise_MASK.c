
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_dma_promise {size_t len; int cfg; void* dst; void* src; } ;
struct dma_slave_config {int dst_addr_width; int src_addr_width; int dst_maxburst; int src_maxburst; } ;
struct dma_chan {int dummy; } ;
typedef void* dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sun4i_dma_promise*) ;
 struct sun4i_dma_promise* FUNC_7 (int,int ) ;

__attribute__((used)) static struct sun4i_dma_promise *
FUNC_8(struct dma_chan *VAR_3, dma_addr_t VAR_4, dma_addr_t VAR_5,
        size_t VAR_6, struct dma_slave_config *VAR_7)
{
 struct sun4i_dma_promise *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_7(sizeof(*VAR_8), VAR_0);
 if (!VAR_8)
  return ((void*)0);

 VAR_8->src = VAR_4;
 VAR_8->dst = VAR_5;
 VAR_8->len = VAR_6;
 VAR_8->cfg = VAR_2 |
  VAR_1;


 VAR_9 = FUNC_4(VAR_7->src_maxburst);
 if (VAR_9 < 0)
  goto fail;
 VAR_8->cfg |= FUNC_2(VAR_9);


 VAR_9 = FUNC_4(VAR_7->dst_maxburst);
 if (VAR_9 < 0)
  goto fail;
 VAR_8->cfg |= FUNC_0(VAR_9);


 VAR_9 = FUNC_5(VAR_7->src_addr_width);
 if (VAR_9 < 0)
  goto fail;
 VAR_8->cfg |= FUNC_3(VAR_9);


 VAR_9 = FUNC_5(VAR_7->dst_addr_width);
 if (VAR_9 < 0)
  goto fail;
 VAR_8->cfg |= FUNC_1(VAR_9);

 return VAR_8;

fail:
 FUNC_6(VAR_8);
 return ((void*)0);
}
