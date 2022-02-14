
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint128_t ;


 int FUNC_0 (int ,char*,char*,char*,char const*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(uint128_t VAR_0, uint128_t VAR_1, const char *VAR_2)
{
 char VAR_3[52], VAR_4[52];

 FUNC_1(VAR_3, VAR_0);
 FUNC_1(VAR_4, VAR_1);

 FUNC_0(FUNC_2(VAR_0, VAR_1),
     "Expected: [%s] != Actual: [%s]: %s", VAR_3, VAR_4, VAR_2);
}
