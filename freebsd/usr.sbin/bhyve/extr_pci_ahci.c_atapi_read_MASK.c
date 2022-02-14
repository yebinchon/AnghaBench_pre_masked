
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct blockif_req {int br_offset; } ;
struct ahci_prdt_entry {int dummy; } ;
struct ahci_port {int pending; int bctx; int iobhd; int iofhd; scalar_t__ cmd_lst; } ;
struct ahci_ioreq {scalar_t__* cfis; int slot; int len; int done; struct blockif_req io_req; } ;
struct ahci_cmd_hdr {int prdtl; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct ahci_ioreq* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,struct ahci_ioreq*,int ) ;
 int FUNC_3 (struct ahci_port*,struct ahci_ioreq*,struct ahci_prdt_entry*,int ) ;
 int FUNC_4 (struct ahci_port*,int,scalar_t__*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__*) ;
 int FUNC_7 (scalar_t__*) ;
 int FUNC_8 (int ,struct blockif_req*) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_9(struct ahci_port *VAR_8, int VAR_9, uint8_t *VAR_10, uint32_t VAR_11)
{
 struct ahci_ioreq *VAR_12;
 struct ahci_cmd_hdr *VAR_13;
 struct ahci_prdt_entry *VAR_14;
 struct blockif_req *VAR_15;
 uint8_t *VAR_16;
 uint64_t VAR_17;
 uint32_t VAR_18;
 int VAR_19;

 VAR_16 = VAR_10 + 0x40;
 VAR_13 = (struct ahci_cmd_hdr *)(VAR_8->cmd_lst + VAR_9 * VAR_0);
 VAR_14 = (struct ahci_prdt_entry *)(VAR_10 + 0x80);

 VAR_17 = FUNC_7(VAR_16 + 2);
 if (VAR_16[0] == VAR_5)
  VAR_18 = FUNC_6(VAR_16 + 7);
 else
  VAR_18 = FUNC_7(VAR_16 + 6);
 if (VAR_18 == 0) {
  VAR_10[4] = (VAR_10[4] & ~7) | VAR_1 | VAR_2;
  FUNC_4(VAR_8, VAR_9, VAR_10, VAR_4 | VAR_3);
 }
 VAR_17 *= 2048;
 VAR_18 *= 2048;




 VAR_12 = FUNC_0(&VAR_8->iofhd);
 FUNC_5(VAR_12 != ((void*)0));
 FUNC_1(&VAR_8->iofhd, VAR_7);
 VAR_12->cfis = VAR_10;
 VAR_12->slot = VAR_9;
 VAR_12->len = VAR_18;
 VAR_12->done = VAR_11;
 VAR_15 = &VAR_12->io_req;
 VAR_15->br_offset = VAR_17 + VAR_11;
 FUNC_3(VAR_8, VAR_12, VAR_14, VAR_13->prdtl);


 VAR_8->pending |= 1 << VAR_9;


 FUNC_2(&VAR_8->iobhd, VAR_12, VAR_6);

 VAR_19 = FUNC_8(VAR_8->bctx, VAR_15);
 FUNC_5(VAR_19 == 0);
}
