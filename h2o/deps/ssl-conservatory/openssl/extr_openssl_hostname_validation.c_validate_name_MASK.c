
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HostnameValidationResult ;
typedef int ASN1_STRING ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static HostnameValidationResult FUNC_6(const char *VAR_3, ASN1_STRING *VAR_4) {



 char *VAR_5 = (char *) FUNC_0(VAR_4);

 int VAR_6 = FUNC_2(VAR_4), VAR_7 = FUNC_5(VAR_3);


 if (FUNC_3(VAR_5, VAR_6)) {
  return VAR_0;
 }

 if (VAR_7 != 0 && VAR_3[VAR_7 - 1] == '.')
  --VAR_7;

 if (VAR_6 > 2 && VAR_5[0] == '*' && VAR_5[1] == '.') {
  if (VAR_7 != 0) {
   do {
    --VAR_7;
    if (*VAR_3++ == '.')
     break;
   } while (VAR_7 != 0);
  }
  VAR_5 += 2;
  VAR_6 -= 2;
 }

 if (VAR_6 != VAR_7) {
  return VAR_2;
 }
 return FUNC_4(VAR_3, VAR_5, VAR_7) ? VAR_1 : VAR_2;
}
