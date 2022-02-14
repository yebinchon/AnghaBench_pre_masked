
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 () ;
 int VAR_8 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(int VAR_9, char **VAR_10)
{
 int VAR_11;

 for (VAR_11=1; VAR_11<VAR_9; VAR_11++) {
  if (VAR_10[VAR_11][0] != '-')
   FUNC_2();
  else if (!FUNC_1(VAR_10[VAR_11], "-help") || !FUNC_1(VAR_10[VAR_11], "-h"))
   FUNC_2();
  else if (!FUNC_1(VAR_10[VAR_11], "-verbose") || !FUNC_1(VAR_10[VAR_11], "-v"))
   VAR_8 = 1;
  else if (!FUNC_1(VAR_10[VAR_11], "-lang") || !FUNC_1(VAR_10[VAR_11], "-l"))
   if (VAR_11 + 1 == VAR_9)
    FUNC_2();
   else
    VAR_4 = VAR_10[++VAR_11];
  else if (!FUNC_1(VAR_10[VAR_11], "-default") || !FUNC_1(VAR_10[VAR_11], "-d"))
   VAR_4 = VAR_5;
  else if (!FUNC_1(VAR_10[VAR_11], "-show") || !FUNC_1(VAR_10[VAR_11], "-s"))
   VAR_7 = 1;
  else if (!FUNC_1(VAR_10[VAR_11], "-print") || !FUNC_1(VAR_10[VAR_11], "-p"))
   VAR_6 = 1;
  else if (!FUNC_1(VAR_10[VAR_11], "-restore") ||
      !FUNC_1(VAR_10[VAR_11], "-r")) {
   FUNC_3(VAR_1);
   FUNC_0(0);
  } else if (!FUNC_1(VAR_10[VAR_11], "-K"))
   VAR_0 = VAR_3;
  else if (!FUNC_1(VAR_10[VAR_11], "-V"))
   VAR_0 = VAR_2;
  else
   FUNC_2();
 }
}
