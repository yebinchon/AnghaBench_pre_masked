
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int rman_res_t ;



__attribute__((used)) static int
FUNC_0(uint8_t VAR_0, rman_res_t VAR_1, rman_res_t VAR_2, rman_res_t VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = VAR_2 / VAR_1;
 VAR_5 = VAR_3 / VAR_1;
 if (VAR_4 > 7 || VAR_5 > 7)
  return (0);
 for (; VAR_4 <= VAR_5; VAR_4++)
  if ((VAR_0 & (1 << VAR_4)) == 0)
   return (0);
 return (1);
}
