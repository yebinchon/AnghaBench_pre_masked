
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int*,int*,size_t,int*,size_t,int*,int*) ;
 int FUNC_3 (int*,int*,int*,size_t,int*,size_t,int*,int*) ;
 scalar_t__ FUNC_4 (int*,int*,size_t) ;
 size_t FUNC_5 (int*,int,char const*) ;

__attribute__((used)) static void FUNC_6(const char *VAR_0,
                   const char *VAR_1,
                   const char *VAR_2,
                   const char *VAR_3,
                   const char *VAR_4,
                   const char *VAR_5)
{

  uint8_t VAR_6[32], VAR_7[12], VAR_8[12], VAR_9[16];
  uint8_t VAR_10[265], VAR_11[265];

  FUNC_5(VAR_6, sizeof VAR_6, VAR_0);
  FUNC_5(VAR_7, sizeof VAR_7, VAR_1);
  size_t VAR_12 = FUNC_5(VAR_8, sizeof VAR_8, VAR_2);
  size_t VAR_13 = FUNC_5(VAR_11, sizeof VAR_11, VAR_3);
  size_t VAR_14 = FUNC_5(VAR_10, sizeof VAR_10, VAR_4);
  FUNC_5(VAR_9, sizeof VAR_9, VAR_5);

  FUNC_1(VAR_14 == VAR_13);


  uint8_t VAR_15[265], VAR_16[16];


  FUNC_3(VAR_6, VAR_7,
                              VAR_8, VAR_12,
                              VAR_11, VAR_13,
                              VAR_15, VAR_16);

  FUNC_0(FUNC_4(VAR_15, VAR_10, VAR_14) == 0);
  FUNC_0(FUNC_4(VAR_16, VAR_9, sizeof VAR_9) == 0);


  FUNC_0(0 == FUNC_2(VAR_6, VAR_7,
                                              VAR_8, VAR_12,
                                              VAR_10, VAR_14,
                                              VAR_9, VAR_15));
  FUNC_0(0 == FUNC_4(VAR_15, VAR_11, VAR_13));


  VAR_10[0] ^= 0xff;

  FUNC_0(1 == FUNC_2(VAR_6, VAR_7,
                                              VAR_8, VAR_12,
                                              VAR_10, VAR_14,
                                              VAR_9, VAR_15));
}
