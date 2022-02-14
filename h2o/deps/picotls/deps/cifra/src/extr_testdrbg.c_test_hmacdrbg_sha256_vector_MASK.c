
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
  uint8_t VAR_1[32], VAR_2[16], VAR_3[32], VAR_4[128], VAR_5[128];


  FUNC_5(VAR_1, sizeof VAR_1, "06032cd5eed33f39265f49ecb142c511da9aff2af71203bffaf34a9ca5bd9c0d");
  FUNC_5(VAR_2, sizeof VAR_2, "0e66f71edc43e42a45ad3c6fc6cdc4df");
  FUNC_5(VAR_3, sizeof VAR_3, "01920a4e669ed3a85ae8a33b35a74ad7fb2a6bb4cf395ce00334a9c9a5a5d552");
  FUNC_5(VAR_5, sizeof VAR_5, "76fc79fe9b50beccc991a11b5635783a83536add03c157fb30645e611c2898bb2b1bc215000209208cd506cb28da2a51bdb03826aaf2bd2335d576d519160842e7158ad0949d1a9ec3e66ea1b1a064b005de914eac2e9d4f2d72a8616a80225422918250ff66a41bd2f864a6a38cc5b6499dc43f7f2bd09e1e0f8f5885935124");

  cf_hmac_drbg VAR_6;
  FUNC_2(&VAR_6, &VAR_0, VAR_1, sizeof VAR_1, VAR_2, sizeof VAR_2, ((void*)0), 0);
  FUNC_3(&VAR_6, VAR_3, sizeof VAR_3, ((void*)0), 0);
  FUNC_1(&VAR_6, VAR_4, sizeof VAR_4);
  FUNC_1(&VAR_6, VAR_4, sizeof VAR_4);
  FUNC_0(FUNC_4(VAR_4, VAR_5, sizeof VAR_4) == 0);
}
