
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_channel {int terminate_worker; scalar_t__ desc; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct dma_chan*) ;
 struct sdma_channel* FUNC_2 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_3(struct dma_chan *VAR_0)
{
 struct sdma_channel *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_0);

 if (VAR_1->desc)
  FUNC_0(&VAR_1->terminate_worker);

 return 0;
}
