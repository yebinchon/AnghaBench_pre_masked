
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efa_irq {int affinity_hint_mask; int vector; int data; int name; int handler; } ;
struct efa_dev {TYPE_1__* pdev; struct efa_irq admin_irq; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ,int *,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,int *) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct efa_dev *VAR_1)
{
 struct efa_irq *VAR_2;
 int VAR_3;

 VAR_2 = &VAR_1->admin_irq;
 VAR_3 = FUNC_3(VAR_2->vector, VAR_2->handler, 0, VAR_2->name,
     VAR_2->data);
 if (VAR_3) {
  FUNC_1(&VAR_1->pdev->dev, "Failed to request admin irq (%d)\n",
   VAR_3);
  return VAR_3;
 }

 FUNC_0(&VAR_1->pdev->dev, "Set affinity hint of mgmnt irq to %*pbl (irq vector: %d)\n",
  VAR_0, &VAR_2->affinity_hint_mask, VAR_2->vector);
 FUNC_2(VAR_2->vector, &VAR_2->affinity_hint_mask);

 return 0;
}
