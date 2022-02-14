
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idma64_chan {int * pool; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int *) ;
 struct idma64_chan* FUNC_1 (struct dma_chan*) ;
 int FUNC_2 (struct dma_chan*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct dma_chan *VAR_0)
{
 struct idma64_chan *VAR_1 = FUNC_1(VAR_0);

 FUNC_3(FUNC_2(VAR_0));
 FUNC_0(VAR_1->pool);
 VAR_1->pool = ((void*)0);
}
