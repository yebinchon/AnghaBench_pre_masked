
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* pdev; } ;
struct vbox_private {TYPE_2__ ddev; int hotplug_work; } ;
struct TYPE_3__ {int irq; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct vbox_private*) ;

int FUNC_3(struct vbox_private *VAR_1)
{
 FUNC_0(&VAR_1->hotplug_work, VAR_0);
 FUNC_2(VAR_1);

 return FUNC_1(&VAR_1->ddev, VAR_1->ddev.pdev->irq);
}
