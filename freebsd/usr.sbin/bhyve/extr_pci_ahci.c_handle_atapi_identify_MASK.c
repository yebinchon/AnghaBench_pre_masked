
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct ahci_port {char* ident; int xfermode; int ssts; int atapi; } ;
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
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct ahci_port*,int,int *,int) ;
 int FUNC_2 (struct ahci_port*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (struct ahci_port*,int,int *,void*,int) ;

__attribute__((used)) static void
FUNC_6(struct ahci_port *VAR_14, int VAR_15, uint8_t *VAR_16)
{
 if (!VAR_14->atapi) {
  FUNC_1(VAR_14, VAR_15, VAR_16,
      (VAR_0 << 8) | VAR_11 | VAR_10);
 } else {
  uint16_t VAR_17[256];

  FUNC_4(VAR_17, 0, sizeof(VAR_17));
  VAR_17[0] = (2 << 14 | 5 << 8 | 1 << 7 | 2 << 5);
  FUNC_3((uint8_t *)(VAR_17+10), VAR_14->ident, 20);
  FUNC_3((uint8_t *)(VAR_17+23), "001", 8);
  FUNC_3((uint8_t *)(VAR_17+27), "BHYVE SATA DVD ROM", 40);
  VAR_17[49] = (1 << 9 | 1 << 8);
  VAR_17[50] = (1 << 14 | 1);
  VAR_17[53] = (1 << 2 | 1 << 1);
  VAR_17[62] = 0x3f;
  VAR_17[63] = 7;
  if (VAR_14->xfermode & VAR_13)
   VAR_17[63] |= (1 << ((VAR_14->xfermode & 7) + 8));
  VAR_17[64] = 3;
  VAR_17[65] = 120;
  VAR_17[66] = 120;
  VAR_17[67] = 120;
  VAR_17[68] = 120;
  VAR_17[76] = (VAR_1 | VAR_2 | VAR_3);
  VAR_17[77] = ((VAR_14->ssts & VAR_4) >> 3);
  VAR_17[78] = (1 << 5);
  VAR_17[80] = 0x3f0;
  VAR_17[82] = (VAR_7 | VAR_6 |
      VAR_8 | VAR_5);
  VAR_17[83] = (1 << 14);
  VAR_17[84] = (1 << 14);
  VAR_17[85] = (VAR_7 | VAR_6 |
      VAR_8 | VAR_5);
  VAR_17[87] = (1 << 14);
  VAR_17[88] = 0x7f;
  if (VAR_14->xfermode & VAR_12)
   VAR_17[88] |= (1 << ((VAR_14->xfermode & 7) + 8));
  VAR_17[222] = 0x1020;
  VAR_17[255] = 0x00a5;
  FUNC_0((uint8_t *)VAR_17, sizeof(VAR_17));
  FUNC_2(VAR_14);
  FUNC_5(VAR_14, VAR_15, VAR_16, (void *)VAR_17, sizeof(VAR_17));
  FUNC_1(VAR_14, VAR_15, VAR_16, VAR_9 | VAR_11);
 }
}
