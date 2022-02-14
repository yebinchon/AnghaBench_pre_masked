
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int cf_chacha20_ctx ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int *,int) ;
 int FUNC_2 (int *,int *,int,int *) ;
 scalar_t__ FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int,char*) ;

__attribute__((used)) static void FUNC_6(void)
{
  uint8_t VAR_0[32], VAR_1[8], VAR_2[256], VAR_3[256];

  FUNC_5(VAR_0, 32, "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f");
  FUNC_5(VAR_1, 8, "0001020304050607");
  FUNC_5(VAR_3, 256, "f798a189f195e66982105ffb640bb7757f579da31602fc93ec01ac56f85ac3c134a4547b733b46413042c9440049176905d3be59ea1c53f15916155c2be8241a38008b9a26bc35941e2444177c8ade6689de95264986d95889fb60e84629c9bd9a5acb1cc118be563eb9b3a4a472f82e09a7e778492b562ef7130e88dfe031c79db9d4f7c7a899151b9a475032b63fc385245fe054e3dd5a97a5f576fe064025d3ce042c566ab2c507b138db853e3d6959660996546cc9c4a6eafdc777c040d70eaf46f76dad3979e5c5360c3317166a1c894c94a371876a94df7628fe4eaaf2ccb27d5aaae0ad7ad0f9d4b6ad3b54098746d4524d38407a6deb3ab78fab78c9");
  FUNC_4(VAR_2, 0, 256);

  cf_chacha20_ctx VAR_4;
  FUNC_2(&VAR_4, VAR_0, sizeof VAR_0, VAR_1);
  FUNC_1(&VAR_4, VAR_2, VAR_2, sizeof VAR_2);

  FUNC_0(FUNC_3(VAR_3, VAR_2, sizeof VAR_3) == 0);


  FUNC_2(&VAR_4, VAR_0, 16, VAR_1);
  FUNC_1(&VAR_4, VAR_2, VAR_2, sizeof VAR_2);
}
