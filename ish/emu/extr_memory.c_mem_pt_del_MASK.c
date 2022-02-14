
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_entry {int * data; } ;
struct mem {int dummy; } ;
typedef int page_t ;


 struct pt_entry* FUNC_0 (struct mem*,int ) ;

__attribute__((used)) static void FUNC_1(struct mem *VAR_0, page_t VAR_1) {
    struct pt_entry *VAR_2 = FUNC_0(VAR_0, VAR_1);
    if (VAR_2 != ((void*)0))
        VAR_2->data = ((void*)0);
}
