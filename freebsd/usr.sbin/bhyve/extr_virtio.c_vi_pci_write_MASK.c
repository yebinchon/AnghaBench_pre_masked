
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct vqueue_info {scalar_t__ vq_msix_idx; int (* vq_notify ) (int ,struct vqueue_info*) ;} ;
struct vmctx {int dummy; } ;
struct virtio_softc {int vs_flags; scalar_t__ vs_curq; scalar_t__ vs_mtx; struct vqueue_info* vs_queues; scalar_t__ vs_msix_cfg_idx; scalar_t__ vs_status; scalar_t__ vs_negotiated_caps; struct virtio_consts* vs_vc; } ;
struct virtio_consts {char* vc_name; int vc_cfgsize; int (* vc_cfgwrite ) (int ,int,int,scalar_t__) ;scalar_t__ vc_hv_caps; scalar_t__ vc_nvq; int (* vc_reset ) (int ) ;int (* vc_qnotify ) (int ,struct vqueue_info*) ;int (* vc_apply_features ) (int ,scalar_t__) ;} ;
struct pci_devinst {struct virtio_softc* pi_arg; } ;
struct config_reg {int cr_size; char* cr_name; scalar_t__ cr_ro; } ;


 int FUNC_0 (struct virtio_softc*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;







 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char const*,...) ;
 int FUNC_3 (struct pci_devinst*,scalar_t__,int,scalar_t__) ;
 scalar_t__ FUNC_4 (struct pci_devinst*) ;
 int FUNC_5 (struct pci_devinst*) ;
 int FUNC_6 (struct pci_devinst*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_9 (int ,int,int,scalar_t__) ;
 int FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (int ,struct vqueue_info*) ;
 int FUNC_12 (int ,struct vqueue_info*) ;
 int FUNC_13 (int ) ;
 struct config_reg* FUNC_14 (scalar_t__) ;
 int FUNC_15 (struct virtio_softc*,scalar_t__) ;

void
FUNC_16(struct vmctx *VAR_4, int VAR_5, struct pci_devinst *VAR_6,
      int VAR_7, uint64_t VAR_8, int VAR_9, uint64_t VAR_10)
{
 struct virtio_softc *VAR_11 = VAR_6->pi_arg;
 struct vqueue_info *VAR_12;
 struct virtio_consts *VAR_13;
 struct config_reg *VAR_14;
 uint64_t VAR_15, VAR_16;
 const char *VAR_17;
 uint32_t VAR_18;
 int VAR_19;

 if (VAR_11->vs_flags & VAR_0) {
  if (VAR_7 == FUNC_6(VAR_6) ||
      VAR_7 == FUNC_5(VAR_6)) {
   FUNC_3(VAR_6, VAR_8, VAR_9, VAR_10);
   return;
  }
 }


 FUNC_1(VAR_7 == 0);

 if (VAR_11->vs_mtx)
  FUNC_7(VAR_11->vs_mtx);

 VAR_13 = VAR_11->vs_vc;
 VAR_17 = VAR_13->vc_name;

 if (VAR_9 != 1 && VAR_9 != 2 && VAR_9 != 4)
  goto bad;

 if (FUNC_4(VAR_6))
  VAR_15 = VAR_2;
 else
  VAR_15 = VAR_1;

 if (VAR_8 >= VAR_15) {




  VAR_18 = VAR_8 - VAR_15;
  VAR_16 = VAR_13->vc_cfgsize ? VAR_13->vc_cfgsize : 0x100000000;
  if (VAR_18 + VAR_9 > VAR_16)
   goto bad;
  VAR_19 = (*VAR_13->vc_cfgwrite)(FUNC_0(VAR_11), VAR_18, VAR_9, VAR_10);
  if (!VAR_19)
   goto done;
 }

bad:
 VAR_14 = FUNC_14(VAR_8);
 if (VAR_14 == ((void*)0) || VAR_14->cr_size != VAR_9 || VAR_14->cr_ro) {
  if (VAR_14 != ((void*)0)) {

   if (VAR_14->cr_size != VAR_9)
    FUNC_2(VAR_3,
        "%s: write to %s: bad size %d\r\n",
        VAR_17, VAR_14->cr_name, VAR_9);
   if (VAR_14->cr_ro)
    FUNC_2(VAR_3,
        "%s: write to read-only reg %s\r\n",
        VAR_17, VAR_14->cr_name);
  } else {
   FUNC_2(VAR_3,
       "%s: write to bad offset/size %jd/%d\r\n",
       VAR_17, (uintmax_t)VAR_8, VAR_9);
  }
  goto done;
 }

 switch (VAR_8) {
 case 133:
  VAR_11->vs_negotiated_caps = VAR_10 & VAR_13->vc_hv_caps;
  if (VAR_13->vc_apply_features)
   (*VAR_13->vc_apply_features)(FUNC_0(VAR_11),
       VAR_11->vs_negotiated_caps);
  break;
 case 132:
  if (VAR_11->vs_curq >= VAR_13->vc_nvq)
   goto bad_qindex;
  FUNC_15(VAR_11, VAR_10);
  break;
 case 130:





  VAR_11->vs_curq = VAR_10;
  break;
 case 131:
  if (VAR_10 >= VAR_13->vc_nvq) {
   FUNC_2(VAR_3, "%s: queue %d notify out of range\r\n",
    VAR_17, (int)VAR_10);
   goto done;
  }
  VAR_12 = &VAR_11->vs_queues[VAR_10];
  if (VAR_12->vq_notify)
   (*VAR_12->vq_notify)(FUNC_0(VAR_11), VAR_12);
  else if (VAR_13->vc_qnotify)
   (*VAR_13->vc_qnotify)(FUNC_0(VAR_11), VAR_12);
  else
   FUNC_2(VAR_3,
       "%s: qnotify queue %d: missing vq/vc notify\r\n",
    VAR_17, (int)VAR_10);
  break;
 case 128:
  VAR_11->vs_status = VAR_10;
  if (VAR_10 == 0)
   (*VAR_13->vc_reset)(FUNC_0(VAR_11));
  break;
 case 134:
  VAR_11->vs_msix_cfg_idx = VAR_10;
  break;
 case 129:
  if (VAR_11->vs_curq >= VAR_13->vc_nvq)
   goto bad_qindex;
  VAR_12 = &VAR_11->vs_queues[VAR_11->vs_curq];
  VAR_12->vq_msix_idx = VAR_10;
  break;
 }
 goto done;

bad_qindex:
 FUNC_2(VAR_3,
     "%s: write config reg %s: curq %ld >= max %ld\r\n",
     VAR_17, VAR_14->cr_name, VAR_11->vs_curq, VAR_13->vc_nvq);
done:
 if (VAR_11->vs_mtx)
  FUNC_8(VAR_11->vs_mtx);
}
