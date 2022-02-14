
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {scalar_t__ owner; scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct file_lock*,struct file_lock*) ;

__attribute__((used)) static bool FUNC_1(struct file_lock *VAR_1, struct file_lock *VAR_2) {
    if (VAR_1->owner == VAR_2->owner)
        return 0;
    if (!FUNC_0(VAR_1, VAR_2))
        return 0;

    if (VAR_1->type == VAR_0 || VAR_2->type == VAR_0)
        return 1;
    return 0;
}
