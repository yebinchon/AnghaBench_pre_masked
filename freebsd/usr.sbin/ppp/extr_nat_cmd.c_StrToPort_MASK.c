
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct servent {int s_port; } ;


 int VAR_0 ;
 struct servent* FUNC_0 (char const*,char const*) ;
 int FUNC_1 (int ,char*,char const*,char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*,char**,int) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_1, u_short *VAR_2, const char *VAR_3)
{
  struct servent *VAR_4;
  char *VAR_5;

  *VAR_2 = FUNC_3(VAR_1, &VAR_5, 10);
  if (*VAR_5 != '\0') {
    VAR_4 = FUNC_0(VAR_1, VAR_3);
    if (VAR_4 == ((void*)0)) {
      FUNC_1(VAR_0, "StrToAddr: Unknown port or service %s/%s.\n",
         VAR_1, VAR_3);
      return -1;
    }
    *VAR_2 = FUNC_2(VAR_4->s_port);
  }

  return 0;
}
