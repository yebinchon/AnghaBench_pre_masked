
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct libalias {int dummy; } ;
struct in_addr {int dummy; } ;
struct alias_link {int dummy; } ;


 struct alias_link* FUNC_0 (struct libalias*,struct in_addr,struct in_addr,struct in_addr,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct libalias*) ;
 int VAR_1 ;

struct alias_link *
FUNC_2(struct libalias *VAR_2, struct in_addr VAR_3,
    struct in_addr VAR_4,
    struct in_addr VAR_5,
    u_int16_t VAR_6)
{
 struct alias_link *VAR_7;

 FUNC_1(VAR_2);
 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5,
     VAR_6, 0, VAR_0,
     VAR_1);

 return (VAR_7);
}
