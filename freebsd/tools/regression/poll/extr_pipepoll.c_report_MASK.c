
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char const*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(int VAR_1, const char *VAR_2, int VAR_3, int VAR_4, int VAR_5,
    int VAR_6)
{

 if (VAR_5 != VAR_6) {
  FUNC_2("not ok %-2d", VAR_1);
  FUNC_3(VAR_2);
  FUNC_2("poll result %d expected %d. ",
      VAR_5, VAR_6);
 } else {
  if (VAR_3 == VAR_4)
   FUNC_2("ok %-2d    ", VAR_1);
  else
   FUNC_2("not ok %-2d", VAR_1);
  FUNC_3(VAR_2);
 }
 FUNC_2("expected %s; got %s\n", FUNC_0(VAR_3),
     FUNC_0(VAR_4));
 FUNC_1(VAR_0);
}
