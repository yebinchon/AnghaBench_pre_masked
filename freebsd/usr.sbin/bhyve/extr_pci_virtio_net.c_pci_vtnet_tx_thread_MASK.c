
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vqueue_info {int dummy; } ;
struct pci_vtnet_softc {int tx_in_progress; int tx_mtx; int tx_cond; scalar_t__ resetting; struct vqueue_info* vsc_queues; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct pci_vtnet_softc*,struct vqueue_info*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct vqueue_info*,int) ;
 scalar_t__ FUNC_6 (struct vqueue_info*) ;
 int FUNC_7 (struct vqueue_info*) ;
 int FUNC_8 (struct vqueue_info*) ;

__attribute__((used)) static void *
FUNC_9(void *VAR_1)
{
 struct pci_vtnet_softc *VAR_2 = VAR_1;
 struct vqueue_info *VAR_3;
 int VAR_4;

 VAR_3 = &VAR_2->vsc_queues[VAR_0];





 FUNC_3(&VAR_2->tx_mtx);
 VAR_4 = FUNC_2(&VAR_2->tx_cond, &VAR_2->tx_mtx);
 FUNC_0(VAR_4 == 0);

 for (;;) {

  while (VAR_2->resetting || !FUNC_6(VAR_3)) {
   FUNC_8(VAR_3);
   if (!VAR_2->resetting && FUNC_6(VAR_3))
    break;

   VAR_2->tx_in_progress = 0;
   VAR_4 = FUNC_2(&VAR_2->tx_cond, &VAR_2->tx_mtx);
   FUNC_0(VAR_4 == 0);
  }
  FUNC_7(VAR_3);
  VAR_2->tx_in_progress = 1;
  FUNC_4(&VAR_2->tx_mtx);

  do {





   FUNC_1(VAR_2, VAR_3);
  } while (FUNC_6(VAR_3));




  FUNC_5(VAR_3, 1);

  FUNC_3(&VAR_2->tx_mtx);
 }
}
