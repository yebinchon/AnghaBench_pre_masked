
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,int) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (int ) ;

int FUNC_6(int VAR_3, const char **VAR_4, const char *VAR_5)
{
 int VAR_6;
 int VAR_7 = 0;
 int VAR_8 = 0;
 const char *VAR_9;

 if (VAR_3 == 2 && !FUNC_4(VAR_4[1], "-h"))
  FUNC_5(VAR_2);

 if (VAR_3 == 3 && !FUNC_4(VAR_4[1], "--branch"))
  return FUNC_0(VAR_4[2]);

 for (VAR_6 = 1; VAR_6 < VAR_3 && VAR_4[VAR_6][0] == '-'; VAR_6++) {
  if (!FUNC_4(VAR_4[VAR_6], "--normalize") || !FUNC_4(VAR_4[VAR_6], "--print"))
   VAR_7 = 1;
  else if (!FUNC_4(VAR_4[VAR_6], "--allow-onelevel"))
   VAR_8 |= VAR_0;
  else if (!FUNC_4(VAR_4[VAR_6], "--no-allow-onelevel"))
   VAR_8 &= ~VAR_0;
  else if (!FUNC_4(VAR_4[VAR_6], "--refspec-pattern"))
   VAR_8 |= VAR_1;
  else
   FUNC_5(VAR_2);
 }
 if (! (VAR_6 == VAR_3 - 1))
  FUNC_5(VAR_2);

 VAR_9 = VAR_4[VAR_6];
 if (VAR_7)
  VAR_9 = FUNC_2(VAR_9);
 if (FUNC_1(VAR_9, VAR_8))
  return 1;
 if (VAR_7)
  FUNC_3("%s\n", VAR_9);

 return 0;
}
