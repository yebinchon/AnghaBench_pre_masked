
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 int FUNC_0 (char**,char*,char const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int FUNC_4 (int ,char const*,int ) ;
 int FUNC_5 (int,char const*,int ) ;

void
FUNC_6(int VAR_2, const char *VAR_3, va_list VAR_4)
{
 char *VAR_5;

 if (VAR_0) {

  if (FUNC_0(&VAR_5, "%s\n", VAR_3) == -1) {
   FUNC_4(VAR_1, VAR_3, VAR_4);
   FUNC_2(VAR_1, "\n");
  } else {
   FUNC_4(VAR_1, VAR_5, VAR_4);
   FUNC_3(VAR_5);
  }
  FUNC_1(VAR_1);
 } else
  FUNC_5(VAR_2, VAR_3, VAR_4);
}
