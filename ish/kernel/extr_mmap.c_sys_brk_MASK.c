
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
struct mm {scalar_t__ start_brk; scalar_t__ brk; TYPE_1__ mem; } ;
typedef scalar_t__ addr_t ;
struct TYPE_5__ {struct mm* mm; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_3 (TYPE_1__*,scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

addr_t FUNC_7(addr_t VAR_3) {
    FUNC_2("brk(0x%x)", VAR_3);
    struct mm *VAR_4 = VAR_2->mm;

    if (VAR_3 != 0 && VAR_3 < VAR_4->start_brk)
        return VAR_1;
    FUNC_5(&VAR_4->mem.lock);
    addr_t VAR_5 = VAR_4->brk;
    if (VAR_3 == 0) {
        FUNC_6(&VAR_4->mem.lock);
        return VAR_5;
    }


    if (VAR_3 > VAR_5) {

        int VAR_6 = FUNC_3(&VAR_4->mem, FUNC_1(VAR_5),
                FUNC_1(VAR_3) - FUNC_1(VAR_5), VAR_0);
        if (VAR_6 < 0) {
            FUNC_6(&VAR_4->mem.lock);
            return VAR_6;
        }
    } else if (VAR_3 < VAR_5) {



        FUNC_4(&VAR_4->mem, FUNC_0(VAR_3), FUNC_0(VAR_5));
    }

    VAR_4->brk = VAR_3;
    FUNC_6(&VAR_4->mem.lock);
    return VAR_3;
}
