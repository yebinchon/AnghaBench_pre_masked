
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libalias {int dummy; } ;
struct ip {int dummy; } ;
struct alias_data {int maxpktsize; int lnk; } ;


 int FUNC_0 (struct libalias*,struct ip*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_3(struct libalias *VAR_2, struct ip *VAR_3, struct alias_data *VAR_4)
{

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1) {
  FUNC_0(VAR_2, VAR_3, VAR_4->lnk, VAR_4->maxpktsize);
  FUNC_1(VAR_1);
 }
 return (0);
}
