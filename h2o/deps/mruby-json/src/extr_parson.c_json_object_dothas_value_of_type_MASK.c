
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ JSON_Value_Type ;
typedef int JSON_Value ;
typedef int JSON_Object ;


 int * FUNC_0 (int const*,char const*) ;
 scalar_t__ FUNC_1 (int *) ;

int FUNC_2(const JSON_Object *VAR_0, const char *VAR_1, JSON_Value_Type VAR_2) {
    JSON_Value *VAR_3 = FUNC_0(VAR_0, VAR_1);
    return VAR_3 != ((void*)0) && FUNC_1(VAR_3) == VAR_2;
}
