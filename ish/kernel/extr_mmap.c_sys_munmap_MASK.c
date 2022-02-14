
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
typedef int int_t ;
typedef int addr_t ;
struct TYPE_4__ {TYPE_1__* mem; } ;
struct TYPE_3__ {int lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,scalar_t__) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int_t FUNC_7(addr_t VAR_2, uint_t VAR_3) {
    FUNC_3("munmap(0x%x, 0x%x)", VAR_2, VAR_3);
    if (FUNC_2(VAR_2) != 0)
        return VAR_0;
    if (VAR_3 == 0)
        return VAR_0;
    FUNC_5(&VAR_1->mem->lock);
    int VAR_4 = FUNC_4(VAR_1->mem, FUNC_0(VAR_2), FUNC_1(VAR_3));
    FUNC_6(&VAR_1->mem->lock);
    if (VAR_4 < 0)
        return VAR_0;
    return 0;
}
