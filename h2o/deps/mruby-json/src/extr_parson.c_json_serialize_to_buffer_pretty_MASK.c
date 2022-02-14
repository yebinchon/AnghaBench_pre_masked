
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JSON_Value ;
typedef int JSON_Status ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int const*) ;
 int FUNC_1 (int const*,char*,int ,int,int *) ;

JSON_Status FUNC_2(const JSON_Value *VAR_2, char *VAR_3, size_t VAR_4) {
    int VAR_5 = -1;
    size_t VAR_6 = FUNC_0(VAR_2);
    if (VAR_6 == 0 || VAR_4 < VAR_6) {
        return VAR_0;
    }
    VAR_5 = FUNC_1(VAR_2, VAR_3, 0, 1, ((void*)0));
    if (VAR_5 < 0) {
        return VAR_0;
    }
    return VAR_1;
}
