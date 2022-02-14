
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int shutdown; int flags; scalar_t__ family; int * rmmio; int * rio_mem; int pdev; int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (int ,int *,int *,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

void FUNC_10(struct radeon_device *VAR_2)
{
 FUNC_0("radeon: finishing device.\n");
 VAR_2->shutdown = 1;

 FUNC_4(VAR_2);
 FUNC_6(VAR_2);
 if (!FUNC_3(VAR_2->pdev))
  FUNC_9(VAR_2->pdev);
 if (VAR_2->flags & VAR_1)
  FUNC_8(VAR_2->dev);
 FUNC_7(VAR_2->pdev, ((void*)0), ((void*)0), ((void*)0));
 if (VAR_2->rio_mem)
  FUNC_2(VAR_2->pdev, VAR_2->rio_mem);
 VAR_2->rio_mem = ((void*)0);
 FUNC_1(VAR_2->rmmio);
 VAR_2->rmmio = ((void*)0);
 if (VAR_2->family >= VAR_0)
  FUNC_5(VAR_2);
}
