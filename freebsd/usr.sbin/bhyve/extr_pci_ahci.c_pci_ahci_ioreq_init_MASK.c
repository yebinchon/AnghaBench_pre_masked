
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ahci_port {int ioqsz; int iobhd; int iofhd; int atapi; struct ahci_ioreq* ioreq; int bctx; } ;
struct TYPE_2__ {struct ahci_ioreq* br_param; int br_callback; } ;
struct ahci_ioreq {TYPE_1__ io_req; struct ahci_port* io_pr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct ahci_ioreq*,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 struct ahci_ioreq* FUNC_4 (int,int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_5(struct ahci_port *VAR_3)
{
 struct ahci_ioreq *VAR_4;
 int VAR_5;

 VAR_3->ioqsz = FUNC_3(VAR_3->bctx);
 VAR_3->ioreq = FUNC_4(VAR_3->ioqsz, sizeof(struct ahci_ioreq));
 FUNC_0(&VAR_3->iofhd);




 for (VAR_5 = 0; VAR_5 < VAR_3->ioqsz; VAR_5++) {
  VAR_4 = &VAR_3->ioreq[VAR_5];
  VAR_4->io_pr = VAR_3;
  if (!VAR_3->atapi)
   VAR_4->io_req.br_callback = VAR_0;
  else
   VAR_4->io_req.br_callback = VAR_1;
  VAR_4->io_req.br_param = VAR_4;
  FUNC_1(&VAR_3->iofhd, VAR_4, VAR_2);
 }

 FUNC_2(&VAR_3->iobhd);
}
