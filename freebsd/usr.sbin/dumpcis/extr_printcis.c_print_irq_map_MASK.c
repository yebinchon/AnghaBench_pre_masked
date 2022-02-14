
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char) ;
 int FUNC_3 (int*) ;

__attribute__((used)) static u_char *
FUNC_4(u_char *VAR_4, u_char *VAR_5)
{
 int VAR_6, VAR_7;
 u_char VAR_8;

 if (VAR_5 <= VAR_4)
  goto err;
 FUNC_1("\t\tIRQ modes:");
 VAR_8 = ' ';
 if (*VAR_4 & VAR_0) {
  FUNC_1(" Level");
  VAR_8 = ',';
 }
 if (*VAR_4 & VAR_2) {
  FUNC_1("%c Pulse", VAR_8);
  VAR_8 = ',';
 }
 if (*VAR_4 & VAR_3)
  FUNC_1("%c Shared", VAR_8);
 FUNC_2('\n');


 if (*VAR_4 & VAR_1) {
  if (VAR_5 - VAR_4 < 3)
   goto err;
  VAR_6 = FUNC_3(VAR_4 + 1);
  FUNC_1("\t\tIRQs: ");
  if (*VAR_4 & 1)
   FUNC_1(" NMI");
  if (*VAR_4 & 0x2)
   FUNC_1(" IOCK");
  if (*VAR_4 & 0x4)
   FUNC_1(" BERR");
  if (*VAR_4 & 0x8)
   FUNC_1(" VEND");
  for (VAR_7 = 0; VAR_7 < 16; VAR_7++)
   if (VAR_6 & (1 << VAR_7))
    FUNC_1(" %d", VAR_7);
  FUNC_2('\n');
  VAR_4 += 3;
 } else {
  FUNC_1("\t\tIRQ level = %d\n", FUNC_0(*VAR_4));
  VAR_4++;
 }
 return VAR_4;

 err:
 FUNC_1("\tWrong length for IRQ sub-tuple\n");
 return VAR_4;
}
