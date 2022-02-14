
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 size_t VAR_0 ;
 size_t FUNC_0 (char*,int const*,size_t,int ,char const**) ;
 int FUNC_1 (void*,size_t,char const**) ;
 int FUNC_2 (char*,int const*,size_t) ;

__attribute__((used)) static size_t FUNC_3(int VAR_1, const uint8_t *VAR_2, size_t VAR_3, char *VAR_4, const char **VAR_5)
{
    size_t VAR_6;

    if (VAR_1) {
        if ((VAR_6 = FUNC_0(VAR_4, VAR_2, VAR_3, 0, VAR_5)) == VAR_0)
            return VAR_0;
    } else {
        FUNC_1((void *)VAR_2, VAR_3, VAR_5);
        FUNC_2(VAR_4, VAR_2, VAR_3);
        VAR_6 = VAR_3;
    }
    VAR_4[VAR_6] = '\0';

    return VAR_6;
}
