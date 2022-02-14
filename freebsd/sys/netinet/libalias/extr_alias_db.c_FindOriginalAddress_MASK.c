
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in_addr {scalar_t__ s_addr; } ;
struct libalias {int newDefaultLink; struct in_addr aliasAddress; struct in_addr targetAddress; int nullAddress; } ;
struct alias_link {struct in_addr src_addr; TYPE_1__* server; } ;
struct TYPE_2__ {struct TYPE_2__* next; struct in_addr addr; } ;


 struct alias_link* FUNC_0 (struct libalias*,int ,struct in_addr,int ,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct libalias*) ;
 int VAR_2 ;

struct in_addr
FUNC_2(struct libalias *VAR_3, struct in_addr VAR_4)
{
 struct alias_link *VAR_5;

 FUNC_1(VAR_3);
 VAR_5 = FUNC_0(VAR_3, VAR_3->nullAddress, VAR_4,
     0, 0, VAR_2, 0);
 if (VAR_5 == ((void*)0)) {
  VAR_3->newDefaultLink = 1;
  if (VAR_3->targetAddress.s_addr == VAR_0)
   return (VAR_4);
  else if (VAR_3->targetAddress.s_addr == VAR_1)
   return (VAR_3->aliasAddress.s_addr != VAR_0) ?
       VAR_3->aliasAddress : VAR_4;
  else
   return (VAR_3->targetAddress);
 } else {
  if (VAR_5->server != ((void*)0)) {
   struct in_addr VAR_6;

   VAR_6 = VAR_5->server->addr;
   VAR_5->server = VAR_5->server->next;
   return (VAR_6);
  } else if (VAR_5->src_addr.s_addr == VAR_0)
   return (VAR_3->aliasAddress.s_addr != VAR_0) ?
       VAR_3->aliasAddress : VAR_4;
  else
   return (VAR_5->src_addr);
 }
}
