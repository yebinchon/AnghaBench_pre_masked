
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty {int dummy; } ;
struct TYPE_4__ {TYPE_1__* group; } ;
struct TYPE_3__ {int lock; struct tty* tty; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct tty *VAR_1) {
    FUNC_0(&VAR_0->group->lock);
    bool VAR_2 = VAR_0->group->tty == VAR_1;
    FUNC_1(&VAR_0->group->lock);
    return VAR_2;
}
