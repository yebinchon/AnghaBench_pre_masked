
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pci_devinst {int pi_slot; int pi_func; } ;
typedef int nstr ;
typedef int MD5_CTX ;


 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,unsigned int) ;
 int FUNC_3 (char*,int,char*,int,int,char*) ;
 scalar_t__ FUNC_4 (char*) ;
 char* VAR_0 ;

void
FUNC_5(struct pci_devinst *VAR_1, uint8_t *VAR_2)
{




 MD5_CTX VAR_3;
 unsigned char VAR_4[16];
 char VAR_5[80];

 FUNC_3(VAR_5, sizeof(VAR_5), "%d-%d-%s", VAR_1->pi_slot,
     VAR_1->pi_func, VAR_0);

 FUNC_1(&VAR_3);
 FUNC_2(&VAR_3, VAR_5, (unsigned int)FUNC_4(VAR_5));
 FUNC_0(VAR_4, &VAR_3);

 VAR_2[0] = 0x00;
 VAR_2[1] = 0xa0;
 VAR_2[2] = 0x98;
 VAR_2[3] = VAR_4[0];
 VAR_2[4] = VAR_4[1];
 VAR_2[5] = VAR_4[2];
}
