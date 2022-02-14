
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libalias {int dummy; } ;
struct ip {int dummy; } ;
struct alias_link {int dummy; } ;


 int FUNC_0 (struct libalias*) ;


 int FUNC_1 (struct ip*,int) ;
 int FUNC_2 (struct alias_link*,struct ip*,int) ;

void
FUNC_3(struct libalias *VAR_0, struct alias_link *VAR_1,
    struct ip *VAR_2,
    int VAR_3,
    int VAR_4)
{

 FUNC_0(VAR_0);
 (void)VAR_0;

 switch (VAR_4) {
  case 129:
  FUNC_1(VAR_2, VAR_3);
  break;

 case 128:
  FUNC_2(VAR_1, VAR_2, VAR_3);
  break;
 }
}
