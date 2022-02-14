
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task {TYPE_1__* mm; } ;
struct proc_entry {int dummy; } ;
struct TYPE_2__ {int exefile; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct task* FUNC_1 (struct proc_entry*) ;
 int FUNC_2 (struct task*) ;

__attribute__((used)) static int FUNC_3(struct proc_entry *VAR_1, char *VAR_2) {
    struct task *VAR_3 = FUNC_1(VAR_1);
    if (VAR_3 == ((void*)0))
        return VAR_0;
    int VAR_4 = FUNC_0(VAR_3->mm->exefile, VAR_2);
    FUNC_2(VAR_3);
    return VAR_4;
}
