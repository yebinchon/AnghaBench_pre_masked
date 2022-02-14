
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_mtu2_device {int * mapbase; TYPE_1__* pdev; } ;
struct resource {int start; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int * FUNC_1 (int ,int ) ;
 struct resource* FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (struct resource*) ;

__attribute__((used)) static int FUNC_4(struct sh_mtu2_device *VAR_2)
{
 struct resource *VAR_3;

 VAR_3 = FUNC_2(VAR_2->pdev, VAR_1, 0);
 if (!VAR_3) {
  FUNC_0(&VAR_2->pdev->dev, "failed to get I/O memory\n");
  return -VAR_0;
 }

 VAR_2->mapbase = FUNC_1(VAR_3->start, FUNC_3(VAR_3));
 if (VAR_2->mapbase == ((void*)0))
  return -VAR_0;

 return 0;
}
