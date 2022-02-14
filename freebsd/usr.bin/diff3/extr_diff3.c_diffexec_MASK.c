
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (char const*,char**) ;
 int FUNC_4 (int*,int ) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_2, char **VAR_3, int VAR_4[])
{
 int VAR_5, VAR_6;

 switch (VAR_5 = FUNC_4(&VAR_6, VAR_0)) {
 case 0:
  FUNC_0(VAR_4[0]);
  if (FUNC_1(VAR_4[1], VAR_1) == -1)
   FUNC_2(2, "child could not duplicate descriptor");
  FUNC_0(VAR_4[1]);
  FUNC_3(VAR_2, VAR_3);
  FUNC_2(2, "could not execute diff: %s", VAR_2);
  break;
 case -1:
  FUNC_2(2, "could not fork");
  break;
 }
 FUNC_0(VAR_4[1]);
 return (VAR_6);
}
