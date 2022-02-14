
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stack_t_ {scalar_t__ stack; int flags; int size; } ;
struct sighand {scalar_t__ altstack; int altstack_size; } ;
struct TYPE_3__ {int esp; } ;
struct TYPE_4__ {TYPE_1__ cpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_0 (int ,struct sighand*) ;

__attribute__((used)) static void FUNC_1(struct sighand *VAR_3, struct stack_t_ *VAR_4) {
    VAR_4->stack = VAR_3->altstack;
    VAR_4->size = VAR_3->altstack_size;
    VAR_4->flags = 0;
    if (VAR_3->altstack == 0)
        VAR_4->flags |= VAR_0;
    if (FUNC_0(VAR_2->cpu.esp, VAR_3))
        VAR_4->flags |= VAR_1;
}
