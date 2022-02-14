
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
  uint8_t VAR_1[32], VAR_2[16], VAR_3[32], VAR_4[128], VAR_5[128], VAR_6[32];


  FUNC_5(VAR_1, sizeof VAR_1, "05ac9fc4c62a02e3f90840da5616218c6de5743d66b8e0fbf833759c5928b53d");
  FUNC_5(VAR_2, sizeof VAR_2, "2b89a17904922ed8f017a63044848545");
  FUNC_5(VAR_3, sizeof VAR_3, "2791126b8b52ee1fd9392a0a13e0083bed4186dc649b739607ac70ec8dcecf9b");
  FUNC_5(VAR_5, sizeof VAR_5, "02ddff5173da2fcffa10215b030d660d61179e61ecc22609b1151a75f1cbcbb4363c3a89299b4b63aca5e581e73c860491010aa35de3337cc6c09ebec8c91a6287586f3a74d9694b462d2720ea2e11bbd02af33adefb4a16e6b370fa0effd57d607547bdcfbb7831f54de7073ad2a7da987a0016a82fa958779a168674b56524");

  cf_hmac_drbg VAR_7;
  FUNC_2(&VAR_7, &VAR_0, VAR_1, sizeof VAR_1, VAR_2, sizeof VAR_2, ((void*)0), 0);
  FUNC_5(VAR_6, sizeof VAR_6, "43bac13bae715092cf7eb280a2e10a962faf7233c41412f69bc74a35a584e54c");
  FUNC_3(&VAR_7, VAR_3, sizeof VAR_3, VAR_6, sizeof VAR_6);
  FUNC_5(VAR_6, sizeof VAR_6, "3f2fed4b68d506ecefa21f3f5bb907beb0f17dbc30f6ffbba5e5861408c53a1e");
  FUNC_1(&VAR_7, VAR_6, sizeof VAR_6, VAR_4, sizeof VAR_4);
  FUNC_5(VAR_6, sizeof VAR_6, "529030df50f410985fde068df82b935ec23d839cb4b269414c0ede6cffea5b68");
  FUNC_1(&VAR_7, VAR_6, sizeof VAR_6, VAR_4, sizeof VAR_4);
  FUNC_0(FUNC_4(VAR_4, VAR_5, sizeof VAR_4) == 0);
}
