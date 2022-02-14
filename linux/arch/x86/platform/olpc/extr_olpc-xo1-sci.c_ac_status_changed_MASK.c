
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply {int dummy; } ;


 int FUNC_0 (struct power_supply*) ;
 struct power_supply* FUNC_1 (char*) ;
 int FUNC_2 (struct power_supply*) ;

__attribute__((used)) static void FUNC_3(void)
{
 struct power_supply *VAR_0 = FUNC_1("olpc-ac");

 if (VAR_0) {
  FUNC_0(VAR_0);
  FUNC_2(VAR_0);
 }
}
