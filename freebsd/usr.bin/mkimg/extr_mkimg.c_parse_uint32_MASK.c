
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_1(uint32_t *VAR_3, uint32_t VAR_4, uint32_t VAR_5, const char *VAR_6)
{
 uint64_t VAR_7;

 if (FUNC_0(VAR_6, &VAR_7) == -1)
  return (VAR_2);
 if (VAR_7 > VAR_1 || VAR_7 < (uint64_t)VAR_4 || VAR_7 > (uint64_t)VAR_5)
  return (VAR_0);
 *VAR_3 = (uint32_t)VAR_7;
 return (0);
}
