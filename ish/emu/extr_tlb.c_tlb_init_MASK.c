
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlb {int dirty_page; struct mem* mem; } ;
struct mem {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tlb*) ;

void FUNC_1(struct tlb *VAR_1, struct mem *VAR_2) {
    VAR_1->mem = VAR_2;
    VAR_1->dirty_page = VAR_0;
    FUNC_0(VAR_1);
}
