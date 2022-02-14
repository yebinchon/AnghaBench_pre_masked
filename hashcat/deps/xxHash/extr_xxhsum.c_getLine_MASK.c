
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetLineResult ;
typedef int FILE ;


 int VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char*,int) ;

__attribute__((used)) static GetLineResult FUNC_4(char** VAR_7, int* VAR_8, FILE* VAR_9)
{
    GetLineResult VAR_10 = VAR_4;
    int VAR_11 = 0;

    if ((*VAR_7 == ((void*)0)) || (*VAR_8<1)) {
        FUNC_1(*VAR_7);
        *VAR_8 = 0;
        *VAR_7 = (char*)FUNC_2(VAR_0);
        if(*VAR_7 == ((void*)0)) return VAR_5;
        *VAR_8 = VAR_0;
    }

    for (;;) {
        const int VAR_12 = FUNC_0(VAR_9);
        if (VAR_12 == VAR_1) {



            if (VAR_11 == 0) VAR_10 = VAR_2;
            break;
        }


        if (VAR_11+1 >= *VAR_8) {
            char* VAR_13 = ((void*)0);
            int VAR_14 = *VAR_8;

            VAR_14 += (VAR_14/2) + 1;
            if (VAR_14 > VAR_6) VAR_14 = VAR_6;
            if (VAR_11+1 >= VAR_14) return VAR_3;

            VAR_13 = (char*) FUNC_3(*VAR_7, VAR_14);
            if (VAR_13 == ((void*)0)) return VAR_5;

            *VAR_7 = VAR_13;
            *VAR_8 = VAR_14;
        }

        if (VAR_12 == '\n') break;
        (*VAR_7)[VAR_11++] = (char) VAR_12;
    }

    (*VAR_7)[VAR_11] = '\0';
    return VAR_10;
}
