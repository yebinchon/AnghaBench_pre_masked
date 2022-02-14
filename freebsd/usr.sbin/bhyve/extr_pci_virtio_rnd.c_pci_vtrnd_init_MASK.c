
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int v ;
typedef int uint8_t ;
struct vmctx {int dummy; } ;
struct TYPE_5__ {int * vs_mtx; } ;
struct TYPE_6__ {int vq_qsize; } ;
struct pci_vtrnd_softc {int vrsc_fd; TYPE_1__ vrsc_vs; TYPE_2__ vrsc_vq; int vrsc_mtx; } ;
struct pci_devinst {int dummy; } ;
typedef int cap_rights_t ;


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
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 struct pci_vtrnd_softc* FUNC_2 (int,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (struct pci_devinst*,int ,int ) ;
 int FUNC_10 (struct pci_devinst*,int ,int ) ;
 int FUNC_11 (int,int *,int) ;
 scalar_t__ FUNC_12 (TYPE_1__*,int,int ) ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (TYPE_1__*,int *,struct pci_vtrnd_softc*,struct pci_devinst*,TYPE_2__*) ;
 int VAR_14 ;

__attribute__((used)) static int
FUNC_15(struct vmctx *VAR_15, struct pci_devinst *VAR_16, char *VAR_17)
{
 struct pci_vtrnd_softc *VAR_18;
 int VAR_19;
 int VAR_20;
 uint8_t VAR_21;

 cap_rights_t VAR_22;





 VAR_19 = FUNC_8("/dev/random", VAR_3 | VAR_2);

 FUNC_1(VAR_19 >= 0);


 FUNC_3(&VAR_22, VAR_0);
 if (FUNC_4(VAR_19, &VAR_22) == -1)
  FUNC_6(VAR_1, "Unable to apply rights for sandbox");





 VAR_20 = FUNC_11(VAR_19, &VAR_21, sizeof(VAR_21));
 if (VAR_20 <= 0) {
  FUNC_0(("vtrnd: /dev/random not ready, read(): %d", VAR_20));
  FUNC_5(VAR_19);
  return (1);
 }

 VAR_18 = FUNC_2(1, sizeof(struct pci_vtrnd_softc));

 FUNC_14(&VAR_18->vrsc_vs, &VAR_14, VAR_18, VAR_16, &VAR_18->vrsc_vq);
 VAR_18->vrsc_vs.vs_mtx = &VAR_18->vrsc_mtx;

 VAR_18->vrsc_vq.vq_qsize = VAR_13;


 VAR_18->vrsc_fd = VAR_19;


 FUNC_9(VAR_16, VAR_6, VAR_10);
 FUNC_9(VAR_16, VAR_9, VAR_12);
 FUNC_10(VAR_16, VAR_5, VAR_4);
 FUNC_9(VAR_16, VAR_7, VAR_11);
 FUNC_9(VAR_16, VAR_8, VAR_12);

 if (FUNC_12(&VAR_18->vrsc_vs, 1, FUNC_7()))
  return (1);
 FUNC_13(&VAR_18->vrsc_vs, 0);

 return (0);
}
