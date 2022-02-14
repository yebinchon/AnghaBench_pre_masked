
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_hsdma_device {int pc; int pc_refcnt; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (struct mtk_hsdma_device*,int ) ;
 int FUNC_1 (struct dma_chan*) ;
 int FUNC_2 (int *) ;
 struct mtk_hsdma_device* FUNC_3 (struct dma_chan*) ;

__attribute__((used)) static void FUNC_4(struct dma_chan *VAR_0)
{
 struct mtk_hsdma_device *VAR_1 = FUNC_3(VAR_0);


 FUNC_1(VAR_0);


 if (!FUNC_2(&VAR_1->pc_refcnt))
  return;

 FUNC_0(VAR_1, VAR_1->pc);
}
