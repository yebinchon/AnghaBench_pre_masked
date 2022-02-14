
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx; } ;
struct mtk_cqdma_vdesc {struct mtk_cqdma_vdesc* parent; TYPE_1__ vd; } ;
struct mtk_cqdma_pchan {int irq; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mtk_cqdma_vdesc*) ;
 struct mtk_cqdma_vdesc* FUNC_3 (struct mtk_cqdma_pchan*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_0)
{
 struct mtk_cqdma_pchan *VAR_1 = (struct mtk_cqdma_pchan *)VAR_0;
 struct mtk_cqdma_vdesc *VAR_2 = ((void*)0);
 unsigned long VAR_3;

 FUNC_4(&VAR_1->lock, VAR_3);

 VAR_2 = FUNC_3(VAR_1);
 FUNC_5(&VAR_1->lock, VAR_3);


 if (VAR_2) {
  FUNC_0(&VAR_2->vd.tx);





  if (VAR_2->parent != VAR_2)
   FUNC_2(VAR_2);
 }


 FUNC_1(VAR_1->irq);
}
