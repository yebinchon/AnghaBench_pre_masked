
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,char*,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(char *VAR_5)
{
 char VAR_6[300];
 char *VAR_7 = VAR_6;
 int VAR_8 = 30, VAR_9 = 0;

 if (FUNC_6(VAR_5, "\"\"") == 0)
  return (1);
 *VAR_7 = 0;






 VAR_9 = FUNC_6(VAR_5, "ON LINE") == 0;
 if (VAR_9)
  VAR_8 = FUNC_2(FUNC_7(VAR_0));
 FUNC_5(VAR_2, VAR_4);
 if (FUNC_4(VAR_3))
  return (0);
 FUNC_0(VAR_8);
 while (FUNC_1(VAR_5, VAR_6) && VAR_7 < VAR_6 + sizeof (VAR_6) - 1) {
  if (VAR_9 && FUNC_1("FAILED CALL", VAR_6) == 0)
   return (0);
  if (FUNC_3(VAR_1, VAR_7, 1) < 0) {
   FUNC_0(0);
   return (0);
  }
  if (*VAR_7 &= 0177)
   VAR_7++;
  *VAR_7 = '\0';
 }
 FUNC_0(0);
 return (1);
}
