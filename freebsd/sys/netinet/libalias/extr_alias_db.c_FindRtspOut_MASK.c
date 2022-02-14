
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_char ;
struct libalias {int dummy; } ;
struct in_addr {int dummy; } ;
struct alias_link {int dummy; } ;


 struct alias_link* FUNC_0 (struct libalias*,struct in_addr,struct in_addr,struct in_addr,int ,int ,int ,int) ;
 struct in_addr FUNC_1 (struct libalias*,struct in_addr) ;
 struct alias_link* FUNC_2 (struct libalias*,struct in_addr,struct in_addr,int ,int ,int,int) ;


 int FUNC_3 (struct libalias*) ;
 int VAR_0 ;
 int VAR_1 ;

struct alias_link *
FUNC_4(struct libalias *VAR_2, struct in_addr VAR_3,
    struct in_addr VAR_4,
    u_short VAR_5,
    u_short VAR_6,
    u_char VAR_7)
{
 int VAR_8;
 struct alias_link *VAR_9;

 FUNC_3(VAR_2);
 switch (VAR_7) {
 case 128:
  VAR_8 = VAR_1;
  break;
 case 129:
  VAR_8 = VAR_0;
  break;
 default:
  return (((void*)0));
  break;
 }

 VAR_9 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, 0, VAR_8, 1);

 if (VAR_9 == ((void*)0)) {
  struct in_addr VAR_10;

  VAR_10 = FUNC_1(VAR_2, VAR_3);
  VAR_9 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_10,
      VAR_5, 0, VAR_6,
      VAR_8);
 }
 return (VAR_9);
}
