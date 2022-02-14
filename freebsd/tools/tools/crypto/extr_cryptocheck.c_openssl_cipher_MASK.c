
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct alg {int name; } ;
typedef int EVP_CIPHER_CTX ;
typedef int EVP_CIPHER ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *,int*) ;
 int FUNC_6 (int *,int const*,int *,int const*,int const*,int) ;
 int FUNC_7 (int *,int *,int*,int const*,size_t) ;
 int FUNC_8 (int,char*,int ,size_t,int) ;

__attribute__((used)) static void
FUNC_9(struct alg *VAR_0, const EVP_CIPHER *VAR_1, const char *VAR_2,
    const char *VAR_3, const char *VAR_4, char *VAR_5, size_t VAR_6, int VAR_7)
{
 EVP_CIPHER_CTX *VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = FUNC_3();
 if (VAR_8 == ((void*)0))
  FUNC_8(1, "OpenSSL %s (%zu) ctx new failed: %s", VAR_0->name,
      VAR_6, FUNC_0(FUNC_1(), ((void*)0)));
 if (FUNC_6(VAR_8, VAR_1, ((void*)0), (const u_char *)VAR_2,
     (const u_char *)VAR_3, VAR_7) != 1)
  FUNC_8(1, "OpenSSL %s (%zu) ctx init failed: %s", VAR_0->name,
      VAR_6, FUNC_0(FUNC_1(), ((void*)0)));
 FUNC_4(VAR_8, 0);
 if (FUNC_7(VAR_8, (u_char *)VAR_5, &VAR_9,
     (const u_char *)VAR_4, VAR_6) != 1)
  FUNC_8(1, "OpenSSL %s (%zu) cipher update failed: %s", VAR_0->name,
      VAR_6, FUNC_0(FUNC_1(), ((void*)0)));
 VAR_10 = VAR_9;
 if (FUNC_5(VAR_8, (u_char *)VAR_5 + VAR_9, &VAR_9) != 1)
  FUNC_8(1, "OpenSSL %s (%zu) cipher final failed: %s", VAR_0->name,
      VAR_6, FUNC_0(FUNC_1(), ((void*)0)));
 VAR_10 += VAR_9;
 if (VAR_10 != VAR_6)
  FUNC_8(1, "OpenSSL %s (%zu) cipher size mismatch: %d", VAR_0->name,
      VAR_6, VAR_10);
 FUNC_2(VAR_8);
}
