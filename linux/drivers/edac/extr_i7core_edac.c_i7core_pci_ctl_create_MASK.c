
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i7core_pvt {int i7core_pci; TYPE_2__* i7core_dev; } ;
struct TYPE_4__ {TYPE_1__** pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct i7core_pvt *VAR_2)
{
 VAR_2->i7core_pci = FUNC_0(
      &VAR_2->i7core_dev->pdev[0]->dev,
      VAR_0);
 if (FUNC_2(!VAR_2->i7core_pci))
  FUNC_1(VAR_1,
         "Unable to setup PCI error report via EDAC\n");
}
