
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ahci_port {int* err_cfis; int ci; int tfd; } ;
typedef int fis ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ahci_port*,int,int*) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct ahci_port *VAR_2, int VAR_3, uint8_t *VAR_4, uint32_t VAR_5)
{
 uint8_t VAR_6[20];
 uint8_t VAR_7;

 VAR_7 = (VAR_5 >> 8) & 0xff;
 FUNC_2(VAR_6, 0, sizeof(VAR_6));
 VAR_6[0] = VAR_1;
 VAR_6[1] = (1 << 6);
 VAR_6[2] = VAR_5 & 0xff;
 VAR_6[3] = VAR_7;
 VAR_6[4] = VAR_4[4];
 VAR_6[5] = VAR_4[5];
 VAR_6[6] = VAR_4[6];
 VAR_6[7] = VAR_4[7];
 VAR_6[8] = VAR_4[8];
 VAR_6[9] = VAR_4[9];
 VAR_6[10] = VAR_4[10];
 VAR_6[11] = VAR_4[11];
 VAR_6[12] = VAR_4[12];
 VAR_6[13] = VAR_4[13];
 if (VAR_6[2] & VAR_0) {
  VAR_2->err_cfis[0] = 0x80;
  VAR_2->err_cfis[2] = VAR_5 & 0xff;
  VAR_2->err_cfis[3] = VAR_7;
  FUNC_1(&VAR_2->err_cfis[4], VAR_4 + 4, 16);
 } else
  VAR_2->ci &= ~(1 << VAR_3);
 VAR_2->tfd = VAR_5;
 FUNC_0(VAR_2, VAR_1, VAR_6);
}
