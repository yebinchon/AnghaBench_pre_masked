
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {scalar_t__ expirations; } ;
struct fd {int flags; int lock; TYPE_1__ timerfd; int cond; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *) ;

__attribute__((used)) static ssize_t FUNC_3(struct fd *VAR_3, void *VAR_4, size_t VAR_5) {
    if (VAR_5 < sizeof(uint64_t))
        return VAR_2;
    FUNC_0(&VAR_3->lock);
    while (VAR_3->timerfd.expirations == 0) {
        if (VAR_3->flags & VAR_0) {
            FUNC_1(&VAR_3->lock);
            return VAR_1;
        }
        FUNC_2(&VAR_3->cond, &VAR_3->lock, ((void*)0));
    }

    *(uint64_t *) VAR_4 = VAR_3->timerfd.expirations;
    VAR_3->timerfd.expirations = 0;
    FUNC_1(&VAR_3->lock);
    return sizeof(uint64_t);
}
