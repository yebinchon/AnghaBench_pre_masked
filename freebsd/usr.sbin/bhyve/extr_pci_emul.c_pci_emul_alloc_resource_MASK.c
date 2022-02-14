
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(uint64_t *VAR_0, uint64_t VAR_1, uint64_t VAR_2,
   uint64_t *VAR_3)
{
 uint64_t VAR_4;

 FUNC_0((VAR_2 & (VAR_2 - 1)) == 0);

 VAR_4 = FUNC_1(*VAR_0, VAR_2);

 if (VAR_4 + VAR_2 <= VAR_1) {
  *VAR_3 = VAR_4;
  *VAR_0 = VAR_4 + VAR_2;
  return (0);
 } else
  return (-1);
}
