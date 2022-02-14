
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(int VAR_0)
{
 int VAR_1, VAR_2 = 1;

 if (VAR_0 == 0)
  return (0);

 do {
  VAR_1 = VAR_2;
  VAR_2 = VAR_0 / VAR_2;
  VAR_2 += VAR_1;
  VAR_2 /= 2;
 } while ((VAR_2 - VAR_1) > 1 || (VAR_2 - VAR_1) < -1);

 return (VAR_2);
}
