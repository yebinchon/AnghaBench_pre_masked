
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char const*,scalar_t__,char*,size_t) ;
 char* FUNC_6 (char*,size_t) ;
 scalar_t__ FUNC_7 (char const*) ;
 char* FUNC_8 (char**,char*) ;
 int FUNC_9 (char*,char const*) ;

__attribute__((used)) static int
FUNC_10(const char *VAR_4, const char *VAR_5, int VAR_6)
{
 int VAR_7;
 char *VAR_8, *VAR_9 = ((void*)0), *VAR_10;
 size_t VAR_11 = VAR_2 / 4;

 for (;;) {
  VAR_11 *= 4;
  VAR_9 = FUNC_6(VAR_9, VAR_11);
  if (VAR_9 == ((void*)0))
   FUNC_1(1, "realloc");
  VAR_7 = FUNC_5(VAR_4, FUNC_7(VAR_4) + 1,
      VAR_9, VAR_11);
  if (VAR_7 == 0)
   break;
  if (VAR_3 == VAR_1)
   continue;
  if (VAR_3 == VAR_0)
   FUNC_0();
  FUNC_9("failed to show resource consumption for '%s'",
      VAR_5);
  FUNC_2(VAR_9);

  return (VAR_7);
 }

 VAR_8 = VAR_9;
 while ((VAR_10 = FUNC_8(&VAR_8, ",")) != ((void*)0)) {
  if (VAR_10[0] == '\0')
   break;

  if (VAR_6)
   VAR_10 = FUNC_3(VAR_10);

  FUNC_4("%s\n", VAR_10);
 }

 FUNC_2(VAR_9);

 return (VAR_7);
}
