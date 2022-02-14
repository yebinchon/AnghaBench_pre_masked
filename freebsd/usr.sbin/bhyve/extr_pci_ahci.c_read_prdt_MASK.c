
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ahci_prdt_entry {int dbc; int dba; } ;
struct ahci_port {int pr_sc; scalar_t__ cmd_lst; } ;
struct ahci_cmd_hdr {int prdtl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*,int *,int) ;
 int * FUNC_3 (int ,int ,int) ;

__attribute__((used)) static inline void
FUNC_4(struct ahci_port *VAR_2, int VAR_3, uint8_t *VAR_4,
  void *VAR_5, int VAR_6)
{
 struct ahci_cmd_hdr *VAR_7;
 struct ahci_prdt_entry *VAR_8;
 void *VAR_9;
 int VAR_10, VAR_11;

 VAR_7 = (struct ahci_cmd_hdr *)(VAR_2->cmd_lst + VAR_3 * VAR_0);
 VAR_11 = VAR_6;
 VAR_9 = VAR_5;
 VAR_8 = (struct ahci_prdt_entry *)(VAR_4 + 0x80);
 for (VAR_10 = 0; VAR_10 < VAR_7->prdtl && VAR_11; VAR_10++) {
  uint8_t *VAR_12;
  uint32_t VAR_13;
  int VAR_14;

  VAR_13 = (VAR_8->dbc & VAR_1) + 1;
  VAR_12 = FUNC_3(FUNC_1(VAR_2->pr_sc), VAR_8->dba, VAR_13);
  VAR_14 = FUNC_0(VAR_11, VAR_13);
  FUNC_2(VAR_9, VAR_12, VAR_14);
  VAR_11 -= VAR_14;
  VAR_9 += VAR_14;
  VAR_8++;
 }
}
