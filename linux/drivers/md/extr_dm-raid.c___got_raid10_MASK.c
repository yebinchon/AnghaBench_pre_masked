
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raid_type {int level; int algorithm; } ;






 int FUNC_0 (int const) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const) ;

__attribute__((used)) static bool FUNC_3(struct raid_type *VAR_0, const int VAR_1)
{
 if (VAR_0->level == 10) {
  switch (VAR_0->algorithm) {
  case 131:
  case 129:
   return FUNC_1(VAR_1);
  case 128:
   return FUNC_2(VAR_1);
  case 130:
   return FUNC_0(VAR_1);
  default:
   break;
  }
 }

 return 0;
}
