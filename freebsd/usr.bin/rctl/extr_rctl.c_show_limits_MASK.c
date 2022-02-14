
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
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char const*,scalar_t__,char*,size_t) ;
 char* FUNC_5 (char*,size_t) ;
 scalar_t__ FUNC_6 (char const*) ;
 int FUNC_7 (char*,char const*) ;

__attribute__((used)) static int
FUNC_8(const char *VAR_4, const char *VAR_5,
    int VAR_6, int VAR_7)
{
 int VAR_8;
 char *VAR_9 = ((void*)0);
 size_t VAR_10 = VAR_2 / 4;

 for (;;) {
  VAR_10 *= 4;
  VAR_9 = FUNC_5(VAR_9, VAR_10);
  if (VAR_9 == ((void*)0))
   FUNC_1(1, "realloc");
  VAR_8 = FUNC_4(VAR_4, FUNC_6(VAR_4) + 1,
      VAR_9, VAR_10);
  if (VAR_8 == 0)
   break;
  if (VAR_3 == VAR_1)
   continue;
  if (VAR_3 == VAR_0)
   FUNC_0();
  FUNC_7("failed to get limits for '%s'", VAR_5);
  FUNC_2(VAR_9);

  return (VAR_8);
 }

 FUNC_3(VAR_9, VAR_6, VAR_7);
 FUNC_2(VAR_9);

 return (VAR_8);
}
