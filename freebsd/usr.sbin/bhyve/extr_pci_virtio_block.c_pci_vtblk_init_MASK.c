
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
struct vmctx {int dummy; } ;
struct TYPE_13__ {int * vs_mtx; } ;
struct TYPE_11__ {int alignment_offset; scalar_t__ opt_io_size; scalar_t__ min_io_size; scalar_t__ physical_block_exp; } ;
struct TYPE_10__ {scalar_t__ sectors; scalar_t__ heads; scalar_t__ cylinders; } ;
struct TYPE_12__ {int vbc_capacity; int vbc_blk_size; scalar_t__ vbc_writeback; TYPE_3__ vbc_topology; TYPE_2__ vbc_geometry; int vbc_seg_max; scalar_t__ vbc_size_max; } ;
struct TYPE_14__ {int vq_qsize; } ;
struct pci_vtblk_softc {TYPE_5__ vbsc_vs; struct blockif_ctxt* bc; TYPE_4__ vbsc_cfg; int vbsc_ident; TYPE_6__ vbsc_vq; int vsc_mtx; struct pci_vtblk_ioreq* vbsc_ios; } ;
struct TYPE_9__ {struct pci_vtblk_ioreq* br_param; int br_callback; } ;
struct pci_vtblk_ioreq {int io_idx; struct pci_vtblk_softc* io_sc; TYPE_1__ io_req; } ;
struct pci_devinst {int pi_slot; int pi_func; } ;
struct blockif_ctxt {int dummy; } ;
typedef int off_t ;
typedef int bident ;
typedef int MD5_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (struct blockif_ctxt*) ;
 struct blockif_ctxt* FUNC_5 (char*,char*) ;
 int FUNC_6 (struct blockif_ctxt*,int*,int*) ;
 int FUNC_7 (struct blockif_ctxt*) ;
 int FUNC_8 (struct blockif_ctxt*) ;
 struct pci_vtblk_softc* FUNC_9 (int,int) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (struct pci_vtblk_softc*) ;
 int FUNC_13 (struct pci_devinst*,int ,int ) ;
 int FUNC_14 (struct pci_devinst*,int ,int ) ;
 int VAR_13 ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (char*,int,char*,int,int,...) ;
 int FUNC_19 (char*) ;
 scalar_t__ FUNC_20 (TYPE_5__*,int,int ) ;
 int FUNC_21 (TYPE_5__*,int ) ;
 int FUNC_22 (TYPE_5__*,int *,struct pci_vtblk_softc*,struct pci_devinst*,TYPE_6__*) ;
 int VAR_14 ;

__attribute__((used)) static int
FUNC_23(struct vmctx *VAR_15, struct pci_devinst *VAR_16, char *VAR_17)
{
 char VAR_18[sizeof("XX:X:X")];
 struct blockif_ctxt *VAR_19;
 MD5_CTX VAR_20;
 u_char VAR_21[16];
 struct pci_vtblk_softc *VAR_22;
 off_t VAR_23;
 int VAR_24, VAR_25, VAR_26, VAR_27;

 if (VAR_17 == ((void*)0)) {
  FUNC_16("virtio-block: backing device required\n");
  return (1);
 }




 FUNC_18(VAR_18, sizeof(VAR_18), "%d:%d", VAR_16->pi_slot, VAR_16->pi_func);
 VAR_19 = FUNC_5(VAR_17, VAR_18);
 if (VAR_19 == ((void*)0)) {
  FUNC_15("Could not open backing file");
  return (1);
 }

 VAR_23 = FUNC_8(VAR_19);
 VAR_25 = FUNC_7(VAR_19);
 FUNC_6(VAR_19, &VAR_26, &VAR_27);

 VAR_22 = FUNC_9(1, sizeof(struct pci_vtblk_softc));
 VAR_22->bc = VAR_19;
 for (VAR_24 = 0; VAR_24 < VAR_12; VAR_24++) {
  struct pci_vtblk_ioreq *VAR_28 = &VAR_22->vbsc_ios[VAR_24];
  VAR_28->io_req.br_callback = VAR_13;
  VAR_28->io_req.br_param = VAR_28;
  VAR_28->io_sc = VAR_22;
  VAR_28->io_idx = VAR_24;
 }

 FUNC_17(&VAR_22->vsc_mtx, ((void*)0));


 FUNC_22(&VAR_22->vbsc_vs, &VAR_14, VAR_22, VAR_16, &VAR_22->vbsc_vq);
 VAR_22->vbsc_vs.vs_mtx = &VAR_22->vsc_mtx;

 VAR_22->vbsc_vq.vq_qsize = VAR_12;






 FUNC_1(&VAR_20);
 FUNC_2(&VAR_20, VAR_17, FUNC_19(VAR_17));
 FUNC_0(VAR_21, &VAR_20);
 FUNC_18(VAR_22->vbsc_ident, VAR_11,
     "BHYVE-%02X%02X-%02X%02X-%02X%02X",
     VAR_21[0], VAR_21[1], VAR_21[2], VAR_21[3], VAR_21[4], VAR_21[5]);


 VAR_22->vbsc_cfg.vbc_capacity = VAR_23 / VAR_1;
 VAR_22->vbsc_cfg.vbc_size_max = 0;
 VAR_22->vbsc_cfg.vbc_seg_max = FUNC_3(VAR_12 - 2, VAR_0);
 VAR_22->vbsc_cfg.vbc_geometry.cylinders = 0;
 VAR_22->vbsc_cfg.vbc_geometry.heads = 0;
 VAR_22->vbsc_cfg.vbc_geometry.sectors = 0;
 VAR_22->vbsc_cfg.vbc_blk_size = VAR_25;
 VAR_22->vbsc_cfg.vbc_topology.physical_block_exp =
     (VAR_26 > VAR_25) ? (FUNC_11(VAR_26 / VAR_25) - 1) : 0;
 VAR_22->vbsc_cfg.vbc_topology.alignment_offset =
     (VAR_27 != 0) ? ((VAR_26 - VAR_27) / VAR_25) : 0;
 VAR_22->vbsc_cfg.vbc_topology.min_io_size = 0;
 VAR_22->vbsc_cfg.vbc_topology.opt_io_size = 0;
 VAR_22->vbsc_cfg.vbc_writeback = 0;






 FUNC_13(VAR_16, VAR_4, VAR_8);
 FUNC_13(VAR_16, VAR_7, VAR_10);
 FUNC_14(VAR_16, VAR_3, VAR_2);
 FUNC_13(VAR_16, VAR_5, VAR_9);
 FUNC_13(VAR_16, VAR_6, VAR_10);

 if (FUNC_20(&VAR_22->vbsc_vs, 1, FUNC_10())) {
  FUNC_4(VAR_22->bc);
  FUNC_12(VAR_22);
  return (1);
 }
 FUNC_21(&VAR_22->vbsc_vs, 0);
 return (0);
}
