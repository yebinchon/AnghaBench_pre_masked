
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ether_addr {int dummy; } ;


 int FUNC_0 (char const*,struct ether_addr*) ;
 int FUNC_1 (int,struct ether_addr*) ;

__attribute__((used)) static int
FUNC_2(int VAR_0, const char *VAR_1)
{
 struct ether_addr VAR_2;

 if (FUNC_0(VAR_1, &VAR_2) == -1)
  return (-1);

 return (FUNC_1(VAR_0, &VAR_2));
}
