
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct owl_dma_vchan {TYPE_1__ vc; int pchan; int txd; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (int ,char*,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct owl_dma_vchan* FUNC_5 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_6(struct dma_chan *VAR_0)
{
 struct owl_dma_vchan *VAR_1 = FUNC_5(VAR_0);
 unsigned long VAR_2;

 if (!VAR_1->pchan && !VAR_1->txd)
  return 0;

 FUNC_1(FUNC_0(VAR_0), "vchan %p: resume\n", &VAR_1->vc);

 FUNC_3(&VAR_1->vc.lock, VAR_2);

 FUNC_2(VAR_1->pchan);

 FUNC_4(&VAR_1->vc.lock, VAR_2);

 return 0;
}
