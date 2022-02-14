
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vmctx {int dummy; } ;
struct TYPE_5__ {int * vs_mtx; } ;
struct pci_vtscsi_softc {scalar_t__ vss_ctl_fd; TYPE_1__ vss_vs; int * vss_queues; TYPE_2__* vss_vq; int vss_mtx; int vss_iid; } ;
struct pci_devinst {int dummy; } ;
struct TYPE_6__ {int vq_notify; void* vq_qsize; } ;


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
 void* VAR_11 ;
 int FUNC_0 (char*) ;
 struct pci_vtscsi_softc* FUNC_1 (int,int) ;
 int VAR_12 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (struct pci_vtscsi_softc*) ;
 scalar_t__ FUNC_5 (char const*,int ) ;
 int FUNC_6 (struct pci_devinst*,int ,int ) ;
 int FUNC_7 (struct pci_devinst*,int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_8 (struct pci_vtscsi_softc*,int *,int) ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 (int ) ;
 char* FUNC_11 (char**,char*) ;
 int FUNC_12 (char*,int *,int) ;
 scalar_t__ FUNC_13 (TYPE_1__*,int,int ) ;
 int FUNC_14 (TYPE_1__*,int ) ;
 int FUNC_15 (TYPE_1__*,int *,struct pci_vtscsi_softc*,struct pci_devinst*,TYPE_2__*) ;
 int VAR_17 ;

__attribute__((used)) static int
FUNC_16(struct vmctx *VAR_18, struct pci_devinst *VAR_19, char *VAR_20)
{
 struct pci_vtscsi_softc *VAR_21;
 char *VAR_22, *VAR_23;
 const char *VAR_24;
 int VAR_25, VAR_26 = 0;

 VAR_21 = FUNC_1(1, sizeof(struct pci_vtscsi_softc));
 VAR_24 = "/dev/cam/ctl";
 while ((VAR_22 = FUNC_11(&VAR_20, ",")) != ((void*)0)) {
  VAR_23 = FUNC_11(&VAR_22, "=");
  if (VAR_22 == ((void*)0) && VAR_26 == 0) {
   if (VAR_23[0] != 0)
    VAR_24 = VAR_23;
  } else if (FUNC_9(VAR_23, "dev") == 0 && VAR_22 != ((void*)0)) {
   VAR_24 = VAR_22;
  } else if (FUNC_9(VAR_23, "iid") == 0 && VAR_22 != ((void*)0)) {
   VAR_21->vss_iid = FUNC_12(VAR_22, ((void*)0), 10);
  } else {
   FUNC_3(VAR_16, "Invalid option %s\n", VAR_23);
   FUNC_4(VAR_21);
   return (1);
  }
  VAR_26++;
 }

 VAR_21->vss_ctl_fd = FUNC_5(VAR_24, VAR_0);
 if (VAR_21->vss_ctl_fd < 0) {
  FUNC_0(("cannot open %s: %s\n", VAR_24, FUNC_10(VAR_12)));
  FUNC_4(VAR_21);
  return (1);
 }

 FUNC_15(&VAR_21->vss_vs, &VAR_17, VAR_21, VAR_19, VAR_21->vss_vq);
 VAR_21->vss_vs.vs_mtx = &VAR_21->vss_mtx;


 VAR_21->vss_vq[0].vq_qsize = VAR_11;
 VAR_21->vss_vq[0].vq_notify = VAR_13;


 VAR_21->vss_vq[1].vq_qsize = VAR_11;
 VAR_21->vss_vq[1].vq_notify = VAR_14;


 for (VAR_25 = 2; VAR_25 < VAR_10; VAR_25++) {
  VAR_21->vss_vq[VAR_25].vq_qsize = VAR_11;
  VAR_21->vss_vq[VAR_25].vq_notify = VAR_15;
  FUNC_8(VAR_21, &VAR_21->vss_queues[VAR_25 - 2], VAR_25 - 2);
 }


 FUNC_6(VAR_19, VAR_3, VAR_7);
 FUNC_6(VAR_19, VAR_6, VAR_9);
 FUNC_7(VAR_19, VAR_2, VAR_1);
 FUNC_6(VAR_19, VAR_4, VAR_8);
 FUNC_6(VAR_19, VAR_5, VAR_9);

 if (FUNC_13(&VAR_21->vss_vs, 1, FUNC_2()))
  return (1);
 FUNC_14(&VAR_21->vss_vs, 0);

 return (0);
}
