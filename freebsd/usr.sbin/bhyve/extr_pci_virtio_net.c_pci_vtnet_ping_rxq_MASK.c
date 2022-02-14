
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vqueue_info {int dummy; } ;
struct pci_vtnet_softc {int rx_mtx; int vsc_be; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vqueue_info*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_0, struct vqueue_info *VAR_1)
{
 struct pci_vtnet_softc *VAR_2 = VAR_0;




 FUNC_1(&VAR_2->rx_mtx);
 FUNC_3(VAR_1);
 FUNC_0(VAR_2->vsc_be);
 FUNC_2(&VAR_2->rx_mtx);
}
