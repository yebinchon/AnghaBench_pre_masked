
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct pci_vtscsi_softc {int vss_config; } ;


 int FUNC_0 (int *,void*,int) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, int VAR_1, int VAR_2, uint32_t *VAR_3)
{
 struct pci_vtscsi_softc *VAR_4 = VAR_0;
 void *VAR_5;

 VAR_5 = (uint8_t *)&VAR_4->vss_config + VAR_1;
 FUNC_0(VAR_3, VAR_5, VAR_2);
 return (0);
}
