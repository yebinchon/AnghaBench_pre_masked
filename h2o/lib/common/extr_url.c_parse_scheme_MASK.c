
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int h2o_url_scheme_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static const char *FUNC_1(const char *VAR_2, const char *VAR_3, const h2o_url_scheme_t **VAR_4)
{
    if (VAR_3 - VAR_2 >= 5 && FUNC_0(VAR_2, "http:", 5) == 0) {
        *VAR_4 = &VAR_0;
        return VAR_2 + 5;
    } else if (VAR_3 - VAR_2 >= 6 && FUNC_0(VAR_2, "https:", 6) == 0) {
        *VAR_4 = &VAR_1;
        return VAR_2 + 6;
    }
    return ((void*)0);
}
