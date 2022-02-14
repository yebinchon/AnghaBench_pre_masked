
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_hsdma_device {int pc_refcnt; int pc; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (struct mtk_hsdma_device*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 struct mtk_hsdma_device* FUNC_4 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_5(struct dma_chan *VAR_0)
{
 struct mtk_hsdma_device *VAR_1 = FUNC_4(VAR_0);
 int VAR_2;






 if (!FUNC_2(&VAR_1->pc_refcnt)) {
  VAR_2 = FUNC_0(VAR_1, VAR_1->pc);
  if (VAR_2)
   return VAR_2;




  FUNC_3(&VAR_1->pc_refcnt, 1);
 } else {
  FUNC_1(&VAR_1->pc_refcnt);
 }

 return 0;
}
