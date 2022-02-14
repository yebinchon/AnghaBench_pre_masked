
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct in_addr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,struct in_addr*) ;
 int FUNC_1 (char*,int *,int *,char const*) ;
 int FUNC_2 (int ,char*,char const*) ;
 char* FUNC_3 (char const*,char) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_1, struct in_addr *VAR_2, u_short *VAR_3,
                 u_short *VAR_4, const char *VAR_5)
{
  char *VAR_6;
  int VAR_7;

  VAR_6 = FUNC_3(VAR_1, ':');
  if (!VAR_6) {
    FUNC_2(VAR_0, "StrToAddrAndPort: %s is missing port number.\n", VAR_1);
    return -1;
  }

  *VAR_6 = '\0';
  VAR_7 = FUNC_0(VAR_1, VAR_2);
  *VAR_6 = ':';
  if (VAR_7 != 0)
    return -1;

  return FUNC_1(VAR_6 + 1, VAR_3, VAR_4, VAR_5);
}
