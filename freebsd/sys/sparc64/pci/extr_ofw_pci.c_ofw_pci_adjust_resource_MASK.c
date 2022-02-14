
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rman {int dummy; } ;
struct resource {int dummy; } ;
struct ofw_pci_softc {struct rman sc_pci_io_rman; struct rman sc_pci_mem_rman; } ;
typedef int rman_res_t ;
typedef int device_t ;


 int VAR_0 ;



 int FUNC_0 (int ,int ,int,struct resource*,int ,int ) ;
 struct ofw_pci_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct resource*,int ,int ) ;
 scalar_t__ FUNC_3 (struct resource*,struct rman*) ;

int
FUNC_4(device_t VAR_1, device_t VAR_2, int VAR_3,
    struct resource *VAR_4, rman_res_t VAR_5, rman_res_t VAR_6)
{
 struct ofw_pci_softc *VAR_7;
 struct rman *VAR_8;

 VAR_7 = FUNC_1(VAR_1);
 switch (VAR_3) {
 case 129:
  return (FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4,
      VAR_5, VAR_6));
 case 128:
  VAR_8 = &VAR_7->sc_pci_mem_rman;
  break;
 case 130:
  VAR_8 = &VAR_7->sc_pci_io_rman;
  break;
 default:
  return (VAR_0);
 }
 if (FUNC_3(VAR_4, VAR_8) == 0)
  return (VAR_0);
 return (FUNC_2(VAR_4, VAR_5, VAR_6));
}
