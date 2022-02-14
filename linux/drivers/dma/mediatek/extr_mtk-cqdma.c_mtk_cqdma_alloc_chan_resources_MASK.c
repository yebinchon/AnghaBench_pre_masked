
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct mtk_cqdma_vchan {struct mtk_cqdma_pchan* pc; } ;
struct mtk_cqdma_pchan {int lock; int refcnt; } ;
struct mtk_cqdma_device {size_t dma_channels; struct mtk_cqdma_pchan** pc; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct mtk_cqdma_pchan*) ;
 int FUNC_1 (struct mtk_cqdma_pchan*,int ,int ) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct mtk_cqdma_device* FUNC_7 (struct dma_chan*) ;
 struct mtk_cqdma_vchan* FUNC_8 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_9(struct dma_chan *VAR_4)
{
 struct mtk_cqdma_device *VAR_5 = FUNC_7(VAR_4);
 struct mtk_cqdma_vchan *VAR_6 = FUNC_8(VAR_4);
 struct mtk_cqdma_pchan *VAR_7 = ((void*)0);
 u32 VAR_8, VAR_9 = VAR_3, VAR_10;
 unsigned long VAR_11;


 for (VAR_8 = 0; VAR_8 < VAR_5->dma_channels; ++VAR_8) {
  VAR_10 = FUNC_3(&VAR_5->pc[VAR_8]->refcnt);
  if (VAR_10 < VAR_9) {
   VAR_7 = VAR_5->pc[VAR_8];
   VAR_9 = VAR_10;
  }
 }

 if (!VAR_7)
  return -VAR_0;

 FUNC_5(&VAR_7->lock, VAR_11);

 if (!FUNC_3(&VAR_7->refcnt)) {

  FUNC_0(VAR_7);


  FUNC_1(VAR_7, VAR_1, VAR_2);





  FUNC_4(&VAR_7->refcnt, 1);
 } else {
  FUNC_2(&VAR_7->refcnt);
 }

 FUNC_6(&VAR_7->lock, VAR_11);

 VAR_6->pc = VAR_7;

 return 0;
}
