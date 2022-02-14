
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct pci_vtscsi_softc {int dummy; } ;
struct pci_vtscsi_ctrl_tmf {int dummy; } ;
struct pci_vtscsi_ctrl_an {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pci_vtscsi_softc*,struct pci_vtscsi_ctrl_an*) ;
 int FUNC_1 (struct pci_vtscsi_softc*,struct pci_vtscsi_ctrl_tmf*) ;

__attribute__((used)) static int
FUNC_2(struct pci_vtscsi_softc *VAR_2, void *VAR_3,
    size_t VAR_4)
{
 struct pci_vtscsi_ctrl_tmf *VAR_5;
 struct pci_vtscsi_ctrl_an *VAR_6;
 uint32_t VAR_7;

 VAR_7 = *(uint32_t *)VAR_3;

 if (VAR_7 == VAR_1) {
  VAR_5 = (struct pci_vtscsi_ctrl_tmf *)VAR_3;
  return (FUNC_1(VAR_2, VAR_5));
 }

 if (VAR_7 == VAR_0) {
  VAR_6 = (struct pci_vtscsi_ctrl_an *)VAR_3;
  return (FUNC_0(VAR_2, VAR_6));
 }

 return (0);
}
