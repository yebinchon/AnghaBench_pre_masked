
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sc_dmat; } ;
struct opalpci_softc {TYPE_1__ ofw_sc; } ;
typedef int device_t ;
typedef int bus_dma_tag_t ;


 struct opalpci_softc* FUNC_0 (int ) ;

__attribute__((used)) static bus_dma_tag_t
FUNC_1(device_t VAR_0, device_t VAR_1)
{
 struct opalpci_softc *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 return (VAR_2->ofw_sc.sc_dmat);
}
