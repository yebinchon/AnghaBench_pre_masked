
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flock_ {scalar_t__ start; scalar_t__ len; int pid; int whence; int type; } ;
struct file_lock {scalar_t__ start; scalar_t__ end; int pid; int type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct file_lock *VAR_2, struct flock_ *VAR_3) {
    VAR_3->type = VAR_2->type;
    VAR_3->whence = VAR_0;
    VAR_3->start = VAR_2->start;
    if (VAR_2->end != VAR_1)
        VAR_3->len = VAR_2->end - VAR_2->start + 1;
    else
        VAR_3->len = 0;
    VAR_3->pid = VAR_2->pid;
    return 0;
}
