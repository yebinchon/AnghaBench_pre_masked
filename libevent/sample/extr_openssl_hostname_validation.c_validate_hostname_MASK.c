
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef scalar_t__ HostnameValidationResult ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int const*) ;
 scalar_t__ FUNC_1 (char const*,int const*) ;

HostnameValidationResult FUNC_2(const char *VAR_2, const X509 *VAR_3) {
        HostnameValidationResult VAR_4;

        if((VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)))
                return VAR_0;


        VAR_4 = FUNC_1(VAR_2, VAR_3);
        if (VAR_4 == VAR_1) {

                VAR_4 = FUNC_0(VAR_2, VAR_3);
        }

        return VAR_4;
}
