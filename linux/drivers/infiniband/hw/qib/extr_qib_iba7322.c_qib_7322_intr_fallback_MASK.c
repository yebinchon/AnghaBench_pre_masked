
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_devdata {int pcidev; TYPE_1__* cspec; } ;
struct TYPE_2__ {int num_msix_entries; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int,int,int ) ;
 int FUNC_1 (struct qib_devdata*) ;
 int FUNC_2 (struct qib_devdata*,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct qib_devdata*,int ) ;

__attribute__((used)) static int FUNC_5(struct qib_devdata *VAR_1)
{
 if (!VAR_1->cspec->num_msix_entries)
  return 0;

 FUNC_3(VAR_1->pcidev,
  "MSIx interrupt not detected, trying INTx interrupts\n");
 FUNC_1(VAR_1);
 if (FUNC_0(VAR_1->pcidev, 1, 1, VAR_0) < 0)
  FUNC_2(VAR_1, "Failed to enable INTx\n");
 FUNC_4(VAR_1, 0);
 return 1;
}
