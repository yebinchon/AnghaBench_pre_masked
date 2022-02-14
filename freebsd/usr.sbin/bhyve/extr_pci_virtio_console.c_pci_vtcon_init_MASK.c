
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vmctx {int dummy; } ;
struct TYPE_8__ {int vsp_txq; int vsp_rxq; int vsp_enabled; int vsp_cb; struct pci_vtcon_softc* vsp_sc; } ;
struct TYPE_9__ {int * vs_mtx; } ;
struct pci_vtcon_softc {TYPE_2__ vsc_control_port; TYPE_3__ vsc_vs; TYPE_4__* vsc_queues; int vsc_mtx; TYPE_1__* vsc_config; } ;
struct pci_vtcon_config {int dummy; } ;
struct pci_devinst {int dummy; } ;
struct TYPE_10__ {int vq_notify; int vq_qsize; } ;
struct TYPE_7__ {int cols; int rows; int max_nr_ports; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 void* FUNC_0 (int,int) ;
 int VAR_12 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,char*,char*) ;
 int FUNC_3 (struct pci_devinst*,int ,int ) ;
 int FUNC_4 (struct pci_devinst*,int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_5 (struct pci_vtcon_softc*,char*,char*) ;
 int VAR_16 ;
 char* FUNC_6 (int ) ;
 char* FUNC_7 (char**,char*) ;
 scalar_t__ FUNC_8 (TYPE_3__*,int,int ) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (TYPE_3__*,int *,struct pci_vtcon_softc*,struct pci_devinst*,TYPE_4__*) ;
 int VAR_17 ;

__attribute__((used)) static int
FUNC_11(struct vmctx *VAR_18, struct pci_devinst *VAR_19, char *VAR_20)
{
 struct pci_vtcon_softc *VAR_21;
 char *VAR_22 = ((void*)0);
 char *VAR_23 = ((void*)0);
 char *VAR_24;
 int VAR_25;

 VAR_21 = FUNC_0(1, sizeof(struct pci_vtcon_softc));
 VAR_21->vsc_config = FUNC_0(1, sizeof(struct pci_vtcon_config));
 VAR_21->vsc_config->max_nr_ports = VAR_9;
 VAR_21->vsc_config->cols = 80;
 VAR_21->vsc_config->rows = 25;

 FUNC_10(&VAR_21->vsc_vs, &VAR_17, VAR_21, VAR_19, VAR_21->vsc_queues);
 VAR_21->vsc_vs.vs_mtx = &VAR_21->vsc_mtx;

 for (VAR_25 = 0; VAR_25 < VAR_10; VAR_25++) {
  VAR_21->vsc_queues[VAR_25].vq_qsize = VAR_11;
  VAR_21->vsc_queues[VAR_25].vq_notify = VAR_25 % 2 == 0
      ? VAR_14
      : VAR_15;
 }


 FUNC_3(VAR_19, VAR_2, VAR_6);
 FUNC_3(VAR_19, VAR_5, VAR_8);
 FUNC_4(VAR_19, VAR_1, VAR_0);
 FUNC_3(VAR_19, VAR_3, VAR_7);
 FUNC_3(VAR_19, VAR_4, VAR_8);

 if (FUNC_8(&VAR_21->vsc_vs, 1, FUNC_1()))
  return (1);
 FUNC_9(&VAR_21->vsc_vs, 0);


 VAR_21->vsc_control_port.vsp_sc = VAR_21;
 VAR_21->vsc_control_port.vsp_txq = 2;
 VAR_21->vsc_control_port.vsp_rxq = 3;
 VAR_21->vsc_control_port.vsp_cb = VAR_13;
 VAR_21->vsc_control_port.vsp_enabled = 1;

 while ((VAR_24 = FUNC_7(&VAR_20, ",")) != ((void*)0)) {
  VAR_22 = FUNC_7(&VAR_24, "=");
  VAR_23 = VAR_24;


  if (FUNC_5(VAR_21, VAR_22, VAR_23) < 0) {
   FUNC_2(VAR_16, "cannot create port %s: %s\n",
       VAR_22, FUNC_6(VAR_12));
   return (1);
  }
 }

 return (0);
}
