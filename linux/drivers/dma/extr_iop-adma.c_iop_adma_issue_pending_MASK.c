
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iop_adma_chan {scalar_t__ pending; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (struct iop_adma_chan*) ;
 struct iop_adma_chan* FUNC_1 (struct dma_chan*) ;

__attribute__((used)) static void FUNC_2(struct dma_chan *VAR_0)
{
 struct iop_adma_chan *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->pending) {
  VAR_1->pending = 0;
  FUNC_0(VAR_1);
 }
}
