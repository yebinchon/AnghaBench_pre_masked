
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmatest_params {int dummy; } ;
struct dma_chan {int device; } ;


 int FUNC_0 (struct dmatest_params*,struct dma_chan*) ;
 int FUNC_1 (struct dmatest_params*,int ) ;

__attribute__((used)) static bool FUNC_2(struct dma_chan *VAR_0, void *VAR_1)
{
 struct dmatest_params *VAR_2 = VAR_1;

 if (!FUNC_0(VAR_2, VAR_0) ||
     !FUNC_1(VAR_2, VAR_0->device))
  return 0;
 else
  return 1;
}
