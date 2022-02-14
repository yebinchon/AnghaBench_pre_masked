
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY ;
typedef int EVP_MD_CTX ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,unsigned char*,int) ;
 int FUNC_4 (int *,int *,int ,int *,int *) ;
 int FUNC_5 (int *,char*,int ) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;
 int VAR_0 ;
 int FUNC_10 () ;
 int * FUNC_11 (unsigned char const*,int) ;
 int * FUNC_12 (char const*) ;
 int FUNC_13 (int,int ,int ) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int,char*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*,...) ;

__attribute__((used)) static bool
FUNC_19(int VAR_1, const char *VAR_2, const unsigned char *VAR_3,
    int VAR_4, unsigned char *VAR_5, int VAR_6)
{
 EVP_MD_CTX *VAR_7;
 EVP_PKEY *VAR_8;
 char VAR_9[(VAR_0 * 2) + 2];
 char VAR_10[1024];
 bool VAR_11;

 VAR_8 = ((void*)0);
 VAR_7 = ((void*)0);
 VAR_11 = 0;

 FUNC_10();


 if (FUNC_13(VAR_1, 0, 0) == -1) {
  FUNC_17("lseek");
  goto cleanup;
 }
 if ((FUNC_15(VAR_1, VAR_9)) == -1) {
  FUNC_18("Error creating SHA256 hash for package");
  goto cleanup;
 }

 if (VAR_2 != ((void*)0)) {
  if ((VAR_8 = FUNC_12(VAR_2)) == ((void*)0)) {
   FUNC_18("Error reading public key");
   goto cleanup;
  }
 } else {
  if ((VAR_8 = FUNC_11(VAR_3, VAR_4)) == ((void*)0)) {
   FUNC_18("Error reading public key");
   goto cleanup;
  }
 }


 if ((VAR_7 = FUNC_6()) == ((void*)0)) {
  FUNC_18("%s", FUNC_0(FUNC_2(), VAR_10));
  goto error;
 }

 if (FUNC_4(VAR_7, ((void*)0), FUNC_9(), ((void*)0), VAR_8) != 1) {
  FUNC_18("%s", FUNC_0(FUNC_2(), VAR_10));
  goto error;
 }
 if (FUNC_5(VAR_7, VAR_9, FUNC_16(VAR_9)) != 1) {
  FUNC_18("%s", FUNC_0(FUNC_2(), VAR_10));
  goto error;
 }

 if (FUNC_3(VAR_7, VAR_5, VAR_6) != 1) {
  FUNC_18("%s", FUNC_0(FUNC_2(), VAR_10));
  goto error;
 }

 VAR_11 = 1;
 FUNC_14("done\n");
 goto cleanup;

error:
 FUNC_14("failed\n");

cleanup:
 if (VAR_8)
  FUNC_8(VAR_8);
 if (VAR_7)
  FUNC_7(VAR_7);
 FUNC_1();

 return (VAR_11);
}
