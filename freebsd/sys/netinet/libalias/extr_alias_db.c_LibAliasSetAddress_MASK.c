
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {scalar_t__ s_addr; } ;
struct libalias {int packetAliasMode; struct in_addr aliasAddress; } ;


 int FUNC_0 (struct libalias*) ;
 int FUNC_1 (struct libalias*) ;
 int FUNC_2 (struct libalias*) ;
 int VAR_0 ;

void
FUNC_3(struct libalias *VAR_1, struct in_addr VAR_2)
{

 FUNC_1(VAR_1);
 if (VAR_1->packetAliasMode & VAR_0
     && VAR_1->aliasAddress.s_addr != VAR_2.s_addr)
  FUNC_0(VAR_1);

 VAR_1->aliasAddress = VAR_2;
 FUNC_2(VAR_1);
}
