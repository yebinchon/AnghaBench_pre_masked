
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char* uintmax_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct vmctx {int dummy; } ;
struct virtio_softc {int vs_flags; int vs_negotiated_caps; size_t vs_curq; int vs_status; int vs_isr; int vs_msix_cfg_idx; scalar_t__ vs_mtx; TYPE_1__* vs_queues; struct virtio_consts* vs_vc; } ;
struct virtio_consts {char* vc_name; int vc_cfgsize; int (* vc_cfgread ) (int ,int,int,int*) ;int vc_hv_caps; size_t vc_nvq; } ;
struct pci_devinst {struct virtio_softc* pi_arg; } ;
struct config_reg {int cr_size; char* cr_name; } ;
struct TYPE_2__ {int vq_pfn; int vq_qsize; int vq_msix_idx; } ;


 int FUNC_0 (struct virtio_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char const*,char*,int) ;
 scalar_t__ FUNC_3 (struct pci_devinst*,scalar_t__,int) ;
 int FUNC_4 (struct pci_devinst*) ;
 scalar_t__ FUNC_5 (struct pci_devinst*) ;
 int FUNC_6 (struct pci_devinst*) ;
 int FUNC_7 (struct pci_devinst*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_10 (int ,int,int,int*) ;
 struct config_reg* FUNC_11 (scalar_t__) ;

uint64_t
FUNC_12(struct vmctx *VAR_5, int VAR_6, struct pci_devinst *VAR_7,
     int VAR_8, uint64_t VAR_9, int VAR_10)
{
 struct virtio_softc *VAR_11 = VAR_7->pi_arg;
 struct virtio_consts *VAR_12;
 struct config_reg *VAR_13;
 uint64_t VAR_14, VAR_15;
 const char *VAR_16;
 uint32_t VAR_17;
 uint32_t VAR_18;
 int VAR_19;

 if (VAR_11->vs_flags & VAR_1) {
  if (VAR_8 == FUNC_7(VAR_7) ||
      VAR_8 == FUNC_6(VAR_7)) {
   return (FUNC_3(VAR_7, VAR_9, VAR_10));
  }
 }


 FUNC_1(VAR_8 == 0);

 if (VAR_11->vs_mtx)
  FUNC_8(VAR_11->vs_mtx);

 VAR_12 = VAR_11->vs_vc;
 VAR_16 = VAR_12->vc_name;
 VAR_18 = VAR_10 == 1 ? 0xff : VAR_10 == 2 ? 0xffff : 0xffffffff;

 if (VAR_10 != 1 && VAR_10 != 2 && VAR_10 != 4)
  goto bad;

 if (FUNC_5(VAR_7))
  VAR_14 = VAR_3;
 else
  VAR_14 = VAR_2;

 if (VAR_9 >= VAR_14) {





  VAR_17 = VAR_9 - VAR_14;
  VAR_15 = VAR_12->vc_cfgsize ? VAR_12->vc_cfgsize : 0x100000000;
  if (VAR_17 + VAR_10 > VAR_15)
   goto bad;
  VAR_19 = (*VAR_12->vc_cfgread)(FUNC_0(VAR_11), VAR_17, VAR_10, &VAR_18);
  if (!VAR_19)
   goto done;
 }

bad:
 VAR_13 = FUNC_11(VAR_9);
 if (VAR_13 == ((void*)0) || VAR_13->cr_size != VAR_10) {
  if (VAR_13 != ((void*)0)) {

   FUNC_2(VAR_4,
       "%s: read from %s: bad size %d\r\n",
       VAR_16, VAR_13->cr_name, VAR_10);
  } else {
   FUNC_2(VAR_4,
       "%s: read from bad offset/size %s/%d\r\n",
       VAR_16, (uintmax_t)VAR_9, VAR_10);
  }
  goto done;
 }

 switch (VAR_9) {
 case 135:
  VAR_18 = VAR_12->vc_hv_caps;
  break;
 case 136:
  VAR_18 = VAR_11->vs_negotiated_caps;
  break;
 case 133:
  if (VAR_11->vs_curq < VAR_12->vc_nvq)
   VAR_18 = VAR_11->vs_queues[VAR_11->vs_curq].vq_pfn;
  break;
 case 131:
  VAR_18 = VAR_11->vs_curq < VAR_12->vc_nvq ?
      VAR_11->vs_queues[VAR_11->vs_curq].vq_qsize : 0;
  break;
 case 130:
  VAR_18 = VAR_11->vs_curq;
  break;
 case 132:
  VAR_18 = 0;
  break;
 case 128:
  VAR_18 = VAR_11->vs_status;
  break;
 case 134:
  VAR_18 = VAR_11->vs_isr;
  VAR_11->vs_isr = 0;
  if (VAR_18)
   FUNC_4(VAR_7);
  break;
 case 137:
  VAR_18 = VAR_11->vs_msix_cfg_idx;
  break;
 case 129:
  VAR_18 = VAR_11->vs_curq < VAR_12->vc_nvq ?
      VAR_11->vs_queues[VAR_11->vs_curq].vq_msix_idx :
      VAR_0;
  break;
 }
done:
 if (VAR_11->vs_mtx)
  FUNC_9(VAR_11->vs_mtx);
 return (VAR_18);
}
