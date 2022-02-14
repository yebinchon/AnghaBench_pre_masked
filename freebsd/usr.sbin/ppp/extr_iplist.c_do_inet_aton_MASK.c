
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct in_addr*) ;
 int FUNC_1 (int ,char*,int,char const*) ;
 int FUNC_2 (char*,char const*,int) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_1, const char *VAR_2, struct in_addr *VAR_3)
{
  char VAR_4[16];

  if (VAR_2 - VAR_1 > 15) {
    FUNC_1(VAR_0, "%.*s: Invalid IP address\n", (int)(VAR_2-VAR_1), VAR_1);
    return 0;
  }
  FUNC_2(VAR_4, VAR_1, VAR_2-VAR_1);
  VAR_4[VAR_2-VAR_1] = '\0';
  return FUNC_0(VAR_4, VAR_3);
}
