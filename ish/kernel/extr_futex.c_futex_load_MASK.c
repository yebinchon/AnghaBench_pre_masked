
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct futex {scalar_t__ mem; int addr; } ;
typedef int dword_t ;
struct TYPE_2__ {scalar_t__ mem; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_1 ;
 int * FUNC_1 (scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct futex *VAR_2, dword_t *VAR_3) {
    FUNC_0(VAR_2->mem == VAR_1->mem);
    dword_t *VAR_4 = FUNC_1(VAR_1->mem, VAR_2->addr, VAR_0);
    if (VAR_4 == ((void*)0))
        return 1;
    *VAR_3 = *VAR_4;
    return 0;
}
