
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofw_bus_iinfo {scalar_t__ opi_imapsz; } ;
struct ofw_pcib_gen_softc {struct ofw_bus_iinfo ops_iinfo; } ;
struct ofw_pci_register {int dummy; } ;
typedef int reg ;
typedef int pintr ;
typedef int ofw_pci_intr_t ;
typedef int mintr ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 struct ofw_pcib_gen_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,struct ofw_bus_iinfo*,struct ofw_pci_register*,int,int*,int,int*,int,int *) ;
 int FUNC_5 (int ,int ,int) ;

int
FUNC_6(device_t VAR_0, device_t VAR_1, int VAR_2)
{
 struct ofw_pcib_gen_softc *VAR_3;
 struct ofw_bus_iinfo *VAR_4;
 struct ofw_pci_register VAR_5;
 ofw_pci_intr_t VAR_6, VAR_7;

 VAR_3 = FUNC_2(VAR_0);
 VAR_4 = &VAR_3->ops_iinfo;
 if (VAR_4->opi_imapsz > 0) {
  VAR_6 = VAR_2;
  if (FUNC_4(FUNC_3(VAR_1), VAR_4, &VAR_5,
      sizeof(VAR_5), &VAR_6, sizeof(VAR_6), &VAR_7, sizeof(VAR_7),
      ((void*)0))) {





   return (VAR_7);
  }
 } else if (VAR_2 >= 1 && VAR_2 <= 4) {




  return (FUNC_5(VAR_0, VAR_1, VAR_2));
 }

 return (FUNC_0(FUNC_1(FUNC_1(
     VAR_0)), VAR_0, VAR_2));
}
