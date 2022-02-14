
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*) ;
 char* VAR_5 ;
 int FUNC_4 (int ,char*,int) ;

int
FUNC_5(void)
{
 char *VAR_6, *VAR_7;
 char VAR_8[16];
 char VAR_9[VAR_0];
 char *VAR_10 = VAR_5;
 int VAR_11;

 VAR_6 = VAR_5 + FUNC_3(VAR_5) - 2;
 while (*--VAR_6 != ':')
  if (VAR_6 < VAR_5) {
   FUNC_4(VAR_2, "Bad remcap entry\n", 18);
   return (0);
  }
 VAR_6++;

 if (VAR_6[0] != 't' || VAR_6[1] != 'c')
  return (1);
 FUNC_2(VAR_8, VAR_6 + 3, sizeof VAR_8);
 VAR_7 = VAR_8;
 while (*VAR_7 && *VAR_7 != ':')
  VAR_7++;
 *VAR_7 = 0;
 if (++VAR_4 > VAR_1) {
  FUNC_4(VAR_2, "Infinite tc= loop\n", 18);
  return (0);
 }
 if (FUNC_0(VAR_9, VAR_8, VAR_3) != 1) {
  return (0);
 }
 for (VAR_7 = VAR_9; *VAR_7++ != ':'; )
  ;
 VAR_11 = VAR_6 - VAR_10 + FUNC_3(VAR_7);
 if (VAR_11 > VAR_0) {
  FUNC_4(VAR_2, "Remcap entry too long\n", 23);
  VAR_7[VAR_0 - (VAR_6-VAR_10)] = 0;
 }
 FUNC_1(VAR_6, VAR_7);
 VAR_5 = VAR_10;
 return (1);
}
