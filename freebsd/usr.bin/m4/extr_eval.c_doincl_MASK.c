
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (scalar_t__,char const*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int,char*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_6)
{
 if (VAR_4 + 1 == VAR_0)
  FUNC_1(1, "too many include files.");
 if (FUNC_0(VAR_5+VAR_4+1, VAR_6) != ((void*)0)) {
  VAR_4++;
  VAR_1[VAR_4] = VAR_3 = VAR_2;
  return (1);
 } else
  return (0);
}
