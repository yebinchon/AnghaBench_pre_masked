
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* negotiated_protocol; } ;
typedef TYPE_1__ ptls_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,char const*,size_t) ;
 size_t FUNC_3 (char const*) ;

int FUNC_4(ptls_t *VAR_1, const char *VAR_2, size_t VAR_3)
{
    char *VAR_4 = ((void*)0);

    if (VAR_2 != ((void*)0)) {
        if (VAR_3 == 0)
            VAR_3 = FUNC_3(VAR_2);
        if ((VAR_4 = FUNC_1(VAR_3 + 1)) == ((void*)0))
            return VAR_0;
        FUNC_2(VAR_4, VAR_2, VAR_3);
        VAR_4[VAR_3] = '\0';
    }

    FUNC_0(VAR_1->negotiated_protocol);
    VAR_1->negotiated_protocol = VAR_4;

    return 0;
}
