
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_char ;
struct libalias {int packetAliasMode; } ;
struct in_addr {int dummy; } ;
struct alias_link {int dummy; } ;


 struct alias_link* FUNC_0 (struct libalias*,struct in_addr,struct in_addr,struct in_addr,int ,int ,int ,int) ;
 struct alias_link* FUNC_1 (struct libalias*,struct in_addr,struct in_addr,int ,int ,int,int) ;
 struct in_addr FUNC_2 (struct libalias*,struct in_addr) ;


 int FUNC_3 (struct libalias*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

struct alias_link *
FUNC_4(struct libalias *VAR_3, struct in_addr VAR_4,
    struct in_addr VAR_5,
    u_short VAR_6,
    u_short VAR_7,
    u_char VAR_8,
    int VAR_9)
{
 int VAR_10;
 struct alias_link *VAR_11;

 FUNC_3(VAR_3);
 switch (VAR_8) {
 case 128:
  VAR_10 = VAR_1;
  break;
 case 129:
  VAR_10 = VAR_0;
  break;
 default:
  return (((void*)0));
  break;
 }

 VAR_11 = FUNC_1(VAR_3, VAR_4, VAR_5,
     VAR_6, VAR_7,
     VAR_10, VAR_9);

 if (VAR_11 == ((void*)0) && VAR_9 && !(VAR_3->packetAliasMode & VAR_2)) {
  struct in_addr VAR_12;

  VAR_12 = FUNC_2(VAR_3, VAR_5);
  VAR_11 = FUNC_0(VAR_3, VAR_12, VAR_4, VAR_5,
      VAR_7, VAR_6, VAR_7,
      VAR_10);
 }
 return (VAR_11);
}
