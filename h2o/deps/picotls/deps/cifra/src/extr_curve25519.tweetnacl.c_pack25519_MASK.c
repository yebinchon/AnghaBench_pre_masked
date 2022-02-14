
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int* gf ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int*,int* const) ;

__attribute__((used)) static void FUNC_3(uint8_t VAR_0[32], const gf VAR_1)
{
  size_t VAR_2, VAR_3;
  int VAR_4;
  gf VAR_5, VAR_6;
  FUNC_2(VAR_6, VAR_1);
  FUNC_0(VAR_6);
  FUNC_0(VAR_6);
  FUNC_0(VAR_6);

  for(VAR_3 = 0; VAR_3 < 2; VAR_3++)
  {
    VAR_5[0] = VAR_6[0] - 0xffed;
    for (VAR_2 = 1; VAR_2 < 15; VAR_2++)
    {
      VAR_5[VAR_2] = VAR_6[VAR_2] - 0xffff - ((VAR_5[VAR_2 - 1] >> 16) & 1);
      VAR_5[VAR_2 - 1] &= 0xffff;
    }
    VAR_5[15] = VAR_6[15] - 0x7fff - ((VAR_5[14] >> 16) & 1);
    VAR_4 = (VAR_5[15] >> 16) & 1;
    VAR_5[14] &= 0xffff;
    FUNC_1(VAR_6, VAR_5, 1 - VAR_4);
  }

  for (VAR_2 = 0; VAR_2 < 16; VAR_2++)
  {
    VAR_0[2 * VAR_2] = VAR_6[VAR_2] & 0xff;
    VAR_0[2 * VAR_2 + 1] = (uint8_t) (VAR_6[VAR_2] >> 8);
  }
}
