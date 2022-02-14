
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libalias {int nullAddress; } ;
struct in_addr {int dummy; } ;
struct alias_link {int flags; } ;


 struct alias_link* FUNC_0 (struct libalias*,struct in_addr,int ,struct in_addr,int ,int ,int ,int ) ;
 int FUNC_1 (struct libalias*) ;
 int FUNC_2 (struct libalias*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,char*) ;
 int VAR_2 ;

struct alias_link *
FUNC_4(struct libalias *VAR_3, struct in_addr VAR_4,
    struct in_addr VAR_5)
{
 struct alias_link *VAR_6;

 FUNC_1(VAR_3);
 VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_3->nullAddress, VAR_5,
     0, 0, 0,
     VAR_0);

 if (VAR_6 != ((void*)0)) {
  VAR_6->flags |= VAR_1;
 }







 FUNC_2(VAR_3);
 return (VAR_6);
}
