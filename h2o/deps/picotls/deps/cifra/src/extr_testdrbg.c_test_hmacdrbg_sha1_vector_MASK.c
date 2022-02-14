
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int cf_hmac_drbg ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *,int *,int,int *,int,int *,int ) ;
 int FUNC_3 (int *,int *,int,int *,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int,char*) ;

__attribute__((used)) static void FUNC_6(void)
{
  uint8_t VAR_1[16], VAR_2[8], VAR_3[16], VAR_4[80], VAR_5[80];


  FUNC_5(VAR_1, sizeof VAR_1, "79349bbf7cdda5799557866621c91383");
  FUNC_5(VAR_2, sizeof VAR_2, "1146733abf8c35c8");
  FUNC_5(VAR_3, sizeof VAR_3, "c7215b5b96c48e9b338c74e3e99dfedf");
  FUNC_5(VAR_5, sizeof VAR_5, "c6a16ab8d420706f0f34ab7fec5adca9d8ca3a133e159ca6ac43c6f8a2be22834a4c0a0affb10d7194f1c1a5cf7322ec1ae0964ed4bf122746e087fdb5b3e91b3493d5bb98faed49e85f130fc8a459b7");

  cf_hmac_drbg VAR_6;
  FUNC_2(&VAR_6, &VAR_0, VAR_1, sizeof VAR_1, VAR_2, sizeof VAR_2, ((void*)0), 0);
  FUNC_3(&VAR_6, VAR_3, sizeof VAR_3, ((void*)0), 0);
  FUNC_1(&VAR_6, VAR_4, sizeof VAR_4);
  FUNC_1(&VAR_6, VAR_4, sizeof VAR_4);
  FUNC_0(FUNC_4(VAR_4, VAR_5, sizeof VAR_4) == 0);
}
