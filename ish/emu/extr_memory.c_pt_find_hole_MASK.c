
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem {int dummy; } ;
typedef int pages_t ;
typedef int page_t ;


 int VAR_0 ;
 int * FUNC_0 (struct mem*,int) ;

page_t FUNC_1(struct mem *VAR_1, pages_t VAR_2) {
    page_t VAR_3;
    bool VAR_4 = 0;
    for (page_t VAR_5 = 0xf7ffd; VAR_5 > 0x40000; VAR_5--) {

        if (!VAR_4 && FUNC_0(VAR_1, VAR_5) == ((void*)0)) {
            VAR_4 = 1;
            VAR_3 = VAR_5 + 1;
        }
        if (FUNC_0(VAR_1, VAR_5) != ((void*)0))
            VAR_4 = 0;
        else if (VAR_3 - VAR_5 == VAR_2)
            return VAR_5;
    }
    return VAR_0;
}
