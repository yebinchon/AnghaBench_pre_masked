
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct alg {int name; } ;
typedef int EVP_CIPHER_CTX ;
typedef int EVP_CIPHER ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,int ,char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int VAR_1 ;
 int FUNC_6 (int *,int *,int*) ;
 int FUNC_7 (int *,int const*,int *,int const*,int const*) ;
 int FUNC_8 (int *,int *,int*,int const*,size_t) ;
 int FUNC_9 (int,char*,int ,size_t,int) ;

__attribute__((used)) static void
FUNC_10(struct alg *VAR_2, const EVP_CIPHER *VAR_3, const char *VAR_4,
    const char *VAR_5, const char *VAR_6, size_t VAR_7, const char *VAR_8,
    char *VAR_9, size_t VAR_10, char *VAR_11)
{
 EVP_CIPHER_CTX *VAR_12;
 int VAR_13, VAR_14;

 VAR_12 = FUNC_4();
 if (VAR_12 == ((void*)0))
  FUNC_9(1, "OpenSSL %s (%zu) ctx new failed: %s", VAR_2->name,
      VAR_10, FUNC_0(FUNC_1(), ((void*)0)));
 if (FUNC_7(VAR_12, VAR_3, ((void*)0), (const u_char *)VAR_4,
     (const u_char *)VAR_5) != 1)
  FUNC_9(1, "OpenSSL %s (%zu) ctx init failed: %s", VAR_2->name,
      VAR_10, FUNC_0(FUNC_1(), ((void*)0)));
 FUNC_5(VAR_12, 0);
 if (VAR_6 != ((void*)0)) {
  if (FUNC_8(VAR_12, ((void*)0), &VAR_13, (const u_char *)VAR_6,
      VAR_7) != 1)
   FUNC_9(1, "OpenSSL %s (%zu) aad update failed: %s",
       VAR_2->name, VAR_10,
       FUNC_0(FUNC_1(), ((void*)0)));
 }
 if (FUNC_8(VAR_12, (u_char *)VAR_9, &VAR_13,
     (const u_char *)VAR_8, VAR_10) != 1)
  FUNC_9(1, "OpenSSL %s (%zu) encrypt update failed: %s", VAR_2->name,
      VAR_10, FUNC_0(FUNC_1(), ((void*)0)));
 VAR_14 = VAR_13;
 if (FUNC_6(VAR_12, (u_char *)VAR_9 + VAR_13, &VAR_13) != 1)
  FUNC_9(1, "OpenSSL %s (%zu) encrypt final failed: %s", VAR_2->name,
      VAR_10, FUNC_0(FUNC_1(), ((void*)0)));
 VAR_14 += VAR_13;
 if (VAR_14 != VAR_10)
  FUNC_9(1, "OpenSSL %s (%zu) encrypt size mismatch: %d", VAR_2->name,
      VAR_10, VAR_14);
 if (FUNC_2(VAR_12, VAR_1, VAR_0,
     VAR_11) != 1)
  FUNC_9(1, "OpenSSL %s (%zu) get tag failed: %s", VAR_2->name,
      VAR_10, FUNC_0(FUNC_1(), ((void*)0)));
 FUNC_3(VAR_12);
}
