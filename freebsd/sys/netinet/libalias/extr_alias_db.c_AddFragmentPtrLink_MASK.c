
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct libalias {int nullAddress; } ;
struct in_addr {int dummy; } ;
struct alias_link {int dummy; } ;


 struct alias_link* FUNC_0 (struct libalias*,int ,struct in_addr,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct libalias*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

struct alias_link *
FUNC_2(struct libalias *VAR_3, struct in_addr VAR_4,
    u_short VAR_5)
{

 FUNC_1(VAR_3);
 return FUNC_0(VAR_3, VAR_3->nullAddress, VAR_4, VAR_3->nullAddress,
     VAR_2, VAR_1, VAR_5,
     VAR_0);
}
