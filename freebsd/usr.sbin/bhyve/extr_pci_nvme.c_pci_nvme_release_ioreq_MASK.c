
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int csts; int cc; } ;
struct pci_nvme_softc {scalar_t__ pending_ios; int iosemlock; int mtx; TYPE_1__ regs; struct pci_nvme_ioreq* ioreqs_free; } ;
struct pci_nvme_ioreq {struct pci_nvme_ioreq* next; scalar_t__ sqid; int * nvme_sq; int * sc; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct pci_nvme_softc *VAR_1, struct pci_nvme_ioreq *VAR_2)
{
 VAR_2->sc = ((void*)0);
 VAR_2->nvme_sq = ((void*)0);
 VAR_2->sqid = 0;

 FUNC_2(&VAR_1->mtx);

 VAR_2->next = VAR_1->ioreqs_free;
 VAR_1->ioreqs_free = VAR_2;
 VAR_1->pending_ios--;


 if (VAR_1->pending_ios == 0 &&
     FUNC_0(VAR_1->regs.cc) && !(FUNC_1(VAR_1->regs.csts)))
  VAR_1->regs.csts |= VAR_0;

 FUNC_3(&VAR_1->mtx);

 FUNC_4(&VAR_1->iosemlock);
}
