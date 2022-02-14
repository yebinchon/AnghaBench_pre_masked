
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stack_t_ {int flags; scalar_t__ size; int stack; } ;
struct sighand {scalar_t__ altstack_size; int lock; int altstack; } ;
typedef int dword_t ;
typedef scalar_t__ addr_t ;
struct TYPE_3__ {int esp; } ;
struct TYPE_4__ {TYPE_1__ cpu; struct sighand* sighand; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sighand*,struct stack_t_*) ;
 TYPE_2__* VAR_5 ;
 scalar_t__ FUNC_2 (int ,struct sighand*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__,struct stack_t_) ;
 scalar_t__ FUNC_6 (scalar_t__,struct stack_t_) ;

dword_t FUNC_7(addr_t VAR_6, addr_t VAR_7) {
    FUNC_0("sigaltstack(0x%x, 0x%x)", VAR_6, VAR_7);
    struct sighand *VAR_8 = VAR_5->sighand;
    FUNC_3(&VAR_8->lock);
    if (VAR_7 != 0) {
        struct stack_t_ VAR_9;
        FUNC_1(VAR_8, &VAR_9);
        if (FUNC_6(VAR_7, VAR_9)) {
            FUNC_4(&VAR_8->lock);
            return VAR_2;
        }
    }
    if (VAR_6 != 0) {
        if (FUNC_2(VAR_5->cpu.esp, VAR_8)) {
            FUNC_4(&VAR_8->lock);
            return VAR_4;
        }
        struct stack_t_ VAR_10;
        if (FUNC_5(VAR_6, VAR_10)) {
            FUNC_4(&VAR_8->lock);
            return VAR_2;
        }
        if (VAR_10.flags & VAR_1) {
            VAR_8->altstack = 0;
        } else {
            if (VAR_10.size < VAR_0)
                return VAR_3;
            VAR_8->altstack = VAR_10.stack;
            VAR_8->altstack_size = VAR_10.size;
        }
    }
    FUNC_4(&VAR_8->lock);
    return 0;
}
