
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int sbuf ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,char*,...) ;
 int FUNC_3 (char*) ;

void
FUNC_4(const u_char *VAR_1, int VAR_2)
{
 char VAR_3, VAR_4[100];
 int VAR_5, VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6 += VAR_0) {
  FUNC_2(VAR_4, sizeof(VAR_4), "%04x:  ", VAR_6);
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   if (VAR_6 + VAR_5 < VAR_2) {
    FUNC_2(VAR_4 + FUNC_3(VAR_4),
        sizeof(VAR_4) - FUNC_3(VAR_4),
        "%02x ", VAR_1[VAR_6 + VAR_5]);
   } else {
    FUNC_2(VAR_4 + FUNC_3(VAR_4),
        sizeof(VAR_4) - FUNC_3(VAR_4), "   ");
   }
  }
  FUNC_2(VAR_4 + FUNC_3(VAR_4), sizeof(VAR_4) - FUNC_3(VAR_4), " ");
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   if (VAR_6 + VAR_5 < VAR_2) {
    VAR_3 = FUNC_0(VAR_1[VAR_6 + VAR_5]) ?
        VAR_1[VAR_6 + VAR_5] : '.';
    FUNC_2(VAR_4 + FUNC_3(VAR_4),
        sizeof(VAR_4) - FUNC_3(VAR_4), "%c", VAR_3);
   } else {
    FUNC_2(VAR_4 + FUNC_3(VAR_4),
        sizeof(VAR_4) - FUNC_3(VAR_4), " ");
   }
  }
  FUNC_1("%s\n", VAR_4);
 }
}
