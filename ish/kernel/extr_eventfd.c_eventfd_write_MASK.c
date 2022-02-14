
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {scalar_t__ val; } ;
struct fd {int flags; int lock; int cond; TYPE_1__ eventfd; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fd*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct fd *VAR_4, const void *VAR_5, size_t VAR_6) {
    if (VAR_6 < sizeof(uint64_t))
        return VAR_3;
    uint64_t VAR_7 = *(uint64_t *) VAR_5;
    if (VAR_7 == VAR_1)
        return VAR_3;

    FUNC_0(&VAR_4->lock);
    while (VAR_4->eventfd.val >= VAR_1 - VAR_7) {
        if (VAR_4->flags & VAR_0) {
            FUNC_3(&VAR_4->lock);
            return VAR_2;
        }
        FUNC_4(&VAR_4->cond, &VAR_4->lock, ((void*)0));
    }

    VAR_4->eventfd.val += VAR_7;
    FUNC_1(&VAR_4->cond);
    FUNC_3(&VAR_4->lock);
    FUNC_2(VAR_4);
    return sizeof(uint64_t);
}
