
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JSON_Value_Type ;
typedef int JSON_Value ;
typedef int JSON_Object ;
typedef int JSON_Array ;
 double FUNC_0 (scalar_t__) ;
 size_t FUNC_1 (int *) ;
 int * FUNC_2 (int *,size_t) ;
 size_t FUNC_3 (int *) ;
 char* FUNC_4 (int *,size_t) ;
 int * FUNC_5 (int *,char const*) ;
 int * FUNC_6 (int const*) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int const*) ;
 scalar_t__ FUNC_9 (int const*) ;
 int * FUNC_10 (int const*) ;
 char* FUNC_11 (int const*) ;
 int FUNC_12 (int const*) ;
 int FUNC_13 (char const*,char const*) ;

int FUNC_14(const JSON_Value *VAR_0, const JSON_Value *VAR_1) {
    JSON_Object *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);
    JSON_Array *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
    const char *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
    const char *VAR_8 = ((void*)0);
    size_t VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
    JSON_Value_Type VAR_12, VAR_13;
    VAR_12 = FUNC_12(VAR_0);
    VAR_13 = FUNC_12(VAR_1);
    if (VAR_12 != VAR_13) {
        return 0;
    }
    switch (VAR_12) {
        case 135:
            VAR_4 = FUNC_6(VAR_0);
            VAR_5 = FUNC_6(VAR_1);
            VAR_9 = FUNC_1(VAR_4);
            VAR_10 = FUNC_1(VAR_5);
            if (VAR_9 != VAR_10) {
                return 0;
            }
            for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
                if (!FUNC_14(FUNC_2(VAR_4, VAR_11),
                                       FUNC_2(VAR_5, VAR_11))) {
                    return 0;
                }
            }
            return 1;
        case 129:
            VAR_2 = FUNC_10(VAR_0);
            VAR_3 = FUNC_10(VAR_1);
            VAR_9 = FUNC_3(VAR_2);
            VAR_10 = FUNC_3(VAR_3);
            if (VAR_9 != VAR_10) {
                return 0;
            }
            for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
                VAR_8 = FUNC_4(VAR_2, VAR_11);
                if (!FUNC_14(FUNC_5(VAR_2, VAR_8),
                                       FUNC_5(VAR_3, VAR_8))) {
                    return 0;
                }
            }
            return 1;
        case 128:
            VAR_6 = FUNC_11(VAR_0);
            VAR_7 = FUNC_11(VAR_1);
            if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0)) {
                return 0;
            }
            return FUNC_13(VAR_6, VAR_7) == 0;
        case 134:
            return FUNC_7(VAR_0) == FUNC_7(VAR_1);
        case 130:
            return FUNC_0(FUNC_9(VAR_0) - FUNC_9(VAR_1)) < 0.000001;




        case 133:
            return 1;
        case 131:
            return 1;
        default:
            return 1;
    }
}
