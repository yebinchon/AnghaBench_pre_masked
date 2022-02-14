
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ahci_port {int* err_cfis; int sact; int tfd; } ;
typedef int fis ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ahci_port*,int,int*) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct ahci_port *VAR_2, int VAR_3, uint8_t *VAR_4, uint32_t VAR_5)
{
 uint8_t VAR_6[8];
 uint8_t VAR_7;

 VAR_7 = (VAR_5 >> 8) & 0xff;
 VAR_5 &= 0x77;
 FUNC_2(VAR_6, 0, sizeof(VAR_6));
 VAR_6[0] = VAR_1;
 VAR_6[1] = (1 << 6);
 VAR_6[2] = VAR_5;
 VAR_6[3] = VAR_7;
 if (VAR_6[2] & VAR_0) {
  VAR_2->err_cfis[0] = VAR_3;
  VAR_2->err_cfis[2] = VAR_5;
  VAR_2->err_cfis[3] = VAR_7;
  FUNC_1(&VAR_2->err_cfis[4], VAR_4 + 4, 16);
 } else {
  *(uint32_t *)(VAR_6 + 4) = (1 << VAR_3);
  VAR_2->sact &= ~(1 << VAR_3);
 }
 VAR_2->tfd &= ~0x77;
 VAR_2->tfd |= VAR_5;
 FUNC_0(VAR_2, VAR_1, VAR_6);
}
