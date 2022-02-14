
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lm3533_als {int irq; TYPE_1__* pdev; int lm3533; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int *,int ,int,int ,void*) ;

__attribute__((used)) static int FUNC_4(struct lm3533_als *VAR_5, void *VAR_6)
{
 u8 VAR_7 = VAR_2;
 int VAR_8;


 VAR_8 = FUNC_2(VAR_5->lm3533, VAR_3, 0, VAR_7);
 if (VAR_8) {
  FUNC_0(&VAR_5->pdev->dev, "failed to disable interrupts\n");
  return VAR_8;
 }

 VAR_8 = FUNC_3(VAR_5->irq, ((void*)0), VAR_4,
     VAR_1 | VAR_0,
     FUNC_1(&VAR_5->pdev->dev), VAR_6);
 if (VAR_8) {
  FUNC_0(&VAR_5->pdev->dev, "failed to request irq %d\n",
        VAR_5->irq);
  return VAR_8;
 }

 return 0;
}
