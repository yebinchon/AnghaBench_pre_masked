
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ls_scfg_msi {int parent; TYPE_1__* pdev; int msi_domain; int irqs_num; } ;
struct TYPE_4__ {int of_node; } ;
struct TYPE_3__ {TYPE_2__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (int *,int ,int *,struct ls_scfg_msi*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_5(struct ls_scfg_msi *VAR_3)
{

 VAR_3->parent = FUNC_1(((void*)0),
       VAR_3->irqs_num,
       &VAR_2,
       VAR_3);
 if (!VAR_3->parent) {
  FUNC_0(&VAR_3->pdev->dev, "failed to create IRQ domain\n");
  return -VAR_0;
 }

 VAR_3->msi_domain = FUNC_4(
    FUNC_3(VAR_3->pdev->dev.of_node),
    &VAR_1,
    VAR_3->parent);
 if (!VAR_3->msi_domain) {
  FUNC_0(&VAR_3->pdev->dev, "failed to create MSI domain\n");
  FUNC_2(VAR_3->parent);
  return -VAR_0;
 }

 return 0;
}
