
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int*,int ) ;

__attribute__((used)) static void FUNC_2(uint32_t VAR_1[17])
{
  uint32_t VAR_2[17];
  size_t VAR_3;

  for (VAR_3 = 0; VAR_3 < 17; VAR_3++)
    VAR_2[VAR_3] = VAR_1[VAR_3];

  FUNC_1(VAR_2, VAR_0);




  uint32_t VAR_4 = FUNC_0(VAR_2[16] & 0x80, 0x80);
  uint32_t VAR_5 = VAR_4 ^ 0xffffffff;

  for (VAR_3 = 0; VAR_3 < 17; VAR_3++)
    VAR_1[VAR_3] = (VAR_1[VAR_3] & VAR_4) | (VAR_2[VAR_3] & VAR_5);
}
