
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RSA ;
typedef int FILE ;
typedef int EVP_CIPHER_CTX ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char*,int*) ;
 int FUNC_3 (int *,int ,int *,unsigned char*,unsigned char*) ;
 int FUNC_4 (int *,unsigned char*,int*,void*,int) ;
 int FUNC_5 () ;
 int * FUNC_6 (int *,int *,int *,int *) ;
 int VAR_1 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,unsigned char*,unsigned char*,int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (char const* const,char*) ;
 int FUNC_13 (unsigned char*,unsigned char*) ;
 int FUNC_14 (char*,...) ;
 void* FUNC_15 (int) ;
 int FUNC_16 (unsigned char*,...) ;
 int FUNC_17 (int,char*,...) ;

int FUNC_18 (const char *const VAR_2, void *VAR_3, int VAR_4, void **VAR_5, int *VAR_6) {
  FUNC_17 (3, "rsa_encrypt (private_key_name = %s, ilen = %d)\n", VAR_2, VAR_4);
  int VAR_7 = 0;
  RSA *VAR_8 = ((void*)0);
  *VAR_5 = ((void*)0);
  *VAR_6 = -1;
  FILE *VAR_9 = FUNC_12 (VAR_2, "rb");
  if (VAR_9 == ((void*)0)) {
    FUNC_14 ("Couldn't open private key file: %s\n", VAR_2);
    return -1;
  }
  VAR_8 = FUNC_6 (VAR_9, ((void*)0), ((void*)0), ((void*)0));
  if (VAR_8 == ((void*)0)) {
    FUNC_14 ("PEM_read_RSAPrivateKey returns NULL.\n");
    VAR_7 = -2;
    goto clean;
  }
  FUNC_11 (VAR_9);
  VAR_9 = ((void*)0);
  unsigned char VAR_10[32], VAR_11[32];
  FUNC_13 (VAR_10, VAR_11);
  const int VAR_12 = FUNC_9 (VAR_8);
  *VAR_6 = 4 + VAR_12 + 32 + VAR_4 + VAR_0;
  unsigned char *VAR_13 = *VAR_5 = FUNC_15 (*VAR_6);

  FUNC_16 (VAR_13, &VAR_12, 4);
  if (!FUNC_8 (32, VAR_10, VAR_13 + 4, VAR_8, VAR_1)) {
    FUNC_14 ("RSA_private_encrypt fail.\n");
    VAR_7 = -3;
    goto clean;
  }
  FUNC_16 (VAR_13 + 4 + VAR_12, VAR_11, 32);
  EVP_CIPHER_CTX VAR_14;
  FUNC_1 (&VAR_14);
  FUNC_3 (&VAR_14, FUNC_5(), ((void*)0), VAR_10, VAR_11);
  int VAR_15, VAR_16;
  FUNC_4 (&VAR_14, VAR_13 + 4 + VAR_12 + 32, &VAR_15, VAR_3, VAR_4);
  FUNC_2 (&VAR_14, VAR_13 + 4 + VAR_12 + 32 + VAR_15, &VAR_16);
  FUNC_0 (&VAR_14);
  int VAR_17 = 4 + VAR_12 + 32 + VAR_15 + VAR_16;
  FUNC_17 (3, "c_len = %d, f_len = %d\n", VAR_15, VAR_16);
  FUNC_10 (VAR_17 <= *VAR_6);
  *VAR_6 = VAR_17;
  clean:
  if (VAR_9 != ((void*)0)) {
    FUNC_11 (VAR_9);
  }
  if (VAR_8) {
    FUNC_7 (VAR_8);
  }

  return VAR_7;
}
