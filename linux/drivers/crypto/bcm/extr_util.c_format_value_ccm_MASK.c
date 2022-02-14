
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int*,int ,int) ;

void FUNC_1(unsigned int VAR_0, u8 *VAR_1, u8 VAR_2)
{
 int VAR_3;


 FUNC_0(VAR_1, 0, VAR_2);


 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_1[VAR_2 - VAR_3 - 1] = (VAR_0 >> (8 * VAR_3)) & 0xff;
  if (VAR_3 >= 3)
   break;
 }
}
