
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct vqueue_info {int vq_num; } ;
struct pci_vtscsi_softc {struct pci_vtscsi_queue* vss_queues; } ;
struct pci_vtscsi_request {size_t vsr_idx; int vsr_niov_in; size_t vsr_niov_out; int vsr_iov_out; int vsr_iov_in; struct pci_vtscsi_queue* vsr_queue; } ;
struct pci_vtscsi_queue {int vsq_mtx; int vsq_cv; int vsq_requests; } ;
struct iovec {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,struct pci_vtscsi_request*,int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 struct pci_vtscsi_request* FUNC_2 (int,int) ;
 int FUNC_3 (int ,struct iovec*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 size_t FUNC_7 (struct vqueue_info*,size_t*,struct iovec*,int,size_t*) ;
 scalar_t__ FUNC_8 (struct vqueue_info*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_9(void *VAR_3, struct vqueue_info *VAR_4)
{
 struct pci_vtscsi_softc *VAR_5;
 struct pci_vtscsi_queue *VAR_6;
 struct pci_vtscsi_request *VAR_7;
 struct iovec VAR_8[VAR_1];
 uint16_t VAR_9[VAR_1];
 uint16_t VAR_10, VAR_11, VAR_12;
 int VAR_13;

 VAR_5 = VAR_3;
 VAR_6 = &VAR_5->vss_queues[VAR_4->vq_num - 2];

 while (FUNC_8(VAR_4)) {
  VAR_13 = 0;
  VAR_11 = FUNC_7(VAR_4, &VAR_10, VAR_8, VAR_1, VAR_9);


  for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
   if (VAR_9[VAR_12] & VAR_0)
    break;

   VAR_13++;
  }

  VAR_7 = FUNC_2(1, sizeof(struct pci_vtscsi_request));
  VAR_7->vsr_idx = VAR_10;
  VAR_7->vsr_queue = VAR_6;
  VAR_7->vsr_niov_in = VAR_13;
  VAR_7->vsr_niov_out = VAR_11 - VAR_13;
  FUNC_3(VAR_7->vsr_iov_in, VAR_8,
      VAR_7->vsr_niov_in * sizeof(struct iovec));
  FUNC_3(VAR_7->vsr_iov_out, VAR_8 + VAR_13,
      VAR_7->vsr_niov_out * sizeof(struct iovec));

  FUNC_5(&VAR_6->vsq_mtx);
  FUNC_1(&VAR_6->vsq_requests, VAR_7, VAR_2);
  FUNC_4(&VAR_6->vsq_cv);
  FUNC_6(&VAR_6->vsq_mtx);

  FUNC_0(("virtio-scsi: request <idx=%d> enqueued\n", VAR_10));
 }
}
