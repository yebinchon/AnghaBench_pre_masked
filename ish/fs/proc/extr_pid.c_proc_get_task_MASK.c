
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task {int dummy; } ;
struct proc_entry {int pid; } ;


 int FUNC_0 (int *) ;
 struct task* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct task *FUNC_3(struct proc_entry *VAR_1) {
    FUNC_0(&VAR_0);
    struct task *VAR_2 = FUNC_1(VAR_1->pid);
    if (VAR_2 == ((void*)0))
        FUNC_2(&VAR_0);
    return VAR_2;
}
