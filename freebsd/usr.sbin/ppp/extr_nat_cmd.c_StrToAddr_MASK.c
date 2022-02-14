
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;
struct hostent {scalar_t__ h_addr; } ;


 int VAR_0 ;
 struct hostent* FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,struct in_addr*) ;
 int FUNC_2 (int ,char*,char const*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_1, struct in_addr *VAR_2)
{
  struct hostent *VAR_3;

  if (FUNC_1(VAR_1, VAR_2))
    return 0;

  VAR_3 = FUNC_0(VAR_1);
  if (!VAR_3) {
    FUNC_2(VAR_0, "StrToAddr: Unknown host %s.\n", VAR_1);
    return -1;
  }
  *VAR_2 = *((struct in_addr *) VAR_3->h_addr);
  return 0;
}
