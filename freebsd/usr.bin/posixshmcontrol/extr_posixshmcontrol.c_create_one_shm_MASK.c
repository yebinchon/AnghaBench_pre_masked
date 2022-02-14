
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int,long) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_2, long VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_1 | VAR_0, VAR_3);
 if (VAR_4 == -1) {
  FUNC_2("create %s", VAR_2);
  return (1);
 }
 FUNC_0(VAR_4);
 return (0);
}
