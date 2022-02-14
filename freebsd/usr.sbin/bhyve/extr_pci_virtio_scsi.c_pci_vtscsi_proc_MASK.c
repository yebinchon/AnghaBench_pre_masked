
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_vtscsi_worker {scalar_t__ vsw_exiting; struct pci_vtscsi_queue* vsw_queue; } ;
struct pci_vtscsi_request {int vsr_idx; int vsr_niov_out; int vsr_iov_out; int vsr_niov_in; int vsr_iov_in; } ;
struct pci_vtscsi_queue {int vsq_mtx; int vsq_qmtx; int vsq_vq; int vsq_requests; int vsq_cv; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct pci_vtscsi_request* FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct pci_vtscsi_request*) ;
 int FUNC_5 (struct pci_vtscsi_queue*,int ,int ,int ,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static void *
FUNC_11(void *VAR_1)
{
 struct pci_vtscsi_worker *VAR_2 = (struct pci_vtscsi_worker *)VAR_1;
 struct pci_vtscsi_queue *VAR_3 = VAR_2->vsw_queue;
 struct pci_vtscsi_request *VAR_4;
 int VAR_5;

 for (;;) {
  FUNC_7(&VAR_3->vsq_mtx);

  while (FUNC_1(&VAR_3->vsq_requests)
      && !VAR_2->vsw_exiting)
   FUNC_6(&VAR_3->vsq_cv, &VAR_3->vsq_mtx);

  if (VAR_2->vsw_exiting)
   break;

  VAR_4 = FUNC_2(&VAR_3->vsq_requests);
  FUNC_3(&VAR_3->vsq_requests, VAR_0);

  FUNC_8(&VAR_3->vsq_mtx);
  VAR_5 = FUNC_5(VAR_3, VAR_4->vsr_iov_in,
      VAR_4->vsr_niov_in, VAR_4->vsr_iov_out, VAR_4->vsr_niov_out);

  FUNC_7(&VAR_3->vsq_qmtx);
  FUNC_10(VAR_3->vsq_vq, VAR_4->vsr_idx, VAR_5);
  FUNC_9(VAR_3->vsq_vq, 0);
  FUNC_8(&VAR_3->vsq_qmtx);

  FUNC_0(("virtio-scsi: request <idx=%d> completed\n",
      VAR_4->vsr_idx));
  FUNC_4(VAR_4);
 }

 FUNC_8(&VAR_3->vsq_mtx);
 return (((void*)0));
}
