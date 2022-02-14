
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct libalias {int dummy; } ;
struct in_addr {int dummy; } ;
struct alias_link {int dummy; } ;


 struct alias_link* FUNC_0 (struct libalias*,struct in_addr,struct in_addr,int ,int ,int ,int ) ;
 int FUNC_1 (struct libalias*) ;
 int VAR_0 ;

struct alias_link *
FUNC_2(struct libalias *VAR_1, struct in_addr VAR_2,
    struct in_addr VAR_3,
    u_int16_t VAR_4)
{
 struct alias_link *VAR_5;

 FUNC_1(VAR_1);
 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3,
     0 , VAR_4,
     VAR_0, 0);


 return (VAR_5);
}
