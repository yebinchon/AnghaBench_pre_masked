
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtaspci_softc {scalar_t__ sc_extended_config; void* ex_write_pci_config; void* ex_read_pci_config; void* write_pci_config; void* read_pci_config; int sc_pcir; } ;
typedef scalar_t__ pcell_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__*,int) ;
 struct rtaspci_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 struct rtaspci_softc *VAR_2;

 VAR_2 = FUNC_1(VAR_1);

 if (FUNC_0(FUNC_2(VAR_1), "reg", (pcell_t *)&VAR_2->sc_pcir,
     sizeof(VAR_2->sc_pcir)) == -1)
  return (VAR_0);

 VAR_2->read_pci_config = FUNC_4("read-pci-config");
 VAR_2->write_pci_config = FUNC_4("write-pci-config");
 VAR_2->ex_read_pci_config = FUNC_4("ibm,read-pci-config");
 VAR_2->ex_write_pci_config = FUNC_4("ibm,write-pci-config");

 VAR_2->sc_extended_config = 0;
 FUNC_0(FUNC_2(VAR_1), "ibm,pci-config-space-type",
     &VAR_2->sc_extended_config, sizeof(VAR_2->sc_extended_config));

 return (FUNC_3(VAR_1));
}
