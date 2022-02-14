
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct venc_device {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct venc_device *VAR_1)
{
 int VAR_2;

 FUNC_0("venc_runtime_put\n");

 VAR_2 = FUNC_2(&VAR_1->pdev->dev);
 FUNC_1(VAR_2 < 0 && VAR_2 != -VAR_0);
}
