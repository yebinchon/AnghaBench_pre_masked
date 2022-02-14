
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int test_digest ;
struct alg {char* name; int * (* evp_md ) () ;} ;
typedef int control_digest ;
typedef int EVP_MD ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (int) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,int *,int ) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,int,int) ;
 int FUNC_8 (struct alg*,char*,size_t,char*,int*) ;
 int FUNC_9 (struct alg*,int const*,char*,size_t,char*,int*) ;
 int FUNC_10 (char*,...) ;
 int * FUNC_11 () ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_12(struct alg *VAR_2, size_t VAR_3)
{
 const EVP_MD *VAR_4;
 char *VAR_5;
 u_int VAR_6;
 int VAR_7;
 char VAR_8[VAR_0], VAR_9[VAR_0];

 FUNC_7(VAR_8, 0x3c, sizeof(VAR_8));
 FUNC_7(VAR_9, 0x3c, sizeof(VAR_9));

 VAR_4 = VAR_2->evp_md();
 FUNC_2(FUNC_0(VAR_4) <= sizeof(VAR_8));

 VAR_5 = FUNC_1(VAR_3);


 VAR_6 = sizeof(VAR_8);
 FUNC_9(VAR_2, VAR_4, VAR_5, VAR_3, VAR_8, &VAR_6);


 if (!FUNC_8(VAR_2, VAR_5, VAR_3, VAR_9, &VAR_7))
  goto out;
 if (FUNC_6(VAR_8, VAR_9, sizeof(VAR_8)) != 0) {
  if (FUNC_6(VAR_8, VAR_9, FUNC_0(VAR_4)) == 0)
   FUNC_10("%s (%zu) mismatch in trailer:\n",
       VAR_2->name, VAR_3);
  else
   FUNC_10("%s (%zu) mismatch:\n", VAR_2->name, VAR_3);
  FUNC_10("control:\n");
  FUNC_5(VAR_8, sizeof(VAR_8), ((void*)0), 0);
  FUNC_10("test (cryptodev device %s):\n", FUNC_3(VAR_7));
  FUNC_5(VAR_9, sizeof(VAR_9), ((void*)0), 0);
  goto out;
 }

 if (VAR_1)
  FUNC_10("%s (%zu) matched (cryptodev device %s)\n",
      VAR_2->name, VAR_3, FUNC_3(VAR_7));

out:
 FUNC_4(VAR_5);
}
