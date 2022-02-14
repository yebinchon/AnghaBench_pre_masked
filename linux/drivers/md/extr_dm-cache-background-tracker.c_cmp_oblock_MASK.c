
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dm_oblock_t ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(dm_oblock_t VAR_0, dm_oblock_t VAR_1)
{
 if (FUNC_0(VAR_0) < FUNC_0(VAR_1))
  return -1;

 if (FUNC_0(VAR_1) < FUNC_0(VAR_0))
  return 1;

 return 0;
}
