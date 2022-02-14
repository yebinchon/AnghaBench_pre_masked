
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_char ;
struct libalias {int packetAliasMode; } ;
struct in_addr {int dummy; } ;
struct alias_link {int dummy; } ;


 int FUNC_0 (int *,struct in_addr*,struct in_addr*,int) ;
 struct alias_link* FUNC_1 (struct libalias*,struct in_addr,struct in_addr,int ) ;
 struct in_addr FUNC_2 (struct alias_link*) ;
 int FUNC_3 (struct libalias*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4(struct libalias *VAR_3, struct in_addr *VAR_4,
    struct in_addr VAR_5, u_char VAR_6, u_short *VAR_7, int VAR_8)
{





 struct alias_link *VAR_9;

 FUNC_3(VAR_3);


 if (VAR_3->packetAliasMode & VAR_2)
  return (VAR_1);

 if (!VAR_8)
  return (VAR_0);

 VAR_9 = FUNC_1(VAR_3, *VAR_4, VAR_5, VAR_6);
 if (VAR_9 != ((void*)0)) {
  struct in_addr VAR_10;

  VAR_10 = FUNC_2(VAR_9);


  FUNC_0(VAR_7,
      &VAR_10, VAR_4, 2);
  *VAR_4 = VAR_10;

  return (VAR_1);
 }
 return (VAR_0);
}
