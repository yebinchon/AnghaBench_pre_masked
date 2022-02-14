
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,int,char*,int ,...) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_1(char *VAR_6)
{

 if (VAR_2 == 0)
  return;
 if (VAR_3) {
  FUNC_0(VAR_1, "%d LOGIN FAILURE%s FROM %s",
      VAR_2, VAR_2 > 1 ? "S" : "", VAR_4);
  FUNC_0(VAR_0|VAR_1,
      "%d LOGIN FAILURE%s FROM %s, %s",
      VAR_2, VAR_2 > 1 ? "S" : "", VAR_4, VAR_6);
 } else {
  FUNC_0(VAR_1, "%d LOGIN FAILURE%s ON %s",
      VAR_2, VAR_2 > 1 ? "S" : "", VAR_5);
  FUNC_0(VAR_0|VAR_1,
      "%d LOGIN FAILURE%s ON %s, %s",
      VAR_2, VAR_2 > 1 ? "S" : "", VAR_5, VAR_6);
 }
 VAR_2 = 0;
}
