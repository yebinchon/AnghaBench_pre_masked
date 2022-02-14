
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double intmax_t ;
typedef int JSON_Value ;
typedef int JSON_Object ;
typedef int JSON_Array ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 char* VAR_0 ;
 char* VAR_1 ;
 size_t FUNC_2 (int *) ;
 int * FUNC_3 (int *,size_t) ;
 size_t FUNC_4 (int *) ;
 char* FUNC_5 (int *,size_t) ;
 int * FUNC_6 (int *,char const*) ;
 int FUNC_7 (char const*,char*) ;
 int * FUNC_8 (int const*) ;
 int FUNC_9 (int const*) ;
 double FUNC_10 (int const*) ;
 double FUNC_11 (int const*) ;
 int * FUNC_12 (int const*) ;
 char* FUNC_13 (int const*) ;
 int FUNC_14 (int const*) ;
 int FUNC_15 (char*,char*,double) ;

__attribute__((used)) static int FUNC_16(const JSON_Value *VAR_2, char *VAR_3, int VAR_4, int VAR_5, char *VAR_6)
{
    const char *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    JSON_Value *VAR_9 = ((void*)0);
    JSON_Array *VAR_10 = ((void*)0);
    JSON_Object *VAR_11 = ((void*)0);
    size_t VAR_12 = 0, VAR_13 = 0;
    double VAR_14 = 0.0;



    int VAR_15 = -1, VAR_16 = 0;

    switch (FUNC_14(VAR_2)) {
        case 135:
            VAR_10 = FUNC_8(VAR_2);
            VAR_13 = FUNC_2(VAR_10);
            FUNC_1("[");
            if (VAR_13 > 0 && VAR_5) {
                FUNC_1("\n");
            }
            for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
                if (VAR_5) {
                    FUNC_0(VAR_4+1);
                }
                VAR_9 = FUNC_3(VAR_10, VAR_12);
                VAR_15 = FUNC_16(VAR_9, VAR_3, VAR_4+1, VAR_5, VAR_6);
                if (VAR_15 < 0) {
                    return -1;
                }
                if (VAR_3 != ((void*)0)) {
                    VAR_3 += VAR_15;
                }
                VAR_16 += VAR_15;
                if (VAR_12 < (VAR_13 - 1)) {
                    FUNC_1(",");
                }
                if (VAR_5) {
                    FUNC_1("\n");
                }
            }
            if (VAR_13 > 0 && VAR_5) {
                FUNC_0(VAR_4);
            }
            FUNC_1("]");
            return VAR_16;
        case 129:
            VAR_11 = FUNC_12(VAR_2);
            VAR_13 = FUNC_4(VAR_11);
            FUNC_1("{");
            if (VAR_13 > 0 && VAR_5) {
                FUNC_1("\n");
            }
            for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
                VAR_7 = FUNC_5(VAR_11, VAR_12);
                if (VAR_7 == ((void*)0)) {
                    return -1;
                }
                if (VAR_5) {
                    FUNC_0(VAR_4+1);
                }
                VAR_15 = FUNC_7(VAR_7, VAR_3);
                if (VAR_15 < 0) {
                    return -1;
                }
                if (VAR_3 != ((void*)0)) {
                    VAR_3 += VAR_15;
                }
                VAR_16 += VAR_15;
                FUNC_1(":");
                if (VAR_5) {
                    FUNC_1(" ");
                }
                VAR_9 = FUNC_6(VAR_11, VAR_7);
                VAR_15 = FUNC_16(VAR_9, VAR_3, VAR_4+1, VAR_5, VAR_6);
                if (VAR_15 < 0) {
                    return -1;
                }
                if (VAR_3 != ((void*)0)) {
                    VAR_3 += VAR_15;
                }
                VAR_16 += VAR_15;
                if (VAR_12 < (VAR_13 - 1)) {
                    FUNC_1(",");
                }
                if (VAR_5) {
                    FUNC_1("\n");
                }
            }
            if (VAR_13 > 0 && VAR_5) {
                FUNC_0(VAR_4);
            }
            FUNC_1("}");
            return VAR_16;
        case 128:
            VAR_8 = FUNC_13(VAR_2);
            if (VAR_8 == ((void*)0)) {
                return -1;
            }
            VAR_15 = FUNC_7(VAR_8, VAR_3);
            if (VAR_15 < 0) {
                return -1;
            }
            if (VAR_3 != ((void*)0)) {
                VAR_3 += VAR_15;
            }
            VAR_16 += VAR_15;
            return VAR_16;
        case 134:
            if (FUNC_9(VAR_2)) {
                FUNC_1("true");
            } else {
                FUNC_1("false");
            }
            return VAR_16;
        case 130:
            VAR_14 = FUNC_11(VAR_2);
            if (VAR_3 != ((void*)0)) {
                VAR_6 = VAR_3;
            }
            VAR_15 = FUNC_15(VAR_6, VAR_1, VAR_14);
            if (VAR_15 < 0) {
                return -1;
            }
            if (VAR_3 != ((void*)0)) {
                VAR_3 += VAR_15;
            }
            VAR_16 += VAR_15;
            return VAR_16;
        case 131:
            FUNC_1("null");
            return VAR_16;
        case 133:
            return -1;
        default:
            return -1;
    }
}
