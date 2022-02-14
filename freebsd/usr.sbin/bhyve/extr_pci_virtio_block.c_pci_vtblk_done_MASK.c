
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_vtblk_softc {int vsc_mtx; int vbsc_vq; } ;
struct pci_vtblk_ioreq {int io_idx; int * io_status; struct pci_vtblk_softc* io_sc; } ;
struct blockif_req {struct pci_vtblk_ioreq* br_param; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct blockif_req *VAR_5, int VAR_6)
{
 struct pci_vtblk_ioreq *VAR_7 = VAR_5->br_param;
 struct pci_vtblk_softc *VAR_8 = VAR_7->io_sc;


 if (VAR_6 == VAR_1 || VAR_6 == VAR_0)
  *VAR_7->io_status = VAR_4;
 else if (VAR_6 != 0)
  *VAR_7->io_status = VAR_2;
 else
  *VAR_7->io_status = VAR_3;





 FUNC_0(&VAR_8->vsc_mtx);
 FUNC_3(&VAR_8->vbsc_vq, VAR_7->io_idx, 1);
 FUNC_2(&VAR_8->vbsc_vq, 0);
 FUNC_1(&VAR_8->vsc_mtx);
}
