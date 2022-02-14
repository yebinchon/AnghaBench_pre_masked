
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofw_pci_softc {int sc_pci_iinfo; } ;
struct ofw_pci_register {int dummy; } ;
typedef int reg ;
typedef int pintr ;
typedef int ofw_pci_intr_t ;
typedef int mintr ;
typedef int device_t ;


 int VAR_0 ;
 struct ofw_pci_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *,struct ofw_pci_register*,int,int*,int,int*,int,int *) ;

ofw_pci_intr_t
FUNC_3(device_t VAR_1, device_t VAR_2, int VAR_3)
{
 struct ofw_pci_softc *VAR_4;
 struct ofw_pci_register VAR_5;
 ofw_pci_intr_t VAR_6, VAR_7;

 VAR_4 = FUNC_0(VAR_1);
 VAR_6 = VAR_3;
 if (FUNC_2(FUNC_1(VAR_2), &VAR_4->sc_pci_iinfo,
     &VAR_5, sizeof(VAR_5), &VAR_6, sizeof(VAR_6), &VAR_7, sizeof(VAR_7),
     ((void*)0)) != 0)
  return (VAR_7);
 return (VAR_0);
}
