
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef size_t ssize_t ;



__attribute__((used)) static void
FUNC_0(uint8_t *VAR_0, size_t VAR_1, size_t VAR_2)
{
 ssize_t VAR_3, VAR_4 = VAR_2 / 8;
 size_t VAR_5 = VAR_2 % 8;

 if (VAR_2 == 0)
  return;
 for (VAR_3 = VAR_1 - 1; VAR_3 >= 0; VAR_3--)
  VAR_0[VAR_3] = (VAR_3 >= VAR_4 ? VAR_0[VAR_3 - VAR_4] >> VAR_5 : 0) |
      (VAR_3 > VAR_4 ? VAR_0[VAR_3 - VAR_4 - 1] << (8 - VAR_5) : 0);
}
