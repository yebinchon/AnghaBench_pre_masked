
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsldma_chan {int (* set_request_count ) (struct fsldma_chan*,int) ;} ;
struct dma_slave_config {scalar_t__ direction; int dst_addr_width; int dst_maxburst; int src_addr_width; int src_maxburst; } ;
struct dma_chan {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fsldma_chan*,int) ;
 struct fsldma_chan* FUNC_1 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_2(struct dma_chan *VAR_3,
     struct dma_slave_config *VAR_4)
{
 struct fsldma_chan *VAR_5;
 int VAR_6;

 if (!VAR_3)
  return -VAR_1;

 VAR_5 = FUNC_1(VAR_3);


 if (!VAR_5->set_request_count)
  return -VAR_2;


 if (VAR_4->direction == VAR_0)
  VAR_6 = VAR_4->dst_addr_width * VAR_4->dst_maxburst;
 else
  VAR_6 = VAR_4->src_addr_width * VAR_4->src_maxburst;

 VAR_5->set_request_count(VAR_5, VAR_6);
 return 0;
}
