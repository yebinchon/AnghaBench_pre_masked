
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct ofw_pci_softc {scalar_t__* sc_pci_bh; struct bus_space_tag* sc_pci_iot; } ;
struct bus_space_tag {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int ,int ,int,int,struct resource*) ;
 struct ofw_pci_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct resource*) ;
 scalar_t__ FUNC_3 (struct resource*) ;
 int FUNC_4 (struct resource*,scalar_t__) ;
 int FUNC_5 (struct resource*,struct bus_space_tag*) ;
 struct bus_space_tag* FUNC_6 (struct resource*,int ) ;

int
FUNC_7(device_t VAR_4, device_t VAR_5, int VAR_6, int VAR_7,
    struct resource *VAR_8)
{
 struct ofw_pci_softc *VAR_9;
 struct bus_space_tag *VAR_10;

 VAR_9 = FUNC_1(VAR_4);
 switch (VAR_6) {
 case 129:
  return (FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7,
      VAR_8));
 case 128:
  VAR_10 = FUNC_6(VAR_8, VAR_3);
  if (VAR_10 == ((void*)0))
   return (VAR_0);
  FUNC_5(VAR_8, VAR_10);
  FUNC_4(VAR_8, VAR_9->sc_pci_bh[VAR_2] +
      FUNC_3(VAR_8));
  break;
 case 130:
  FUNC_5(VAR_8, VAR_9->sc_pci_iot);
  FUNC_4(VAR_8, VAR_9->sc_pci_bh[VAR_1] +
      FUNC_3(VAR_8));
  break;
 }
 return (FUNC_2(VAR_8));
}
