
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct vqueue_info {int dummy; } ;
struct virtio_net_rxhdr {int vrh_bufs; } ;
struct virtio_mrg_rxbuf_info {scalar_t__ len; int idx; } ;
struct pci_vtnet_softc {int rx_merge; int vsc_be; struct vqueue_info* vsc_queues; } ;
struct iovec {int iov_len; struct virtio_net_rxhdr* iov_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct iovec*,int) ;
 int FUNC_2 (int ,struct iovec*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct vqueue_info*,int) ;
 int FUNC_5 (struct vqueue_info*,int *,struct iovec*,int,int *) ;
 int FUNC_6 (struct vqueue_info*) ;
 int FUNC_7 (struct vqueue_info*) ;
 int FUNC_8 (struct vqueue_info*) ;
 int FUNC_9 (struct vqueue_info*,int ,scalar_t__) ;
 int FUNC_10 (struct vqueue_info*,int ,scalar_t__) ;
 int FUNC_11 (struct vqueue_info*) ;
 int FUNC_12 (struct vqueue_info*,int) ;

__attribute__((used)) static void
FUNC_13(struct pci_vtnet_softc *VAR_3)
{
 struct virtio_mrg_rxbuf_info VAR_4[VAR_0];
 struct iovec VAR_5[VAR_0 + 1];
 struct vqueue_info *VAR_6;
 uint32_t VAR_7;
 struct iovec *VAR_8;
 uint16_t VAR_9;
 uint32_t VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_6 = &VAR_3->vsc_queues[VAR_2];
 for (;;) {






  VAR_7 = 0;
  VAR_9 = 0;
  VAR_8 = VAR_5;
  VAR_11 = 0;
  do {
   int VAR_13 = FUNC_5(VAR_6, &VAR_4[VAR_11].idx, VAR_8,
       VAR_0 - VAR_9, ((void*)0));

   if (VAR_13 == 0) {




    FUNC_8(VAR_6);
    if (!FUNC_6(VAR_6)) {







     FUNC_12(VAR_6, VAR_11);
     FUNC_4(VAR_6, 1);
     FUNC_3(VAR_3->vsc_be);
     return;
    }


    FUNC_7(VAR_6);
    continue;
   }
   FUNC_0(VAR_13 >= 1 && VAR_9 + VAR_13 <= VAR_0);
   VAR_9 += VAR_13;
   if (!VAR_3->rx_merge) {
    VAR_11 = 1;
    break;
   }
   VAR_4[VAR_11].len = (uint32_t)FUNC_1(VAR_8, VAR_13);
   VAR_7 += VAR_4[VAR_11].len;
   VAR_8 += VAR_13;
   VAR_11++;
  } while (VAR_7 < VAR_1 &&
       VAR_9 < VAR_0);

  VAR_12 = FUNC_2(VAR_3->vsc_be, VAR_5, VAR_9);

  if (VAR_12 <= 0) {





   FUNC_12(VAR_6, VAR_11);

   FUNC_4(VAR_6, 0);
   return;
  }

  VAR_10 = (uint32_t)VAR_12;


  if (!VAR_3->rx_merge) {
   FUNC_9(VAR_6, VAR_4[0].idx, VAR_10);
  } else {
   struct virtio_net_rxhdr *VAR_14 = VAR_5[0].iov_base;
   uint32_t VAR_15;
   int VAR_16 = 0;

   FUNC_0(VAR_5[0].iov_len >= sizeof(*VAR_14));

   do {
    VAR_15 = VAR_4[VAR_16].len;
    if (VAR_15 > VAR_10) {
     VAR_15 = VAR_10;
    }
    FUNC_10(VAR_6, VAR_4[VAR_16].idx, VAR_15);
    VAR_10 -= VAR_15;
    VAR_16++;
    FUNC_0(VAR_16 <= VAR_11);
   } while (VAR_10 > 0);

   VAR_14->vrh_bufs = VAR_16;
   FUNC_11(VAR_6);
   FUNC_12(VAR_6, VAR_11 - VAR_16);
  }
 }

}
