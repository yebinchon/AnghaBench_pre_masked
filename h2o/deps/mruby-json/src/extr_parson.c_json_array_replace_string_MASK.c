
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JSON_Value ;
typedef scalar_t__ JSON_Status ;
typedef int JSON_Array ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,size_t,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*) ;

JSON_Status FUNC_3(JSON_Array *VAR_2, size_t VAR_3, const char* VAR_4) {
    JSON_Value *VAR_5 = FUNC_2(VAR_4);
    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }
    if (FUNC_0(VAR_2, VAR_3, VAR_5) == VAR_0) {
        FUNC_1(VAR_5);
        return VAR_0;
    }
    return VAR_1;
}
