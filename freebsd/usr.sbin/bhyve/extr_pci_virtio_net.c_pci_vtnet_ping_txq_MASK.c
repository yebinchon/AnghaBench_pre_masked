
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vqueue_info {int dummy; } ;
struct pci_vtnet_softc {scalar_t__ tx_in_progress; int tx_mtx; int tx_cond; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vqueue_info*) ;
 int FUNC_4 (struct vqueue_info*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_0, struct vqueue_info *VAR_1)
{
 struct pci_vtnet_softc *VAR_2 = VAR_0;




 if (!FUNC_3(VAR_1))
  return;


 FUNC_1(&VAR_2->tx_mtx);
 FUNC_4(VAR_1);
 if (VAR_2->tx_in_progress == 0)
  FUNC_0(&VAR_2->tx_cond);
 FUNC_2(&VAR_2->tx_mtx);
}
