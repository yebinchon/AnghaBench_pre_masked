
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;


 int FUNC_0 (char*) ;

void FUNC_1(unsigned long VAR_0)
{
 char VAR_1[2] = "0";
 int VAR_2;

 for (VAR_2 = sizeof(VAR_0) * 8 - 4; VAR_2 >= 0; VAR_2 -= 4) {
  unsigned long VAR_3 = (VAR_0 >> VAR_2) & 0xf;

  if (VAR_3 < 0xA)
   VAR_1[0] = '0' + VAR_3;
  else
   VAR_1[0] = 'a' + (VAR_3 - 0xA);

  FUNC_0(VAR_1);
 }
}
