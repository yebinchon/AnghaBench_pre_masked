
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {int locks; int pid; int owner; int type; int end; int start; } ;


 int FUNC_0 (int *) ;
 struct file_lock* FUNC_1 (int) ;

__attribute__((used)) static struct file_lock *FUNC_2(struct file_lock *VAR_0) {
    struct file_lock *VAR_1 = FUNC_1(sizeof(struct file_lock));
    VAR_1->start = VAR_0->start;
    VAR_1->end = VAR_0->end;
    VAR_1->type = VAR_0->type;
    VAR_1->owner = VAR_0->owner;
    VAR_1->pid = VAR_0->pid;
    FUNC_0(&VAR_1->locks);
    return VAR_1;
}
