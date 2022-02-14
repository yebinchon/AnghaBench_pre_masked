
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_slave_config {int dummy; } ;
struct pxad_chan {struct dma_slave_config cfg; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 struct pxad_chan* FUNC_0 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_1(struct dma_chan *VAR_1,
         struct dma_slave_config *VAR_2)
{
 struct pxad_chan *VAR_3 = FUNC_0(VAR_1);

 if (!VAR_1)
  return -VAR_0;

 VAR_3->cfg = *VAR_2;
 return 0;
}
