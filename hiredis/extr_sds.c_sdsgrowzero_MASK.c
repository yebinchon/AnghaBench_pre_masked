
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * sds ;


 int FUNC_0 (int ,int ,size_t) ;
 int * FUNC_1 (int *,size_t) ;
 size_t FUNC_2 (int *) ;
 int FUNC_3 (int *,size_t) ;

sds FUNC_4(sds VAR_0, size_t VAR_1) {
    size_t VAR_2 = FUNC_2(VAR_0);

    if (VAR_1 <= VAR_2) return VAR_0;
    VAR_0 = FUNC_1(VAR_0,VAR_1-VAR_2);
    if (VAR_0 == ((void*)0)) return ((void*)0);


    FUNC_0(*(VAR_0+VAR_2),0,(VAR_1-VAR_2+1));
    FUNC_3(VAR_0, VAR_1);
    return VAR_0;
}
