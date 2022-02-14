
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct libalias {int nullAddress; } ;
struct in_addr {int dummy; } ;
struct alias_link {int dummy; } ;


 struct alias_link* FUNC_0 (struct libalias*,int ,struct in_addr,struct in_addr,int ,int ,int ,int ) ;
 struct alias_link* FUNC_1 (struct libalias*,struct in_addr,struct in_addr,int ,int ,int ,int ) ;
 int FUNC_2 (struct libalias*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

struct alias_link *
FUNC_3(struct libalias *VAR_3, struct in_addr VAR_4,
    struct in_addr VAR_5,
    u_short VAR_6)
{
 struct alias_link *VAR_7;

 FUNC_2(VAR_3);
 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5,
     VAR_1, VAR_6,
     VAR_0, 0);

 if (VAR_7 == ((void*)0)) {
  VAR_7 = FUNC_0(VAR_3, VAR_3->nullAddress, VAR_4, VAR_5,
      VAR_2, VAR_1, VAR_6,
      VAR_0);
 }
 return (VAR_7);
}
