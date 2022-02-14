
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct blockif_req {int dummy; } ;
struct ahci_port {int pending; int bctx; int iobhd; int iofhd; } ;
struct ahci_ioreq {int slot; struct blockif_req io_req; scalar_t__ more; scalar_t__ done; scalar_t__ len; int * cfis; } ;


 struct ahci_ioreq* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,struct ahci_ioreq*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,struct blockif_req*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(struct ahci_port *VAR_2, int VAR_3, uint8_t *VAR_4)
{
 struct ahci_ioreq *VAR_5;
 struct blockif_req *VAR_6;
 int VAR_7;




 VAR_5 = FUNC_0(&VAR_2->iofhd);
 FUNC_3(VAR_5 != ((void*)0));
 FUNC_1(&VAR_2->iofhd, VAR_1);
 VAR_5->cfis = VAR_4;
 VAR_5->slot = VAR_3;
 VAR_5->len = 0;
 VAR_5->done = 0;
 VAR_5->more = 0;
 VAR_6 = &VAR_5->io_req;




 VAR_2->pending |= 1 << VAR_3;




 FUNC_2(&VAR_2->iobhd, VAR_5, VAR_0);

 VAR_7 = FUNC_4(VAR_2->bctx, VAR_6);
 FUNC_3(VAR_7 == 0);
}
