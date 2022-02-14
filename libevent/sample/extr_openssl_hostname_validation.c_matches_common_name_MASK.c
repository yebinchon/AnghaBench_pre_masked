
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_NAME_ENTRY ;
typedef int X509 ;
typedef int HostnameValidationResult ;
typedef int ASN1_STRING ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int *) ;
 size_t FUNC_7 (char const*) ;

__attribute__((used)) static HostnameValidationResult FUNC_8(const char *VAR_6, const X509 *VAR_7) {
        int VAR_8 = -1;
        X509_NAME_ENTRY *VAR_9 = ((void*)0);
        ASN1_STRING *VAR_10 = ((void*)0);
        const char *VAR_11 = ((void*)0);


        VAR_8 = FUNC_5(FUNC_6((X509 *) VAR_7), VAR_5, -1);
        if (VAR_8 < 0) {
                return VAR_1;
        }


        VAR_9 = FUNC_4(FUNC_6((X509 *) VAR_7), VAR_8);
        if (VAR_9 == ((void*)0)) {
                return VAR_1;
        }


        VAR_10 = FUNC_3(VAR_9);
        if (VAR_10 == ((void*)0)) {
                return VAR_1;
        }
        VAR_11 = (char *) FUNC_0(VAR_10);


        if ((size_t)FUNC_1(VAR_10) != FUNC_7(VAR_11)) {
                return VAR_2;
        }


        if (FUNC_2(VAR_11, VAR_6) == VAR_0) {
                return VAR_3;
        }
        else {
                return VAR_4;
        }
}
