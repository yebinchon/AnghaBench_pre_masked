
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_nvme_softc {int mtx; int pending_ios; struct pci_nvme_ioreq* ioreqs_free; int iosemlock; } ;
struct TYPE_2__ {struct pci_nvme_ioreq* br_param; scalar_t__ br_resid; scalar_t__ br_offset; scalar_t__ br_iovcnt; } ;
struct pci_nvme_ioreq {scalar_t__ prev_size; scalar_t__ prev_gpaddr; TYPE_1__ io_req; struct pci_nvme_softc* sc; struct pci_nvme_ioreq* next; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct pci_nvme_ioreq *
FUNC_4(struct pci_nvme_softc *VAR_0)
{
 struct pci_nvme_ioreq *VAR_1 = ((void*)0);;

 FUNC_3(&VAR_0->iosemlock);
 FUNC_1(&VAR_0->mtx);

 VAR_1 = VAR_0->ioreqs_free;
 FUNC_0(VAR_1 != ((void*)0));

 VAR_0->ioreqs_free = VAR_1->next;

 VAR_1->next = ((void*)0);
 VAR_1->sc = VAR_0;

 VAR_0->pending_ios++;

 FUNC_2(&VAR_0->mtx);

 VAR_1->io_req.br_iovcnt = 0;
 VAR_1->io_req.br_offset = 0;
 VAR_1->io_req.br_resid = 0;
 VAR_1->io_req.br_param = VAR_1;
 VAR_1->prev_gpaddr = 0;
 VAR_1->prev_size = 0;

 return VAR_1;
}
