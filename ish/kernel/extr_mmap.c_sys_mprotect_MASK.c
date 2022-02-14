
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint_t ;
typedef int pages_t ;
typedef int int_t ;
typedef int addr_t ;
struct TYPE_4__ {TYPE_1__* mem; } ;
struct TYPE_3__ {int lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (char*,int ,int ,int) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_4 (TYPE_1__*,int ,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int_t FUNC_7(addr_t VAR_3, uint_t VAR_4, int_t VAR_5) {
    FUNC_3("mprotect(0x%x, 0x%x, 0x%x)", VAR_3, VAR_4, VAR_5);
    if (FUNC_2(VAR_3) != 0)
        return VAR_1;
    if (VAR_5 & ~VAR_0)
        return VAR_1;
    pages_t VAR_6 = FUNC_1(VAR_4);
    FUNC_5(&VAR_2->mem->lock);
    int VAR_7 = FUNC_4(VAR_2->mem, FUNC_0(VAR_3), VAR_6, VAR_5);
    FUNC_6(&VAR_2->mem->lock);
    return VAR_7;
}
