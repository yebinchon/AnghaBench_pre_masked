
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int cf_hmac_drbg ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int,int *,int) ;
 int FUNC_2 (int *,int *,int *,int,int *,int,int *,int ) ;
 int FUNC_3 (int *,int *,int,int *,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int,char*) ;

__attribute__((used)) static void FUNC_6(void)
{
  uint8_t VAR_1[16], VAR_2[8], VAR_3[16], VAR_4[80], VAR_5[80], VAR_6[16];


  FUNC_5(VAR_1, sizeof VAR_1, "7d7052a776fd2fb3d7191f733304ee8b");
  FUNC_5(VAR_2, sizeof VAR_2, "be4a0ceedca80207");
  FUNC_5(VAR_3, sizeof VAR_3, "49047e879d610955eed916e4060e00c9");
  FUNC_5(VAR_5, sizeof VAR_5, "a736343844fc92511391db0addd9064dbee24c8976aa259a9e3b6368aa6de4c9bf3a0effcda9cb0e9dc33652ab58ecb7650ed80467f76a849fb1cfc1ed0a09f7155086064db324b1e124f3fc9e614fcb");

  cf_hmac_drbg VAR_7;
  FUNC_2(&VAR_7, &VAR_0, VAR_1, sizeof VAR_1, VAR_2, sizeof VAR_2, ((void*)0), 0);
  FUNC_5(VAR_6, sizeof VAR_6, "fd8bb33aab2f6cdfbc541811861d518d");
  FUNC_3(&VAR_7, VAR_3, sizeof VAR_3, VAR_6, sizeof VAR_6);
  FUNC_5(VAR_6, sizeof VAR_6, "99afe347540461ddf6abeb491e0715b4");
  FUNC_1(&VAR_7, VAR_6, sizeof VAR_6, VAR_4, sizeof VAR_4);
  FUNC_5(VAR_6, sizeof VAR_6, "02f773482dd7ae66f76e381598a64ef0");
  FUNC_1(&VAR_7, VAR_6, sizeof VAR_6, VAR_4, sizeof VAR_4);
  FUNC_0(FUNC_4(VAR_4, VAR_5, sizeof VAR_4) == 0);
}
