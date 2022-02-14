
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int sbuf ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_4(u_char *VAR_1, int VAR_2)
{
 char VAR_3, VAR_4[100];
 int VAR_5, VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6 += 16) {
  FUNC_1(VAR_4, sizeof(VAR_4), "%04x:  ", VAR_6);
  for (VAR_5 = 0; VAR_5 < 16; VAR_5++)
   if (VAR_6 + VAR_5 < VAR_2)
    FUNC_1(VAR_4 + FUNC_2(VAR_4),
        sizeof(VAR_4) - FUNC_2(VAR_4),
        "%02x ", VAR_1[VAR_6 + VAR_5]);
   else
    FUNC_1(VAR_4 + FUNC_2(VAR_4),
        sizeof(VAR_4) - FUNC_2(VAR_4), "   ");
  FUNC_1(VAR_4 + FUNC_2(VAR_4), sizeof(VAR_4) - FUNC_2(VAR_4), " ");
  for (VAR_5 = 0; VAR_5 < 16; VAR_5++)
   if (VAR_6 + VAR_5 < VAR_2) {
    VAR_3 = FUNC_0(VAR_1[VAR_6 + VAR_5]) ?
        VAR_1[VAR_6 + VAR_5] : '.';
    FUNC_1(VAR_4 + FUNC_2(VAR_4),
        sizeof(VAR_4) - FUNC_2(VAR_4), "%c", VAR_3);
   } else
    FUNC_1(VAR_4 + FUNC_2(VAR_4),
        sizeof(VAR_4) - FUNC_2(VAR_4), " ");
  FUNC_1(VAR_4 + FUNC_2(VAR_4),
      sizeof(VAR_4) - FUNC_2(VAR_4), "\n");
  (void) FUNC_3(VAR_0, VAR_4, FUNC_2(VAR_4));
 }
 VAR_3 = '\n';
 FUNC_3(VAR_0, &VAR_3, 1);
}
