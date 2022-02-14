
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ position_t ;
typedef int Con ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

Con *FUNC_3(Con *VAR_3, position_t VAR_4) {
    Con *VAR_5 = (VAR_4 == VAR_0 ? FUNC_1(VAR_3, VAR_2, VAR_1)
                                         : FUNC_0(VAR_3, VAR_1));
    if (VAR_5 && FUNC_2(VAR_5)) {
        return VAR_5;
    }
    return ((void*)0);
}
