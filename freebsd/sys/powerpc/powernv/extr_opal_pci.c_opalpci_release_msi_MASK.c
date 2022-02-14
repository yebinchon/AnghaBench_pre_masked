
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opalpci_softc {scalar_t__ base_msi_irq; int * msi_vmem; } ;
typedef int device_t ;


 int VAR_0 ;
 struct opalpci_softc* FUNC_0 (int ) ;
 int FUNC_1 (int *,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, device_t VAR_2, int VAR_3, int *VAR_4)
{
 struct opalpci_softc *VAR_5;

 VAR_5 = FUNC_0(VAR_1);
 if (VAR_5->msi_vmem == ((void*)0))
  return (VAR_0);

 FUNC_1(VAR_5->msi_vmem, VAR_4[0] - VAR_5->base_msi_irq, VAR_3);
 return (0);
}
