
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tname ;
struct pci_vtscsi_worker {int vsw_thread; struct pci_vtscsi_queue* vsw_queue; } ;
struct pci_vtscsi_softc {int * vss_vq; } ;
struct pci_vtscsi_queue {int vsq_workers; int vsq_requests; int vsq_cv; int vsq_qmtx; int vsq_mtx; int * vsq_vq; struct pci_vtscsi_softc* vsq_sc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct pci_vtscsi_worker*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 struct pci_vtscsi_worker* FUNC_3 (int,int) ;
 int VAR_2 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *,int *,void*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (char*,int,char*,int,int) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_9(struct pci_vtscsi_softc *VAR_4,
    struct pci_vtscsi_queue *VAR_5, int VAR_6)
{
 struct pci_vtscsi_worker *VAR_7;
 char VAR_8[VAR_0 + 1];
 int VAR_9;

 VAR_5->vsq_sc = VAR_4;
 VAR_5->vsq_vq = &VAR_4->vss_vq[VAR_6 + 2];

 FUNC_6(&VAR_5->vsq_mtx, ((void*)0));
 FUNC_6(&VAR_5->vsq_qmtx, ((void*)0));
 FUNC_4(&VAR_5->vsq_cv, ((void*)0));
 FUNC_2(&VAR_5->vsq_requests);
 FUNC_0(&VAR_5->vsq_workers);

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  VAR_7 = FUNC_3(1, sizeof(struct pci_vtscsi_worker));
  VAR_7->vsw_queue = VAR_5;

  FUNC_5(&VAR_7->vsw_thread, ((void*)0), &VAR_2,
      (void *)VAR_7);

  FUNC_8(VAR_8, sizeof(VAR_8), "vtscsi:%d-%d", VAR_6, VAR_9);
  FUNC_7(VAR_7->vsw_thread, VAR_8);
  FUNC_1(&VAR_5->vsq_workers, VAR_7, VAR_3);
 }

 return (0);
}
