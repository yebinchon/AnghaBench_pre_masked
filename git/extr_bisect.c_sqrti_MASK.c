
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0)
{
 float VAR_1, VAR_2 = VAR_0;

 if (VAR_0 == 0)
  return 0;

 do {
  float VAR_3 = (VAR_2 + (float)VAR_0 / VAR_2) / 2;
  VAR_1 = (VAR_3 > VAR_2) ? VAR_3 - VAR_2 : VAR_2 - VAR_3;
  VAR_2 = VAR_3;
 } while (VAR_1 >= 0.5);

 return (int)VAR_2;
}
