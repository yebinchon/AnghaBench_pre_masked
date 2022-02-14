
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t const U64 ;


 size_t FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (size_t const) ;
 int FUNC_2 (char*,char const*,int) ;

__attribute__((used)) static size_t FUNC_3(const char* VAR_0)
{ U64 const VAR_1 = FUNC_0(VAR_0);
    size_t VAR_2 = (size_t) FUNC_1(VAR_1);
    if ((U64)VAR_2 > VAR_1) VAR_2 = (size_t)VAR_1;
    if (VAR_2 < VAR_1) {
        FUNC_2("Not enough memory for '%s' full size; testing %i MB only...\n", VAR_0, (int)(VAR_2>>20));
    }
    return VAR_2;
}
