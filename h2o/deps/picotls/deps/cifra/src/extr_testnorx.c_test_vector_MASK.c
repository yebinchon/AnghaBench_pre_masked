
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int*,int*,int,int*,int,int*,int,int*,int*) ;
 int FUNC_2 (int*,int*,int*,int,int*,int,int*,int,int*,int*) ;
 scalar_t__ FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int*,int,char*) ;

__attribute__((used)) static void FUNC_5(void)
{
  uint8_t VAR_0[16], VAR_1[8], VAR_2[128], VAR_3[128], VAR_4[128], VAR_5[128], VAR_6[16];



  FUNC_4(VAR_0, sizeof VAR_0, "000102030405060708090a0b0c0d0e0f");
  FUNC_4(VAR_1, sizeof VAR_1, "f0e0d0c0b0a09080");

  for (unsigned VAR_7 = 0; VAR_7 < 128; VAR_7++)
  {
    VAR_2[VAR_7] = VAR_3[VAR_7] = VAR_4[VAR_7] = VAR_7;
  }

  FUNC_2(VAR_0, VAR_1,
                    VAR_2, sizeof VAR_2,
                    VAR_3, sizeof VAR_3,
                    VAR_4, sizeof VAR_4,
                    VAR_5, VAR_6);

  uint8_t VAR_8[128], VAR_9[16];

  FUNC_4(VAR_8, sizeof VAR_8, "f4afc8e66d2d80de0a7f719c899624c9ad896ec7c61739d5376d0648c7bcb204e57db05c6f83b3ff4315e8a4ef2f2c855f21ea4c51ac6de575773ba548f36e636a13b979d953bb91298ea4a6e2aa27402991e0da541997825407b2f12441de3ae6c5dbfe41b12f1480d234832765111e4c09deef9fe3971618d2217c4b77921e");
  FUNC_4(VAR_9, sizeof VAR_9, "7810131eea2eab1e5da05d23d4e3cb99");

  FUNC_0(FUNC_3(VAR_5, VAR_8, sizeof VAR_5) == 0);
  FUNC_0(FUNC_3(VAR_6, VAR_9, sizeof VAR_6) == 0);

  uint8_t VAR_10[128];
  FUNC_0(0 ==
             FUNC_1(VAR_0, VAR_1,
                               VAR_2, sizeof VAR_2,
                               VAR_5, sizeof VAR_5,
                               VAR_4, sizeof VAR_4,
                               VAR_6,
                               VAR_10));

  FUNC_0(FUNC_3(VAR_3, VAR_10, sizeof VAR_3) == 0);
  VAR_6[0] ^= 0xff;

  FUNC_0(FUNC_1(VAR_0, VAR_1,
                               VAR_2, sizeof VAR_2,
                               VAR_5, sizeof VAR_5,
                               VAR_4, sizeof VAR_4,
                               VAR_6,
                               VAR_10));
}
