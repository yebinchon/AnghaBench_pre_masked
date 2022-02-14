
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(uint64_t *VAR_2)
{
 int VAR_3 = 10000;

 do
  *VAR_2 = FUNC_1(VAR_1);
 while (FUNC_0(*VAR_2) && --VAR_3);

 return (VAR_3 == 0 ? VAR_0 : 0);
}
