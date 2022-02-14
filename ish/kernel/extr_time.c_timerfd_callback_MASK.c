
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int expirations; } ;
struct fd {int lock; int cond; TYPE_1__ timerfd; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fd*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct fd *VAR_0) {
    FUNC_0(&VAR_0->lock);
    VAR_0->timerfd.expirations++;
    FUNC_1(&VAR_0->cond);
    FUNC_3(&VAR_0->lock);
    FUNC_2(VAR_0);
}
