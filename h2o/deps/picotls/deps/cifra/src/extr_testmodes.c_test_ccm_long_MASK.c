
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int cf_aes_context ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *,int *,int,int,int *,int,int *,int,int *,int *,int) ;
 int FUNC_3 (int *,int,int) ;
 scalar_t__ FUNC_4 (void const*,int *,int) ;

__attribute__((used)) static void FUNC_5(void)
{

  uint8_t VAR_1[0x10000];
  uint8_t VAR_2[16];
  uint8_t VAR_3[14];
  uint8_t VAR_4[13];
  uint8_t VAR_5[32], VAR_6[32];

  FUNC_3(VAR_1, sizeof VAR_1, 0x00);
  FUNC_3(VAR_2, sizeof VAR_2, 0x40);
  FUNC_3(VAR_4, sizeof VAR_4, 0x10);
  FUNC_3(VAR_5, sizeof VAR_5, 0x20);

  const void *VAR_7 = "\xb4\xac\x6b\xec\x93\xe8\x59\x8e\x7f\x0d\xad\xbc\xea\x5b";
  const void *VAR_8 = "\x69\x91\x5d\xad\x1e\x84\xc6\x37\x6a\x68\xc2\x96\x7e\x4d\xab\x61\x5a\xe0\xfd\x1f\xae\xc4\x4c\xc4\x84\x82\x85\x29\x46\x3c\xcf\x72";

  cf_aes_context VAR_9;
  FUNC_1(&VAR_9, VAR_2, sizeof VAR_2);

  FUNC_2(&VAR_0, &VAR_9,
                 VAR_5, sizeof VAR_5, 15 - sizeof VAR_4,
                 VAR_1, sizeof VAR_1,
                 VAR_4, sizeof VAR_4,
                 VAR_6,
                 VAR_3, sizeof VAR_3);

  FUNC_0(FUNC_4(VAR_7, VAR_3, sizeof VAR_3) == 0);
  FUNC_0(FUNC_4(VAR_8, VAR_6, sizeof VAR_6) == 0);
}
