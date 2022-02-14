
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_1(uint64_t *VAR_2, uint64_t VAR_3, uint64_t VAR_4, const char *VAR_5)
{
 uint64_t VAR_6;

 if (FUNC_0(VAR_5, &VAR_6) == -1)
  return (VAR_1);
 if (VAR_6 < VAR_3 || VAR_6 > VAR_4)
  return (VAR_0);
 *VAR_2 = VAR_6;
 return (0);
}
