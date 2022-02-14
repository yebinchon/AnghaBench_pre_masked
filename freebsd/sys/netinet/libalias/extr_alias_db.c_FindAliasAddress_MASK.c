
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {scalar_t__ s_addr; } ;
struct libalias {struct in_addr aliasAddress; int nullAddress; } ;
struct alias_link {struct in_addr alias_addr; } ;


 struct alias_link* FUNC_0 (struct libalias*,struct in_addr,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct libalias*) ;
 int VAR_1 ;

struct in_addr
FUNC_2(struct libalias *VAR_2, struct in_addr VAR_3)
{
 struct alias_link *VAR_4;

 FUNC_1(VAR_2);
 VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_2->nullAddress,
     0, 0, VAR_1, 0);
 if (VAR_4 == ((void*)0)) {
  return (VAR_2->aliasAddress.s_addr != VAR_0) ?
      VAR_2->aliasAddress : VAR_3;
 } else {
  if (VAR_4->alias_addr.s_addr == VAR_0)
   return (VAR_2->aliasAddress.s_addr != VAR_0) ?
       VAR_2->aliasAddress : VAR_3;
  else
   return (VAR_4->alias_addr);
 }
}
