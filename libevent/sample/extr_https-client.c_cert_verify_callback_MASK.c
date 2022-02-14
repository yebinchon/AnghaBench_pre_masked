
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cert_str ;
typedef int X509_STORE_CTX ;
typedef int X509 ;
typedef int HostnameValidationResult ;







 int FUNC_0 (int ,char*,int) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (char*,char const*,char const*,...) ;
 int FUNC_5 (char const*,int *) ;

__attribute__((used)) static int FUNC_6(X509_STORE_CTX *VAR_1, void *VAR_2)
{
 char VAR_3[256];
 const char *VAR_4 = (const char *) VAR_2;
 const char *VAR_5 = "X509_verify_cert failed";
 HostnameValidationResult VAR_6 = 132;




 int VAR_7 = 0;

 X509 *VAR_8 = ((void*)0);

 if (VAR_0) {
  return 1;
 }

 VAR_7 = FUNC_3(VAR_1);

 VAR_8 = FUNC_1(VAR_1);

 if (VAR_7) {
  VAR_6 = FUNC_5(VAR_4, VAR_8);

  switch (VAR_6) {
  case 130:
   VAR_5 = "MatchFound";
   break;
  case 129:
   VAR_5 = "MatchNotFound";
   break;
  case 128:
   VAR_5 = "NoSANPresent";
   break;
  case 131:
   VAR_5 = "MalformedCertificate";
   break;
  case 132:
   VAR_5 = "Error";
   break;
  default:
   VAR_5 = "WTF!";
   break;
  }
 }

 FUNC_0(FUNC_2 (VAR_8),
     VAR_3, sizeof (VAR_3));

 if (VAR_6 == 130) {
  FUNC_4("https server '%s' has this certificate, "
         "which looks good to me:\n%s\n",
         VAR_4, VAR_3);
  return 1;
 } else {
  FUNC_4("Got '%s' for hostname '%s' and certificate:\n%s\n",
         VAR_5, VAR_4, VAR_3);
  return 0;
 }
}
