
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct alg {int name; } ;
typedef int EVP_CIPHER_CTX ;
typedef int EVP_CIPHER ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,size_t,char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *,int *,int*) ;
 int FUNC_6 (int *,int const*,int *,int const*,int const*) ;
 int FUNC_7 (int *,int *,int*,int const*,size_t) ;
 int FUNC_8 (int,char*,int ,size_t,int) ;

__attribute__((used)) static void
FUNC_9(struct alg *VAR_4, const EVP_CIPHER *VAR_5, const char *VAR_6,
    const char *VAR_7, size_t VAR_8, const char *VAR_9, size_t VAR_10,
      const char *VAR_11, char *VAR_12, size_t VAR_13, char *VAR_14)
{
 EVP_CIPHER_CTX *VAR_15;
 int VAR_16, VAR_17;

 VAR_15 = FUNC_4();
 if (VAR_15 == ((void*)0))
  FUNC_8(1, "OpenSSL %s (%zu) ctx new failed: %s", VAR_4->name,
      VAR_13, FUNC_0(FUNC_1(), ((void*)0)));
 if (FUNC_6(VAR_15, VAR_5, ((void*)0), ((void*)0), ((void*)0)) != 1)
  FUNC_8(1, "OpenSSL %s (%zu) ctx init failed: %s", VAR_4->name,
      VAR_13, FUNC_0(FUNC_1(), ((void*)0)));
 if (FUNC_2(VAR_15, VAR_2, VAR_8, ((void*)0)) != 1)
  FUNC_8(1, "OpenSSL %s (%zu) setting iv length failed: %s", VAR_4->name,
      VAR_13, FUNC_0(FUNC_1(), ((void*)0)));
 if (FUNC_2(VAR_15, VAR_3, VAR_0, ((void*)0)) != 1)
  FUNC_8(1, "OpenSSL %s (%zu) setting tag length failed: %s", VAR_4->name,
       VAR_13, FUNC_0(FUNC_1(), ((void*)0)));
 if (FUNC_6(VAR_15, ((void*)0), ((void*)0), (const u_char *)VAR_6,
     (const u_char *)VAR_7) != 1)
  FUNC_8(1, "OpenSSL %s (%zu) ctx init failed: %s", VAR_4->name,
      VAR_13, FUNC_0(FUNC_1(), ((void*)0)));
 if (FUNC_7(VAR_15, ((void*)0), &VAR_16, ((void*)0), VAR_13) != 1)
  FUNC_8(1, "OpenSSL %s (%zu) unable to set data length: %s", VAR_4->name,
       VAR_13, FUNC_0(FUNC_1(), ((void*)0)));

 if (VAR_9 != ((void*)0)) {
  if (FUNC_7(VAR_15, ((void*)0), &VAR_16, (const u_char *)VAR_9,
      VAR_10) != 1)
   FUNC_8(1, "OpenSSL %s (%zu) aad update failed: %s",
       VAR_4->name, VAR_13,
       FUNC_0(FUNC_1(), ((void*)0)));
 }
 if (FUNC_7(VAR_15, (u_char *)VAR_12, &VAR_16,
     (const u_char *)VAR_11, VAR_13) != 1)
  FUNC_8(1, "OpenSSL %s (%zu) encrypt update failed: %s", VAR_4->name,
      VAR_13, FUNC_0(FUNC_1(), ((void*)0)));
 VAR_17 = VAR_16;
 if (FUNC_5(VAR_15, (u_char *)VAR_12 + VAR_16, &VAR_16) != 1)
  FUNC_8(1, "OpenSSL %s (%zu) encrypt final failed: %s", VAR_4->name,
      VAR_13, FUNC_0(FUNC_1(), ((void*)0)));
 VAR_17 += VAR_16;
 if (VAR_17 != VAR_13)
  FUNC_8(1, "OpenSSL %s (%zu) encrypt size mismatch: %d", VAR_4->name,
      VAR_13, VAR_17);
 if (FUNC_2(VAR_15, VAR_1, VAR_0,
     VAR_14) != 1)
  FUNC_8(1, "OpenSSL %s (%zu) get tag failed: %s", VAR_4->name,
      VAR_13, FUNC_0(FUNC_1(), ((void*)0)));
 FUNC_3(VAR_15);
}
