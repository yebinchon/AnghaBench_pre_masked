
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_NAME_ENTRY ;
typedef int X509 ;
typedef int HostnameValidationResult ;
typedef int ASN1_STRING ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,int *) ;

__attribute__((used)) static HostnameValidationResult FUNC_5(const char *VAR_2, const X509 *VAR_3) {
 int VAR_4 = -1;
 X509_NAME_ENTRY *VAR_5 = ((void*)0);
 ASN1_STRING *VAR_6 = ((void*)0);


 VAR_4 = FUNC_2(FUNC_3((X509 *) VAR_3), VAR_1, -1);
 if (VAR_4 < 0) {
  return VAR_0;
 }


 VAR_5 = FUNC_1(FUNC_3((X509 *) VAR_3), VAR_4);
 if (VAR_5 == ((void*)0)) {
  return VAR_0;
 }
 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6 == ((void*)0)) {
  return VAR_0;
 }


 return FUNC_4(VAR_2, VAR_6);
}
