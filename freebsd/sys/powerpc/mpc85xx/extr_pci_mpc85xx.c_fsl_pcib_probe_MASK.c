
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int *,char*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{

 if (FUNC_1(VAR_2) == ((void*)0) ||
     FUNC_3(FUNC_1(VAR_2), "pci") != 0)
  return (VAR_1);

 if (!(FUNC_2(VAR_2, "fsl,mpc8540-pci") ||
     FUNC_2(VAR_2, "fsl,mpc8540-pcie") ||
     FUNC_2(VAR_2, "fsl,mpc8548-pcie") ||
     FUNC_2(VAR_2, "fsl,p5020-pcie") ||
     FUNC_2(VAR_2, "fsl,qoriq-pcie-v2.2") ||
     FUNC_2(VAR_2, "fsl,qoriq-pcie")))
  return (VAR_1);

 FUNC_0(VAR_2, "Freescale Integrated PCI/PCI-E Controller");
 return (VAR_0);
}
