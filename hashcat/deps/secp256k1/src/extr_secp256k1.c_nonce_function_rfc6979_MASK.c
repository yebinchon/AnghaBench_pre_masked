
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_rfc6979_hmac_sha256 ;
typedef int keydata ;


 int FUNC_0 (unsigned char*,unsigned int*,unsigned char const*,int) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned char*,int) ;
 int FUNC_4 (int *,unsigned char*,unsigned int) ;

__attribute__((used)) static int FUNC_5(unsigned char *VAR_0, const unsigned char *VAR_1, const unsigned char *VAR_2, const unsigned char *VAR_3, void *VAR_4, unsigned int VAR_5) {
   unsigned char VAR_6[112];
   unsigned int VAR_7 = 0;
   secp256k1_rfc6979_hmac_sha256 VAR_8;
   unsigned int VAR_9;
   FUNC_0(VAR_6, &VAR_7, VAR_2, 32);
   FUNC_0(VAR_6, &VAR_7, VAR_1, 32);
   if (VAR_4 != ((void*)0)) {
       FUNC_0(VAR_6, &VAR_7, VAR_4, 32);
   }
   if (VAR_3 != ((void*)0)) {
       FUNC_0(VAR_6, &VAR_7, VAR_3, 16);
   }
   FUNC_4(&VAR_8, VAR_6, VAR_7);
   FUNC_1(VAR_6, 0, sizeof(VAR_6));
   for (VAR_9 = 0; VAR_9 <= VAR_5; VAR_9++) {
       FUNC_3(&VAR_8, VAR_0, 32);
   }
   FUNC_2(&VAR_8);
   return 1;
}
