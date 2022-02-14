
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct prg_header {scalar_t__ type; scalar_t__ vaddr; scalar_t__ memsize; } ;
struct elf_header {int phent_count; } ;
typedef scalar_t__ pages_t ;
typedef int addr_t ;
struct TYPE_2__ {int mem; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static addr_t FUNC_3(struct elf_header *VAR_3, struct prg_header *VAR_4) {
    struct prg_header *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
    for (int VAR_7 = 0; VAR_7 < VAR_3->phent_count; VAR_7++) {
        if (VAR_4[VAR_7].type == VAR_1) {
            if (VAR_5 == ((void*)0))
                VAR_5 = &VAR_4[VAR_7];
            VAR_6 = &VAR_4[VAR_7];
        }
    }
    pages_t VAR_8 = 0;
    if (VAR_5 != ((void*)0)) {
        pages_t VAR_9 = FUNC_1(VAR_6->vaddr + VAR_6->memsize);
        pages_t VAR_10 = FUNC_0(VAR_5->vaddr);
        VAR_8 = VAR_9 - VAR_10;
    }
    return FUNC_2(VAR_2->mem, VAR_8) << VAR_0;
}
