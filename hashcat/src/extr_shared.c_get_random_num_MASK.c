
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;

u32 FUNC_2 (const u32 VAR_0, const u32 VAR_1)
{
  if (VAR_0 == VAR_1) return (VAR_0);

  const u32 VAR_2 = VAR_1 - VAR_0;

  if (VAR_2 == 0) return (0);







  return (((u32) FUNC_1 () % (VAR_1 - VAR_0)) + VAR_0);


}
