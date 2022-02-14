
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_dma_promise {size_t len; int cfg; void* dst; void* src; } ;
struct dma_slave_config {int dst_addr_width; int src_addr_width; int dst_maxburst; int src_maxburst; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef void* dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (struct dma_chan*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_8 (struct sun4i_dma_promise*) ;
 struct sun4i_dma_promise* FUNC_9 (int,int ) ;
 int FUNC_10 (struct dma_slave_config*,int) ;

__attribute__((used)) static struct sun4i_dma_promise *
FUNC_11(struct dma_chan *VAR_3, dma_addr_t VAR_4, dma_addr_t VAR_5,
        size_t VAR_6, struct dma_slave_config *VAR_7,
        enum dma_transfer_direction VAR_8)
{
 struct sun4i_dma_promise *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_10(VAR_7, VAR_8);
 if (VAR_10)
  return ((void*)0);

 VAR_9 = FUNC_9(sizeof(*VAR_9), VAR_0);
 if (!VAR_9)
  return ((void*)0);

 VAR_9->src = VAR_4;
 VAR_9->dst = VAR_5;
 VAR_9->len = VAR_6;
 VAR_9->cfg = VAR_1 |
  VAR_2;

 FUNC_7(FUNC_4(VAR_3),
  "src burst %d, dst burst %d, src buswidth %d, dst buswidth %d",
  VAR_7->src_maxburst, VAR_7->dst_maxburst,
  VAR_7->src_addr_width, VAR_7->dst_addr_width);


 VAR_10 = FUNC_5(VAR_7->src_maxburst);
 if (VAR_10 < 0)
  goto fail;
 VAR_9->cfg |= FUNC_2(VAR_10);


 VAR_10 = FUNC_5(VAR_7->dst_maxburst);
 if (VAR_10 < 0)
  goto fail;
 VAR_9->cfg |= FUNC_0(VAR_10);


 VAR_10 = FUNC_6(VAR_7->src_addr_width);
 if (VAR_10 < 0)
  goto fail;
 VAR_9->cfg |= FUNC_3(VAR_10);


 VAR_10 = FUNC_6(VAR_7->dst_addr_width);
 if (VAR_10 < 0)
  goto fail;
 VAR_9->cfg |= FUNC_1(VAR_10);

 return VAR_9;

fail:
 FUNC_8(VAR_9);
 return ((void*)0);
}
