
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libalias {int packetAliasMode; } ;
struct ip {int dummy; } ;
struct alias_data {int dummy; } ;


 scalar_t__ FUNC_0 (struct libalias*,struct ip*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct libalias *VAR_1, struct ip *VAR_2, struct alias_data *VAR_3)
{

 if (VAR_1->packetAliasMode & VAR_0 ||
     FUNC_0(VAR_1, VAR_2) == 0)
  return (0);
 return (-1);
}
