
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {int end; int start; } ;



__attribute__((used)) static bool FUNC_0(struct file_lock *VAR_0, struct file_lock *VAR_1) {
    return VAR_0->end == VAR_1->start - 1 || VAR_1->end == VAR_0->start - 1;
}
