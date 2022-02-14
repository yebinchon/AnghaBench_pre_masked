
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task {int queue; scalar_t__ waiting; scalar_t__ pending; scalar_t__ blocked; int * vfork; scalar_t__ clear_tid; } ;


 scalar_t__ FUNC_0 (struct task*) ;
 int FUNC_1 (struct task*) ;
 int FUNC_2 (int ) ;
 struct task* FUNC_3 (struct task*) ;
 struct task* VAR_0 ;
 int FUNC_4 (int *) ;
 struct task* FUNC_5 (int) ;

int FUNC_6() {

    struct task *VAR_1 = FUNC_5(1);
    FUNC_2(VAR_1 != ((void*)0));

    struct task *VAR_2 = FUNC_3(VAR_1);
    if (FUNC_0(VAR_2))
        return FUNC_1(VAR_2);


    VAR_2->clear_tid = 0;
    VAR_2->vfork = ((void*)0);
    VAR_2->blocked = VAR_2->pending = VAR_2->waiting = 0;
    FUNC_4(&VAR_2->queue);


    VAR_0 = VAR_2;
    return 0;
}
