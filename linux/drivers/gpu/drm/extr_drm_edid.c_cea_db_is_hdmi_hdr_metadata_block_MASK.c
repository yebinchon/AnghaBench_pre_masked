
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 scalar_t__ const VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__ const*) ;
 scalar_t__ FUNC_1 (scalar_t__ const*) ;

__attribute__((used)) static bool FUNC_2(const u8 *VAR_2)
{
 if (FUNC_1(VAR_2) != VAR_1)
  return 0;

 if (VAR_2[1] != VAR_0)
  return 0;

 if (FUNC_0(VAR_2) < 3)
  return 0;

 return 1;
}
