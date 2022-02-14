
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task {int thread; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int *,int ,struct task*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_2(struct task *VAR_2) {
    if (FUNC_1(&VAR_2->thread, &VAR_1, VAR_0, VAR_2) < 0)
        FUNC_0("could not create thread");
}
