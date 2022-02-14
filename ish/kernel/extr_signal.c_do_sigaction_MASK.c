
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sighand {int lock; struct sigaction_* action; } ;
struct sigaction_ {int dummy; } ;
struct TYPE_2__ {struct sighand* sighand; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(int VAR_3, const struct sigaction_ *VAR_4, struct sigaction_ *VAR_5) {
    if (VAR_3 >= VAR_0)
        return VAR_1;
    if (!FUNC_1(VAR_3))
        return VAR_1;

    struct sighand *VAR_6 = VAR_2->sighand;
    FUNC_0(&VAR_6->lock);
    if (VAR_5)
        *VAR_5 = VAR_6->action[VAR_3];
    if (VAR_4)
        VAR_6->action[VAR_3] = *VAR_4;
    FUNC_2(&VAR_6->lock);
    return 0;
}
