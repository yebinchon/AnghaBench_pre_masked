
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skd_device {TYPE_1__* pdev; int state; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void FUNC_1(struct skd_device *VAR_1)
{
 VAR_1->state = VAR_0;
 FUNC_0(&VAR_1->pdev->dev, "Drive FAULT\n");
}
