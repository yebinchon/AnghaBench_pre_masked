
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (char const*) ;
 char* VAR_1 ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(int VAR_2, const char **VAR_3, const char *VAR_4)
{
 int VAR_5, VAR_6 = 0;

 for (VAR_5 = 1; VAR_5 < VAR_2; VAR_5++) {
  const char *VAR_7 = VAR_3[VAR_5];
  if (!FUNC_4(VAR_7, "--")) {
   VAR_5++;
   break;
  }
  else if (VAR_7[0] == '-')
   FUNC_5(FUNC_0(VAR_1));
  else
   break;
 }

 VAR_6 = VAR_5;

 if (VAR_2 - VAR_6 != 1)
  FUNC_5(FUNC_0(VAR_1));

 if (FUNC_1(VAR_3[VAR_6], VAR_0))
  FUNC_2(FUNC_0("invalid ref format: %s"), VAR_3[VAR_6]);
 return !FUNC_3(VAR_3[VAR_6]);
}
