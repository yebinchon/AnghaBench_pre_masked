
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct libalias {int dummy; } ;
struct in_addr {int dummy; } ;
struct alias_link {int dummy; } ;


 int FUNC_0 (int *,struct in_addr*,struct in_addr*,int) ;
 struct alias_link* FUNC_1 (struct libalias*,struct in_addr,struct in_addr,int ) ;
 int FUNC_2 (struct alias_link*,struct in_addr*) ;
 int FUNC_3 (struct libalias*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_4(struct libalias *VAR_2, struct in_addr VAR_3, struct in_addr *VAR_4,
    u_short VAR_5, u_short *VAR_6)
{
 struct alias_link *VAR_7;

 FUNC_3(VAR_2);
 VAR_7 = FUNC_1(VAR_2, VAR_3, *VAR_4, VAR_5);
 if (VAR_7 != ((void*)0)) {
  struct in_addr VAR_8;

  FUNC_2(VAR_7, &VAR_8);
  FUNC_0(VAR_6,
      &VAR_8, VAR_4, 2);
  *VAR_4 = VAR_8;

  return (VAR_0);
 }
 return (VAR_1);
}
