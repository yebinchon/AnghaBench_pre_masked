
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psycho_softc {int sc_half; } ;
typedef int ofw_pci_intr_t ;
typedef int device_t ;
typedef scalar_t__ bus_addr_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct psycho_softc*,scalar_t__) ;
 struct psycho_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int,int,int ,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_1, device_t VAR_2, int VAR_3)
{
 struct psycho_softc *VAR_4;
 bus_addr_t VAR_5;
 ofw_pci_intr_t VAR_6;

 VAR_6 = FUNC_5(VAR_1, VAR_2, VAR_3);
 if (FUNC_1(VAR_6))
  return (VAR_6);







 if (VAR_3 > 4)
  return (VAR_3);
 VAR_4 = FUNC_3(VAR_1);
 VAR_5 = VAR_0 +
     8 * (FUNC_7(VAR_2) - 1 + 3 * VAR_4->sc_half);
 VAR_6 = FUNC_0(FUNC_2(VAR_4, VAR_5)) + VAR_3 - 1;
 FUNC_4(VAR_1,
     "guessing interrupt %d for device %d.%d pin %d\n",
     (int)VAR_6, FUNC_7(VAR_2), FUNC_6(VAR_2), VAR_3);
 return (VAR_6);
}
