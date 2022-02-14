
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct ofw_pcib_gen_softc {scalar_t__ ops_node; int ops_iinfo; TYPE_1__ ops_pcib_sc; } ;
typedef int ofw_pci_intr_t ;
typedef int device_t ;


 int FUNC_0 (int,char*) ;
 struct ofw_pcib_gen_softc* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int *,int) ;

void
FUNC_4(device_t VAR_0)
{
 struct ofw_pcib_gen_softc *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 VAR_1->ops_pcib_sc.dev = VAR_0;
 VAR_1->ops_node = FUNC_2(VAR_0);
 FUNC_0(VAR_1->ops_node != 0,
     ("ofw_pcib_gen_setup: no ofw pci parent bus!"));

 FUNC_3(VAR_1->ops_node, &VAR_1->ops_iinfo,
     sizeof(ofw_pci_intr_t));
}
