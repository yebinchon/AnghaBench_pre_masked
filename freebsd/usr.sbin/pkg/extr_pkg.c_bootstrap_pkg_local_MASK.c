
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,char const**) ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (char const*,int ) ;
 int FUNC_7 (char*,int,char*,char const*) ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (char*,...) ;

__attribute__((used)) static int
FUNC_12(const char *VAR_5, bool VAR_6)
{
 char VAR_7[VAR_1];
 char VAR_8[VAR_1];
 const char *VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_11 = -1;
 VAR_12 = -1;

 VAR_10 = FUNC_6(VAR_5, VAR_2);
 if (VAR_10 == -1)
  FUNC_2(VAR_0, "Unable to open %s", VAR_5);

 if (FUNC_1(VAR_3, &VAR_9) != 0) {
  FUNC_11("Error looking up SIGNATURE_TYPE");
  goto cleanup;
 }
 if (VAR_9 != ((void*)0) &&
     FUNC_8(VAR_9, "NONE") != 0) {
  if (FUNC_8(VAR_9, "FINGERPRINTS") == 0) {

   FUNC_7(VAR_7, sizeof(VAR_7), "%s.sig", VAR_5);

   if ((VAR_11 = FUNC_6(VAR_7, VAR_2)) == -1) {
    FUNC_4(VAR_4, "Signature for pkg not "
        "available.\n");
    goto cleanup;
   }

   if (FUNC_10(VAR_10, VAR_11) == 0)
    goto cleanup;

  } else if (FUNC_8(VAR_9, "PUBKEY") == 0) {

   FUNC_7(VAR_7, sizeof(VAR_7), "%s.pubkeysig", VAR_5);

   if ((VAR_11 = FUNC_6(VAR_7, VAR_2)) == -1) {
    FUNC_4(VAR_4, "Signature for pkg not "
        "available.\n");
    goto cleanup;
   }

   if (FUNC_9(VAR_10, VAR_11) == 0)
    goto cleanup;

  } else {
   FUNC_11("Signature type %s is not supported for "
       "bootstrapping.", VAR_9);
   goto cleanup;
  }
 }

 if ((VAR_12 = FUNC_3(VAR_10, VAR_8, VAR_1)) == 0)
  VAR_12 = FUNC_5(VAR_8, VAR_5, VAR_6);

cleanup:
 FUNC_0(VAR_10);
 if (VAR_11 != -1)
  FUNC_0(VAR_11);

 return (VAR_12);
}
