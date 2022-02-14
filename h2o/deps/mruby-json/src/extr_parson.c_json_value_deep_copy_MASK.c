
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const JSON_Value ;
typedef int JSON_Object ;
typedef int JSON_Array ;





 int VAR_0 ;





 int FUNC_0 (int *,int const*) ;
 size_t FUNC_1 (int *) ;
 int const* FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *,char const*,int const*) ;
 size_t FUNC_4 (int *) ;
 char* FUNC_5 (int *,size_t) ;
 int const* FUNC_6 (int *,char const*) ;
 int FUNC_7 (int const*) ;
 int * FUNC_8 (int const*) ;
 int FUNC_9 (int const*) ;
 int FUNC_10 (int const*) ;
 int FUNC_11 (int const*) ;
 int * FUNC_12 (int const*) ;
 char* FUNC_13 (int const*) ;
 int FUNC_14 (int const*) ;
 int const* FUNC_15 () ;
 int const* FUNC_16 (int ) ;
 int const* FUNC_17 (int ) ;
 int const* FUNC_18 () ;
 int const* FUNC_19 (int ) ;
 int const* FUNC_20 () ;
 int const* FUNC_21 (char*) ;
 int FUNC_22 (char*) ;
 char* FUNC_23 (char const*) ;

JSON_Value * FUNC_24(const JSON_Value *VAR_1) {
    size_t VAR_2 = 0;
    JSON_Value *VAR_3 = ((void*)0), *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
    const char *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
    char *VAR_8 = ((void*)0);
    JSON_Array *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
    JSON_Object *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);

    switch (FUNC_14(VAR_1)) {
        case 135:
            VAR_9 = FUNC_8(VAR_1);
            VAR_3 = FUNC_15();
            if (VAR_3 == ((void*)0)) {
                return ((void*)0);
            }
            VAR_10 = FUNC_8(VAR_3);
            for (VAR_2 = 0; VAR_2 < FUNC_1(VAR_9); VAR_2++) {
                VAR_5 = FUNC_2(VAR_9, VAR_2);
                VAR_4 = FUNC_24(VAR_5);
                if (VAR_4 == ((void*)0)) {
                    FUNC_7(VAR_3);
                    return ((void*)0);
                }
                if (FUNC_0(VAR_10, VAR_4) == VAR_0) {
                    FUNC_7(VAR_3);
                    FUNC_7(VAR_4);
                    return ((void*)0);
                }
            }
            return VAR_3;
        case 129:
            VAR_11 = FUNC_12(VAR_1);
            VAR_3 = FUNC_20();
            if (VAR_3 == ((void*)0)) {
                return ((void*)0);
            }
            VAR_12 = FUNC_12(VAR_3);
            for (VAR_2 = 0; VAR_2 < FUNC_4(VAR_11); VAR_2++) {
                VAR_7 = FUNC_5(VAR_11, VAR_2);
                VAR_5 = FUNC_6(VAR_11, VAR_7);
                VAR_4 = FUNC_24(VAR_5);
                if (VAR_4 == ((void*)0)) {
                    FUNC_7(VAR_3);
                    return ((void*)0);
                }
                if (FUNC_3(VAR_12, VAR_7, VAR_4) == VAR_0) {
                    FUNC_7(VAR_3);
                    FUNC_7(VAR_4);
                    return ((void*)0);
                }
            }
            return VAR_3;
        case 134:
            return FUNC_16(FUNC_9(VAR_1));
        case 130:
            return FUNC_19(FUNC_11(VAR_1));




        case 128:
            VAR_6 = FUNC_13(VAR_1);
            if (VAR_6 == ((void*)0)) {
                return ((void*)0);
            }
            VAR_8 = FUNC_23(VAR_6);
            if (VAR_8 == ((void*)0)) {
                return ((void*)0);
            }
            VAR_3 = FUNC_21(VAR_8);
            if (VAR_3 == ((void*)0)) {
                FUNC_22(VAR_8);
            }
            return VAR_3;
        case 131:
            return FUNC_18();
        case 133:
            return ((void*)0);
        default:
            return ((void*)0);
    }
}
