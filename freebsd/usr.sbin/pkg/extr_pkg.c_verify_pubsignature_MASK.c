
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pubkey {struct pubkey* sig; int siglen; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const**) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct pubkey*) ;
 int FUNC_3 (char*,char const*) ;
 struct pubkey* FUNC_4 (int) ;
 int FUNC_5 (int,char const*,int *,int ,struct pubkey*,int ) ;
 int VAR_1 ;
 int FUNC_6 (char*) ;

__attribute__((used)) static bool
FUNC_7(int VAR_2, int VAR_3)
{
 struct pubkey *VAR_4;
 const char *VAR_5;
 bool VAR_6;

 VAR_4 = ((void*)0);
 VAR_5 = ((void*)0);
 VAR_6 = 0;
 if (FUNC_0(VAR_0, &VAR_5) != 0) {
  FUNC_6("No CONFIG_PUBKEY defined");
  goto cleanup;
 }

 if ((VAR_4 = FUNC_4(VAR_3)) == ((void*)0)) {
  FUNC_6("Error reading signature");
  goto cleanup;
 }


 FUNC_3("Verifying signature with public key %s... ", VAR_5);
 if (FUNC_5(VAR_2, VAR_5, ((void*)0), 0, VAR_4->sig,
     VAR_4->siglen) == 0) {
  FUNC_1(VAR_1, "Signature is not valid\n");
  goto cleanup;
 }

 VAR_6 = 1;

cleanup:
 if (VAR_4) {
  FUNC_2(VAR_4->sig);
  FUNC_2(VAR_4);
 }

 return (VAR_6);
}
