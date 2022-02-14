
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct fsl_edma_engine {scalar_t__ txirq; scalar_t__ errirq; } ;


 int FUNC_0 (int *,scalar_t__,struct fsl_edma_engine*) ;

__attribute__((used)) static void FUNC_1(
  struct platform_device *VAR_0, struct fsl_edma_engine *VAR_1)
{
 if (VAR_1->txirq == VAR_1->errirq) {
  FUNC_0(&VAR_0->dev, VAR_1->txirq, VAR_1);
 } else {
  FUNC_0(&VAR_0->dev, VAR_1->txirq, VAR_1);
  FUNC_0(&VAR_0->dev, VAR_1->errirq, VAR_1);
 }
}
