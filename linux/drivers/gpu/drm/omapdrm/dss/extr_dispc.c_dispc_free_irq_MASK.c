
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dispc_device {int * user_data; int * user_handler; int irq; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int ,struct dispc_device*) ;

__attribute__((used)) static void FUNC_1(struct dispc_device *VAR_0, void *VAR_1)
{
 FUNC_0(&VAR_0->pdev->dev, VAR_0->irq, VAR_0);

 VAR_0->user_handler = ((void*)0);
 VAR_0->user_data = ((void*)0);
}
