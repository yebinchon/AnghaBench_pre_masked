
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct libalias {int dummy; } ;
struct in_addr {int dummy; } ;
struct alias_link {int flags; } ;


 struct alias_link* FUNC_0 (struct libalias*,struct in_addr,struct in_addr,struct in_addr,int ,int ,int ,int ) ;
 int FUNC_1 (struct libalias*) ;
 int FUNC_2 (struct libalias*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*) ;
 int VAR_3 ;

struct alias_link *
FUNC_4(struct libalias *VAR_4, struct in_addr VAR_5,
    struct in_addr VAR_6,
    struct in_addr VAR_7,
    u_char VAR_8)
{
 struct alias_link *VAR_9;

 FUNC_1(VAR_4);
 VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7,
     VAR_2, VAR_1, 0,
     VAR_8);

 if (VAR_9 != ((void*)0)) {
  VAR_9->flags |= VAR_0;
 }







 FUNC_2(VAR_4);
 return (VAR_9);
}
