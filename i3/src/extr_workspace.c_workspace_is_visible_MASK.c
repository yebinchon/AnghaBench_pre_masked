
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Con ;


 int VAR_0 ;
 int FUNC_0 (char*,int *,int *) ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;

bool FUNC_3(Con *VAR_1) {
    Con *VAR_2 = FUNC_2(VAR_1);
    if (VAR_2 == ((void*)0))
        return 0;
    Con *VAR_3 = FUNC_1(VAR_2, VAR_0);
    FUNC_0("workspace visible? fs = %p, ws = %p\n", VAR_3, VAR_1);
    return (VAR_3 == VAR_1);
}
