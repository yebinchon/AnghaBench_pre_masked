
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint16_t ;
struct ahci_port {char* ident; int mult_sectors; int xfermode; int ssts; int bctx; scalar_t__ atapi; scalar_t__ cmd_lst; } ;
struct ahci_cmd_hdr {scalar_t__ prdtl; } ;
typedef int buf ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (struct ahci_port*,int,int*,int) ;
 int FUNC_2 (struct ahci_port*) ;
 int FUNC_3 (int*,char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int*,int*,int*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int*,int*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int*,int ,int) ;
 int FUNC_12 (struct ahci_port*,int,int*,void*,int) ;

__attribute__((used)) static void
FUNC_13(struct ahci_port *VAR_24, int VAR_25, uint8_t *VAR_26)
{
 struct ahci_cmd_hdr *VAR_27;

 VAR_27 = (struct ahci_cmd_hdr *)(VAR_24->cmd_lst + VAR_25 * VAR_0);
 if (VAR_24->atapi || VAR_27->prdtl == 0) {
  FUNC_1(VAR_24, VAR_25, VAR_26,
      (VAR_1 << 8) | VAR_21 | VAR_20);
 } else {
  uint16_t VAR_28[256];
  uint64_t VAR_29;
  int VAR_30, VAR_31, VAR_32, VAR_33, VAR_34;
  uint16_t VAR_35;
  uint8_t VAR_36, VAR_37;

  VAR_34 = FUNC_6(VAR_24->bctx);
  VAR_33 = FUNC_4(VAR_24->bctx);
  VAR_30 = FUNC_8(VAR_24->bctx);
  VAR_29 = FUNC_9(VAR_24->bctx) / VAR_30;
  FUNC_5(VAR_24->bctx, &VAR_35, &VAR_37, &VAR_36);
  FUNC_7(VAR_24->bctx, &VAR_31, &VAR_32);
  FUNC_11(VAR_28, 0, sizeof(VAR_28));
  VAR_28[0] = 0x0040;
  VAR_28[1] = VAR_35;
  VAR_28[3] = VAR_37;
  VAR_28[6] = VAR_36;
  FUNC_3((uint8_t *)(VAR_28+10), VAR_24->ident, 20);
  FUNC_3((uint8_t *)(VAR_28+23), "001", 8);
  FUNC_3((uint8_t *)(VAR_28+27), "BHYVE SATA DISK", 40);
  VAR_28[47] = (0x8000 | 128);
  VAR_28[48] = 0;
  VAR_28[49] = (1 << 8 | 1 << 9 | 1 << 11);
  VAR_28[50] = (1 << 14);
  VAR_28[53] = (1 << 1 | 1 << 2);
  if (VAR_24->mult_sectors)
   VAR_28[59] = (0x100 | VAR_24->mult_sectors);
  if (VAR_29 <= 0x0fffffff) {
   VAR_28[60] = VAR_29;
   VAR_28[61] = (VAR_29 >> 16);
  } else {
   VAR_28[60] = 0xffff;
   VAR_28[61] = 0x0fff;
  }
  VAR_28[63] = 0x7;
  if (VAR_24->xfermode & VAR_23)
   VAR_28[63] |= (1 << ((VAR_24->xfermode & 7) + 8));
  VAR_28[64] = 0x3;
  VAR_28[65] = 120;
  VAR_28[66] = 120;
  VAR_28[67] = 120;
  VAR_28[68] = 120;
  VAR_28[69] = 0;
  VAR_28[75] = 31;
  VAR_28[76] = (VAR_2 | VAR_3 | VAR_4 |
      VAR_12);
  VAR_28[77] = (VAR_15 |
      (VAR_24->ssts & VAR_5) >> 3);
  VAR_28[80] = 0x3f0;
  VAR_28[81] = 0x28;
  VAR_28[82] = (VAR_14 | VAR_18|
      VAR_11 | VAR_13);
  VAR_28[83] = (VAR_6 | VAR_9 |
      VAR_10 | 1 << 14);
  VAR_28[84] = (1 << 14);
  VAR_28[85] = (VAR_14 | VAR_18|
      VAR_11 | VAR_13);
  VAR_28[86] = (VAR_6 | VAR_9 |
      VAR_10 | 1 << 15);
  VAR_28[87] = (1 << 14);
  VAR_28[88] = 0x7f;
  if (VAR_24->xfermode & VAR_22)
   VAR_28[88] |= (1 << ((VAR_24->xfermode & 7) + 8));
  VAR_28[100] = VAR_29;
  VAR_28[101] = (VAR_29 >> 16);
  VAR_28[102] = (VAR_29 >> 32);
  VAR_28[103] = (VAR_29 >> 48);
  if (VAR_33 && !VAR_34) {
   VAR_28[69] |= VAR_17 | VAR_7;
   VAR_28[105] = 1;
   VAR_28[169] = VAR_8;
  }
  VAR_28[106] = 0x4000;
  VAR_28[209] = 0x4000;
  if (VAR_31 > VAR_30) {
   VAR_28[106] |= 0x2000;
   VAR_28[106] |= FUNC_10(VAR_31 / VAR_30) - 1;
   VAR_28[209] |= (VAR_32 / VAR_30);
  }
  if (VAR_30 > 512) {
   VAR_28[106] |= 0x1000;
   VAR_28[117] = VAR_30 / 2;
   VAR_28[118] = ((VAR_30 / 2) >> 16);
  }
  VAR_28[119] = (VAR_16 | 1 << 14);
  VAR_28[120] = (VAR_16 | 1 << 14);
  VAR_28[222] = 0x1020;
  VAR_28[255] = 0x00a5;
  FUNC_0((uint8_t *)VAR_28, sizeof(VAR_28));
  FUNC_2(VAR_24);
  FUNC_12(VAR_24, VAR_25, VAR_26, (void *)VAR_28, sizeof(VAR_28));
  FUNC_1(VAR_24, VAR_25, VAR_26, VAR_19 | VAR_21);
 }
}
