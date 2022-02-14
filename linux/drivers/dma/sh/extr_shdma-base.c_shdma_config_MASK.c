
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shdma_chan {scalar_t__ real_slave_id; } ;
struct dma_slave_config {scalar_t__ slave_id; scalar_t__ direction; int dst_addr; int src_addr; } ;
struct dma_chan {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct shdma_chan*,int ) ;
 struct shdma_chan* FUNC_2 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_3(struct dma_chan *VAR_2,
   struct dma_slave_config *VAR_3)
{
 struct shdma_chan *VAR_4 = FUNC_2(VAR_2);





 if (!VAR_3)
  return -VAR_1;





 if (FUNC_0(VAR_3->slave_id &&
    VAR_3->slave_id != VAR_4->real_slave_id))
  VAR_4->real_slave_id = VAR_3->slave_id;





 return FUNC_1(VAR_4,
     VAR_3->direction == VAR_0 ?
     VAR_3->src_addr : VAR_3->dst_addr);
}
