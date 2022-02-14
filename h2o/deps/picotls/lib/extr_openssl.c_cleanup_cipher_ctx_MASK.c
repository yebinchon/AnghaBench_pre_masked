
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_CIPHER_CTX ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(EVP_CIPHER_CTX *VAR_1)
{
    if (!FUNC_0(VAR_1)) {
        FUNC_2(VAR_0, "EVP_CIPHER_CTX_cleanup() failed\n");
        FUNC_1();
    }
}
