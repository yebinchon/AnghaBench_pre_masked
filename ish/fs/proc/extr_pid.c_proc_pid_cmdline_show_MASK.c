
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct task {TYPE_1__* mm; } ;
struct proc_entry {int dummy; } ;
struct proc_data {int dummy; } ;
struct TYPE_2__ {size_t argv_end; size_t argv_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (size_t) ;
 int FUNC_2 (struct proc_data*,int *,size_t) ;
 struct task* FUNC_3 (struct proc_entry*) ;
 int FUNC_4 (struct task*) ;
 int FUNC_5 (struct task*,size_t,int *,size_t) ;

__attribute__((used)) static int FUNC_6(struct proc_entry *VAR_2, struct proc_data *VAR_3) {
    struct task *VAR_4 = FUNC_3(VAR_2);
    if (VAR_4 == ((void*)0))
        return VAR_1;
    size_t VAR_5 = VAR_4->mm->argv_end - VAR_4->mm->argv_start;
    uint8_t *VAR_6 = FUNC_1(VAR_5);
    if (VAR_6 == ((void*)0))
        return VAR_0;
    int VAR_7 = FUNC_5(VAR_4, VAR_4->mm->argv_start, VAR_6, VAR_5);
    FUNC_2(VAR_3, VAR_6, VAR_5);
    FUNC_0(VAR_6);
    FUNC_4(VAR_4);
    if (VAR_7)
        return 0;
    return VAR_5;
}
