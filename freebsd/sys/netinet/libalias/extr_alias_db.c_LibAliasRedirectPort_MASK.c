
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_char ;
struct libalias {int dummy; } ;
struct in_addr {int dummy; } ;
struct alias_link {int flags; } ;


 struct alias_link* FUNC_0 (struct libalias*,struct in_addr,struct in_addr,struct in_addr,int ,int ,int ,int) ;



 int FUNC_1 (struct libalias*) ;
 int FUNC_2 (struct libalias*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,char*) ;
 int VAR_4 ;

struct alias_link *
FUNC_4(struct libalias *VAR_5, struct in_addr VAR_6, u_short VAR_7,
    struct in_addr VAR_8, u_short VAR_9,
    struct in_addr VAR_10, u_short VAR_11,
    u_char VAR_12)
{
 int VAR_13;
 struct alias_link *VAR_14;

 FUNC_1(VAR_5);
 switch (VAR_12) {
 case 128:
  VAR_13 = VAR_3;
  break;
 case 129:
  VAR_13 = VAR_2;
  break;
 case 130:
  VAR_13 = VAR_1;
  break;
 default:




  VAR_14 = ((void*)0);
  goto getout;
 }

 VAR_14 = FUNC_0(VAR_5, VAR_6, VAR_8, VAR_10,
     VAR_7, VAR_9, VAR_11,
     VAR_13);

 if (VAR_14 != ((void*)0)) {
  VAR_14->flags |= VAR_0;
 }







getout:
 FUNC_2(VAR_5);
 return (VAR_14);
}
