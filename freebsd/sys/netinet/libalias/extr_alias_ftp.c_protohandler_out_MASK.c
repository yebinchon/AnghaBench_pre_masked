
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libalias {int dummy; } ;
struct ip {int dummy; } ;
struct alias_data {int maxpktsize; int lnk; } ;


 int FUNC_0 (struct libalias*,struct ip*,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct libalias *VAR_0, struct ip *VAR_1, struct alias_data *VAR_2)
{

 FUNC_0(VAR_0, VAR_1, VAR_2->lnk, VAR_2->maxpktsize);
 return (0);
}
