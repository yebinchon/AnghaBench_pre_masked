
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct fsl_edma_engine {scalar_t__ txirq; scalar_t__ errirq; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,scalar_t__,int ,int ,char*,struct fsl_edma_engine*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_2 (struct platform_device*,char*) ;

__attribute__((used)) static int
FUNC_3(struct platform_device *VAR_3, struct fsl_edma_engine *VAR_4)
{
 int VAR_5;

 VAR_4->txirq = FUNC_2(VAR_3, "edma-tx");
 if (VAR_4->txirq < 0)
  return VAR_4->txirq;

 VAR_4->errirq = FUNC_2(VAR_3, "edma-err");
 if (VAR_4->errirq < 0)
  return VAR_4->errirq;

 if (VAR_4->txirq == VAR_4->errirq) {
  VAR_5 = FUNC_1(&VAR_3->dev, VAR_4->txirq,
    VAR_1, 0, "eDMA", VAR_4);
  if (VAR_5) {
   FUNC_0(&VAR_3->dev, "Can't register eDMA IRQ.\n");
   return VAR_5;
  }
 } else {
  VAR_5 = FUNC_1(&VAR_3->dev, VAR_4->txirq,
    VAR_2, 0, "eDMA tx", VAR_4);
  if (VAR_5) {
   FUNC_0(&VAR_3->dev, "Can't register eDMA tx IRQ.\n");
   return VAR_5;
  }

  VAR_5 = FUNC_1(&VAR_3->dev, VAR_4->errirq,
    VAR_0, 0, "eDMA err", VAR_4);
  if (VAR_5) {
   FUNC_0(&VAR_3->dev, "Can't register eDMA err IRQ.\n");
   return VAR_5;
  }
 }

 return 0;
}
