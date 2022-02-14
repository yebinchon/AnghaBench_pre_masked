
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct libalias {int dummy; } ;
struct in_addr {int dummy; } ;
struct alias_link {int dummy; } ;


 struct alias_link* FUNC_0 (struct libalias*,struct in_addr,struct in_addr,struct in_addr,int ,int ,int ,int ) ;
 struct in_addr FUNC_1 (struct libalias*,struct in_addr) ;
 struct alias_link* FUNC_2 (struct libalias*,struct in_addr,struct in_addr,int ,int ,int ,int) ;
 int FUNC_3 (struct libalias*) ;
 int VAR_0 ;
 int VAR_1 ;

struct alias_link *
FUNC_4(struct libalias *VAR_2, struct in_addr VAR_3,
    struct in_addr VAR_4,
    u_char VAR_5)
{
 struct alias_link *VAR_6;

 FUNC_3(VAR_2);
 VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4,
     VAR_1, VAR_0,
     VAR_5, 1);

 if (VAR_6 == ((void*)0)) {
  struct in_addr VAR_7;

  VAR_7 = FUNC_1(VAR_2, VAR_3);
  VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_7,
      VAR_1, VAR_0, 0,
      VAR_5);
 }
 return (VAR_6);
}
