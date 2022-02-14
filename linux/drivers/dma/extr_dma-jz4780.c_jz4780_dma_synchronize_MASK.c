
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jz4780_dma_dev {int dummy; } ;
struct jz4780_dma_chan {int id; int vchan; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (struct jz4780_dma_dev*,int ) ;
 struct jz4780_dma_dev* FUNC_1 (struct jz4780_dma_chan*) ;
 struct jz4780_dma_chan* FUNC_2 (struct dma_chan*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct dma_chan *VAR_0)
{
 struct jz4780_dma_chan *VAR_1 = FUNC_2(VAR_0);
 struct jz4780_dma_dev *VAR_2 = FUNC_1(VAR_1);

 FUNC_3(&VAR_1->vchan);
 FUNC_0(VAR_2, VAR_1->id);
}
