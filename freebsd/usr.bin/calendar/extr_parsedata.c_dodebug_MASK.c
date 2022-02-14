
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 int FUNC_0 (int,double,double*,double*) ;
 char* FUNC_1 (int,double) ;
 int FUNC_2 (int,double,double*,double*) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_5(char *VAR_5)
{
 int VAR_6;

 FUNC_3("UTCOffset: %g\n", VAR_2);
 FUNC_3("eastlongitude: %d\n", VAR_0);

 if (FUNC_4(VAR_5, "moon") == 0) {
  double VAR_7[VAR_1], VAR_8[VAR_1];
  int VAR_9;

  for (VAR_6 = VAR_3; VAR_6 <= VAR_4; VAR_6++) {
   FUNC_2(VAR_6, VAR_2, VAR_7, VAR_8);
   FUNC_3("Full moon %d:\t", VAR_6);
   for (VAR_9 = 0; VAR_7[VAR_9] >= 0; VAR_9++) {
    FUNC_3("%g (%s) ", VAR_7[VAR_9],
        FUNC_1(VAR_6, VAR_7[VAR_9]));
   }
   FUNC_3("\nNew moon %d:\t", VAR_6);
   for (VAR_9 = 0; VAR_8[VAR_9] >= 0; VAR_9++) {
    FUNC_3("%g (%s) ", VAR_8[VAR_9],
        FUNC_1(VAR_6, VAR_8[VAR_9]));
   }
   FUNC_3("\n");

  }

  return;
 }

 if (FUNC_4(VAR_5, "sun") == 0) {
  double VAR_10[2], VAR_11[2];
  for (VAR_6 = VAR_3; VAR_6 <= VAR_4; VAR_6++) {
   FUNC_3("Sun in %d:\n", VAR_6);
   FUNC_0(VAR_6, VAR_2, VAR_10,
       VAR_11);
   FUNC_3("e[0] - %g (%s)\n",
       VAR_10[0],
       FUNC_1(VAR_6, VAR_10[0]));
   FUNC_3("e[1] - %g (%s)\n",
       VAR_10[1],
       FUNC_1(VAR_6, VAR_10[1]));
   FUNC_3("s[0] - %g (%s)\n",
       VAR_11[0],
       FUNC_1(VAR_6, VAR_11[0]));
   FUNC_3("s[1] - %g (%s)\n",
       VAR_11[1],
       FUNC_1(VAR_6, VAR_11[1]));
  }
  return;
 }
}
