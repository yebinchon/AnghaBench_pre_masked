
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int pcidev; scalar_t__ msi_lo; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int,int,int ) ;
 int FUNC_1 (struct qib_devdata*,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct qib_devdata*) ;
 int FUNC_4 (struct qib_devdata*) ;

__attribute__((used)) static int FUNC_5(struct qib_devdata *VAR_1)
{
 if (!VAR_1->msi_lo)
  return 0;

 FUNC_2(VAR_1->pcidev,
      "MSI interrupt not detected, trying INTx interrupts\n");

 FUNC_3(VAR_1);
 VAR_1->msi_lo = 0;
 if (FUNC_0(VAR_1->pcidev, 1, 1, VAR_0) < 0)
  FUNC_1(VAR_1, "Failed to enable INTx\n");
 FUNC_4(VAR_1);
 return 1;
}
