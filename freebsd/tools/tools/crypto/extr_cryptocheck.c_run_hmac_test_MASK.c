
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
typedef int u_char ;
typedef int test_digest ;
struct alg {char* name; int * (* evp_md ) () ;} ;
typedef int control_digest ;
typedef int EVP_MD ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int const*) ;
 int * FUNC_3 (int const*,char*,size_t,int *,size_t,int *,size_t*) ;
 char* FUNC_4 (size_t) ;
 int FUNC_5 (int) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (int,char*,char*,size_t,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int,int *,int ) ;
 scalar_t__ FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,int,int) ;
 int FUNC_12 (struct alg*,char*,size_t,char*,size_t,char*,int*) ;
 int FUNC_13 (char*,...) ;
 int * FUNC_14 () ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_15(struct alg *VAR_2, size_t VAR_3)
{
 const EVP_MD *VAR_4;
 char *VAR_5, *VAR_6;
 u_int VAR_7, VAR_8;
 int VAR_9;
 char VAR_10[VAR_0], VAR_11[VAR_0];

 FUNC_11(VAR_10, 0x3c, sizeof(VAR_10));
 FUNC_11(VAR_11, 0x3c, sizeof(VAR_11));

 VAR_4 = VAR_2->evp_md();
 VAR_7 = FUNC_2(VAR_4);
 FUNC_5(FUNC_2(VAR_4) <= sizeof(VAR_10));

 VAR_5 = FUNC_4(VAR_7);
 VAR_6 = FUNC_4(VAR_3);


 VAR_8 = sizeof(VAR_10);
 if (FUNC_3(VAR_4, VAR_5, VAR_7, (u_char *)VAR_6, VAR_3,
     (u_char *)VAR_10, &VAR_8) == ((void*)0))
  FUNC_7(1, "OpenSSL %s (%zu) HMAC failed: %s", VAR_2->name,
      VAR_3, FUNC_0(FUNC_1(), ((void*)0)));


 if (!FUNC_12(VAR_2, VAR_6, VAR_3, VAR_5, VAR_7, VAR_11, &VAR_9))
  goto out;
 if (FUNC_10(VAR_10, VAR_11, sizeof(VAR_10)) != 0) {
  if (FUNC_10(VAR_10, VAR_11, FUNC_2(VAR_4)) == 0)
   FUNC_13("%s (%zu) mismatch in trailer:\n",
       VAR_2->name, VAR_3);
  else
   FUNC_13("%s (%zu) mismatch:\n", VAR_2->name, VAR_3);
  FUNC_13("control:\n");
  FUNC_9(VAR_10, sizeof(VAR_10), ((void*)0), 0);
  FUNC_13("test (cryptodev device %s):\n", FUNC_6(VAR_9));
  FUNC_9(VAR_11, sizeof(VAR_11), ((void*)0), 0);
  goto out;
 }

 if (VAR_1)
  FUNC_13("%s (%zu) matched (cryptodev device %s)\n",
      VAR_2->name, VAR_3, FUNC_6(VAR_9));

out:
 FUNC_8(VAR_6);
 FUNC_8(VAR_5);
}
