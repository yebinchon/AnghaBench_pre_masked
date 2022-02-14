
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem {int ** pgdir; } ;
typedef scalar_t__ page_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 size_t FUNC_1 (scalar_t__) ;

void FUNC_2(struct mem *VAR_2, page_t *VAR_3) {
    (*VAR_3)++;
    if (*VAR_3 >= VAR_0)
        return;
    while (*VAR_3 < VAR_0 && VAR_2->pgdir[FUNC_1(*VAR_3)] == ((void*)0))
        *VAR_3 = (*VAR_3 - FUNC_0(*VAR_3)) + VAR_1;
}
