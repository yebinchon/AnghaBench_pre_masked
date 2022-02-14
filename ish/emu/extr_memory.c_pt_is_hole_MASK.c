
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem {int dummy; } ;
typedef scalar_t__ pages_t ;
typedef scalar_t__ page_t ;


 int * FUNC_0 (struct mem*,scalar_t__) ;

bool FUNC_1(struct mem *VAR_0, page_t VAR_1, pages_t VAR_2) {
    for (page_t VAR_3 = VAR_1; VAR_3 < VAR_1 + VAR_2; VAR_3++) {
        if (FUNC_0(VAR_0, VAR_3) != ((void*)0))
            return 0;
    }
    return 1;
}
