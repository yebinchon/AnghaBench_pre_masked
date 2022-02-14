
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,char*) ;
 int FUNC_6 (int *,char*,char const*,char const*) ;
 int FUNC_7 () ;
 int FUNC_8 (char const*,char const*) ;

__attribute__((used)) static int FUNC_9(const char *VAR_0, const char *VAR_1)
{
 FILE *VAR_2 = ((void*)0);
 int VAR_3;

 if (!FUNC_8(VAR_0, VAR_1))
  return FUNC_2(FUNC_0("please use two different terms"));

 if (FUNC_1(VAR_0, "bad") || FUNC_1(VAR_1, "good"))
  return -1;

 VAR_2 = FUNC_5(FUNC_7(), "w");
 if (!VAR_2)
  return FUNC_3(FUNC_0("could not open the file BISECT_TERMS"));

 VAR_3 = FUNC_6(VAR_2, "%s\n%s\n", VAR_0, VAR_1);
 VAR_3 |= FUNC_4(VAR_2);
 return (VAR_3 < 0) ? -1 : 0;
}
