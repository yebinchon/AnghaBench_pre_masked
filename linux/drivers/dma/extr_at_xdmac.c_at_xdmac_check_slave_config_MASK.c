
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_slave_config {scalar_t__ src_maxburst; scalar_t__ dst_maxburst; scalar_t__ src_addr_width; scalar_t__ dst_addr_width; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct dma_slave_config *VAR_3)
{
 if ((VAR_3->src_maxburst > VAR_0)
     || (VAR_3->dst_maxburst > VAR_0))
  return -VAR_2;

 if ((VAR_3->src_addr_width > VAR_1)
     || (VAR_3->dst_addr_width > VAR_1))
  return -VAR_2;

 return 0;
}
