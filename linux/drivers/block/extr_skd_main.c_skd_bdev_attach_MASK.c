
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skd_device {int disk; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct device*,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, struct skd_device *VAR_1)
{
 FUNC_0(&VAR_1->pdev->dev, "add_disk\n");
 FUNC_1(VAR_0, VAR_1->disk, ((void*)0));
 return 0;
}
