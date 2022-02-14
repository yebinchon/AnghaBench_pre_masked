
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_channel {int terminate_worker; int vc; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int *) ;
 struct sdma_channel* FUNC_1 (struct dma_chan*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct dma_chan *VAR_0)
{
 struct sdma_channel *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(&VAR_1->vc);

 FUNC_0(&VAR_1->terminate_worker);
}
