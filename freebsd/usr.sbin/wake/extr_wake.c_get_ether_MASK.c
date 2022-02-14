
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ether_addr {int dummy; } ;


 struct ether_addr* FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,struct ether_addr*) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static int
FUNC_3(char const *VAR_0, struct ether_addr *VAR_1)
{
 struct ether_addr *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 != ((void*)0)) {
  *VAR_1 = *VAR_2;
  return (0);
 }
 if (FUNC_1(VAR_0, VAR_1)) {
  FUNC_2("no match for host %s found", VAR_0);
  return (-1);
 }
 return (0);
}
