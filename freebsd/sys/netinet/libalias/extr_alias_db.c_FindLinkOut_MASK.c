
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct in_addr {scalar_t__ s_addr; } ;
struct TYPE_2__ {scalar_t__ s_addr; } ;
struct libalias {struct in_addr nullAddress; TYPE_1__ aliasAddress; } ;
struct alias_link {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct libalias*) ;
 struct alias_link* FUNC_1 (struct libalias*,struct in_addr,struct in_addr,int ,int ,int,int) ;

__attribute__((used)) static struct alias_link *
FUNC_2(struct libalias *VAR_1, struct in_addr VAR_2,
    struct in_addr VAR_3,
    u_short VAR_4,
    u_short VAR_5,
    int VAR_6,
    int VAR_7)
{
 struct alias_link *VAR_8;

 FUNC_0(VAR_1);
 VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
     VAR_6, VAR_7);

 if (VAR_8 == ((void*)0)) {






  if (VAR_1->aliasAddress.s_addr != VAR_0 &&
      VAR_2.s_addr == VAR_1->aliasAddress.s_addr) {
   VAR_8 = FUNC_1(VAR_1, VAR_1->nullAddress, VAR_3, VAR_4, VAR_5,
       VAR_6, VAR_7);
  }
 }
 return (VAR_8);
}
