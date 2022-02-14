
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sds ;


 int FUNC_0 (int const,int const,size_t) ;
 size_t FUNC_1 (int const) ;

int FUNC_2(const sds VAR_0, const sds VAR_1) {
    size_t VAR_2, VAR_3, VAR_4;
    int VAR_5;

    VAR_2 = FUNC_1(VAR_0);
    VAR_3 = FUNC_1(VAR_1);
    VAR_4 = (VAR_2 < VAR_3) ? VAR_2 : VAR_3;
    VAR_5 = FUNC_0(VAR_0,VAR_1,VAR_4);
    if (VAR_5 == 0) return VAR_2-VAR_3;
    return VAR_5;
}
