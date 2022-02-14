
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int ) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (char const*) ;

__attribute__((used)) static int
FUNC_4 (char **VAR_4)
{
  const char *VAR_5 = "/dev/tty";

  if (!FUNC_0 (VAR_1) || (VAR_5 = FUNC_2 (VAR_1)) == 0) {
    if (!FUNC_0 (VAR_3) || (VAR_5 = FUNC_2 (VAR_3)) == 0) {
      if (!FUNC_0 (VAR_2) || (VAR_5 = FUNC_2 (VAR_2)) == 0) {
        VAR_5 = "/dev/tty";
      }
    }
  }
  *VAR_4 = FUNC_3 (VAR_5);

  return FUNC_1 (VAR_5, VAR_0);
}
