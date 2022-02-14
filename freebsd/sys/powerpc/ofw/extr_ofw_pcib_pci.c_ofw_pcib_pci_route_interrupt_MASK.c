
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofw_bus_iinfo {scalar_t__ opi_imapsz; } ;
struct ofw_pcib_softc {struct ofw_bus_iinfo ops_iinfo; } ;
struct ofw_pci_register {int phys_hi; } ;
typedef int reg ;
typedef int pintr ;
typedef int phandle_t ;
typedef int mintr ;
typedef int device_t ;
typedef int cell_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct ofw_pci_register*,int) ;
 int FUNC_2 (int ) ;
 struct ofw_pcib_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct ofw_bus_iinfo*,struct ofw_pci_register*,int,int*,int,int*,int,int *) ;
 int FUNC_6 (int ,int ,int,int*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_3, device_t VAR_4, int VAR_5)
{
 struct ofw_pcib_softc *VAR_6;
 struct ofw_bus_iinfo *VAR_7;
 struct ofw_pci_register VAR_8;
 cell_t VAR_9, VAR_10[2];
 int VAR_11;
 phandle_t VAR_12;

 VAR_6 = FUNC_3(VAR_3);
 VAR_7 = &VAR_6->ops_iinfo;
 if (VAR_7->opi_imapsz > 0) {
  VAR_9 = VAR_5;


  FUNC_1(&VAR_8, sizeof(VAR_8));
  VAR_8.phys_hi = (FUNC_7(VAR_4) << VAR_0) |
      (FUNC_9(VAR_4) << VAR_1) |
      (FUNC_8(VAR_4) << VAR_2);

  VAR_11 = FUNC_5(FUNC_4(VAR_4), VAR_7, &VAR_8,
      sizeof(VAR_8), &VAR_9, sizeof(VAR_9), VAR_10, sizeof(VAR_10),
      &VAR_12);
  if (VAR_11) {





   VAR_10[0] = FUNC_6(VAR_4, VAR_12, VAR_11,
       VAR_10);
   return (VAR_10[0]);
  }
 } else if (VAR_5 >= 1 && VAR_5 <= 4) {




  return (FUNC_10(VAR_3, VAR_4, VAR_5));
 }
 return (FUNC_0(FUNC_2(FUNC_2(
     VAR_3)), VAR_3, VAR_5));
}
