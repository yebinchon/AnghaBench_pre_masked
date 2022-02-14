
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rusage_ {int dummy; } ;
typedef int dword_t ;
typedef int addr_t ;
struct TYPE_4__ {TYPE_1__* group; } ;
struct TYPE_3__ {int lock; struct rusage_ children_rusage; } ;




 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int *) ;
 struct rusage_ FUNC_1 () ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,struct rusage_) ;

dword_t FUNC_4(dword_t VAR_3, addr_t VAR_4) {
    struct rusage_ VAR_5;
    switch (VAR_3) {
        case 128:
            VAR_5 = FUNC_1();
            break;
        case 129:
            FUNC_0(&VAR_2->group->lock);
            VAR_5 = VAR_2->group->children_rusage;
            FUNC_2(&VAR_2->group->lock);
            break;
        default:
            return VAR_1;
    }
    if (FUNC_3(VAR_4, VAR_5))
        return VAR_0;
    return 0;
}
