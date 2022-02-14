
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_entry {int * data; } ;
struct mem {struct pt_entry** pgdir; } ;
typedef int page_t ;


 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;

struct pt_entry *FUNC_2(struct mem *VAR_0, page_t VAR_1) {
    struct pt_entry *VAR_2 = VAR_0->pgdir[FUNC_1(VAR_1)];
    if (VAR_2 == ((void*)0))
        return ((void*)0);
    struct pt_entry *VAR_3 = &VAR_2[FUNC_0(VAR_1)];
    if (VAR_3->data == ((void*)0))
        return ((void*)0);
    return VAR_3;
}
