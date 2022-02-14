
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_entry {int dummy; } ;
struct mem {int pgdir_used; struct pt_entry** pgdir; } ;
typedef int page_t ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 struct pt_entry* FUNC_2 (int ,int) ;

__attribute__((used)) static struct pt_entry *FUNC_3(struct mem *VAR_1, page_t VAR_2) {
    struct pt_entry *VAR_3 = VAR_1->pgdir[FUNC_1(VAR_2)];
    if (VAR_3 == ((void*)0)) {
        VAR_3 = VAR_1->pgdir[FUNC_1(VAR_2)] = FUNC_2(VAR_0, sizeof(struct pt_entry));
        VAR_1->pgdir_used++;
    }
    return &VAR_3[FUNC_0(VAR_2)];
}
