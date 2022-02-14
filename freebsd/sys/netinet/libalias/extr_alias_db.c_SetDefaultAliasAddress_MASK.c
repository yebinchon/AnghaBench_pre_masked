
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;
struct libalias {struct in_addr aliasAddress; } ;


 int FUNC_0 (struct libalias*) ;

void
FUNC_1(struct libalias *VAR_0, struct in_addr VAR_1)
{

 FUNC_0(VAR_0);
 VAR_0->aliasAddress = VAR_1;
}
