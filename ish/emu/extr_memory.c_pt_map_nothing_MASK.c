
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem {int dummy; } ;
typedef int pages_t ;
typedef int page_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 void* FUNC_0 (int *,int,int,int,int ,int ) ;
 int FUNC_1 (struct mem*,int ,int,void*,int ,unsigned int) ;

int FUNC_2(struct mem *VAR_6, page_t VAR_7, pages_t VAR_8, unsigned VAR_9) {
    if (VAR_8 == 0) return 0;
    void *VAR_10 = FUNC_0(((void*)0), VAR_8 * VAR_2,
            VAR_3 | VAR_4, VAR_1 | VAR_0, 0, 0);
    return FUNC_1(VAR_6, VAR_7, VAR_8, VAR_10, 0, VAR_9 | VAR_5);
}
