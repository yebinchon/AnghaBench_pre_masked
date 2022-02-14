
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct qib_devdata {TYPE_1__* pcidev; } ;
struct TYPE_3__ {scalar_t__ msi_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int *,struct qib_devdata*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct qib_devdata*,char*,char*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct qib_devdata *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2->pcidev, 0, VAR_1, ((void*)0), VAR_2,
         VAR_0);
 if (VAR_3)
  FUNC_2(VAR_2, "Couldn't setup %s interrupt (irq=%d): %d\n",
       VAR_2->pcidev->msi_enabled ? "MSI" : "INTx",
       FUNC_0(VAR_2->pcidev, 0), VAR_3);
}
