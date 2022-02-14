
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JSON_Value_Type ;
typedef int JSON_Value ;
typedef int JSON_Status ;
typedef int JSON_Object ;
typedef int JSON_Array ;





 int VAR_0 ;





 int VAR_1 ;
 size_t FUNC_0 (int *) ;
 int * FUNC_1 (int *,size_t) ;
 size_t FUNC_2 (int *) ;
 char* FUNC_3 (int *,size_t) ;
 int * FUNC_4 (int *,char const*) ;
 int * FUNC_5 (int const*) ;
 int * FUNC_6 (int const*) ;
 int FUNC_7 (int const*) ;

JSON_Status FUNC_8(const JSON_Value *VAR_2, const JSON_Value *VAR_3) {
    JSON_Value *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
    JSON_Array *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
    JSON_Object *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
    JSON_Value_Type VAR_10 = 133, VAR_11 = 133;
    const char *VAR_12 = ((void*)0);
    size_t VAR_13 = 0, VAR_14 = 0;
    if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0)) {
        return VAR_0;
    }
    VAR_10 = FUNC_7(VAR_2);
    VAR_11 = FUNC_7(VAR_3);
    if (VAR_10 != VAR_11 && VAR_10 != 131) {
        return VAR_0;
    }
    switch (VAR_10) {
        case 135:
            VAR_6 = FUNC_5(VAR_2);
            VAR_7 = FUNC_5(VAR_3);
            VAR_14 = FUNC_0(VAR_6);
            if (VAR_14 == 0) {
                return VAR_1;
            }

            VAR_4 = FUNC_1(VAR_6, 0);
            for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_7); VAR_13++) {
                VAR_5 = FUNC_1(VAR_7, VAR_13);
                if (FUNC_8(VAR_4, VAR_5) == VAR_0) {
                    return VAR_0;
                }
            }
            return VAR_1;
        case 129:
            VAR_8 = FUNC_6(VAR_2);
            VAR_9 = FUNC_6(VAR_3);
            VAR_14 = FUNC_2(VAR_8);
            if (VAR_14 == 0) {
                return VAR_1;
            } else if (FUNC_2(VAR_9) < VAR_14) {
                return VAR_0;
            }
            for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
                VAR_12 = FUNC_3(VAR_8, VAR_13);
                VAR_4 = FUNC_4(VAR_8, VAR_12);
                VAR_5 = FUNC_4(VAR_9, VAR_12);
                if (VAR_5 == ((void*)0)) {
                    return VAR_0;
                }
                if (FUNC_8(VAR_4, VAR_5) == VAR_0) {
                    return VAR_0;
                }
            }
            return VAR_1;
        case 128: case 130: case 134: case 131:
            return VAR_1;




        case 133: default:
            return VAR_0;
    }
}
