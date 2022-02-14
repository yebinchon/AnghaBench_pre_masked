
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct futex {int cond; } ;
typedef int dword_t ;
typedef int addr_t ;


 int FUNC_0 (char*,int) ;
 struct futex* FUNC_1 (int ) ;
 int FUNC_2 (struct futex*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(addr_t VAR_0, dword_t VAR_1) {
    struct futex *VAR_2 = FUNC_1(VAR_0);
    if (VAR_1 == 1)
        FUNC_4(&VAR_2->cond);
    else if (VAR_1 == 0x7fffffff)
        FUNC_3(&VAR_2->cond);
    else
        FUNC_0("invalid number of futex wakes %d", VAR_1);
    FUNC_2(VAR_2);
    return VAR_1;
}
