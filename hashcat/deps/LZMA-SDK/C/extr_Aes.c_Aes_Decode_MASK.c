
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int*,int) ;

__attribute__((used)) static void FUNC_2(const UInt32 *VAR_0, UInt32 *VAR_1, const UInt32 *VAR_2)
{
  UInt32 VAR_3[4];
  UInt32 VAR_4[4];
  UInt32 VAR_5 = VAR_0[0];
  VAR_0 += 4 + VAR_5 * 8;
  VAR_3[0] = VAR_2[0] ^ VAR_0[0];
  VAR_3[1] = VAR_2[1] ^ VAR_0[1];
  VAR_3[2] = VAR_2[2] ^ VAR_0[2];
  VAR_3[3] = VAR_2[3] ^ VAR_0[3];
  for (;;)
  {
    VAR_0 -= 8;
    FUNC_1(VAR_4, VAR_3, 4);
    if (--VAR_5 == 0)
      break;
    FUNC_1(VAR_3, VAR_4, 0);
  }
  FUNC_0(0); FUNC_0(1); FUNC_0(2); FUNC_0(3);
}
